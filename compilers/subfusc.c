#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// compiles a string of brainfuck code into assembly and publishes to file f
void compile(char *code, FILE *f)
{
	char *length = strdup(code);
	int i =0;
	int stack[100];
	int stackvar = -1;
	int loopid = 0;
	int condid = 0;

	// what's a better way of looping through each character in a string?
	while (*length)
	{
		if (code[i]=='+')
		{
			fprintf(f, "%s\n%s\n%s\n%s\n%s\n",
				"    # +",
				"    movq    i(%rip), %rax",
				"    movzbl  (%rax), %edx",
				"    addl    $1, %edx",
				"    movb    %dl, (%rax)");
		}
		if (code[i]=='-')
		{
			fprintf(f, "%s\n%s\n%s\n%s\n%s\n",
				"    # -",
				"    movq    i(%rip), %rax",
				"    movzbl  (%rax), %edx",
				"    subl    $1, %edx",
				"    movb    %dl, (%rax)");
		}
		if (code[i]=='>')
		{
			fprintf(f, "%s\n%s\n%s\n%s\n",
				"    # >",
				"    movq    i(%rip), %rax",
				"    addq    $1, %rax",
				"    movq    %rax, i(%rip)");
		}
		if (code[i]=='<')
		{
			fprintf(f, "%s\n%s\n%s\n%s\n",
				"    # <",
				"	movq	i(%rip), %rax",
				"	subq	$1, %rax",
				"	movq	%rax, i(%rip)");
		}
		if (code[i]=='.')
		{
			fprintf(f, "%s\n%s\n%s\n%s\n%s\n%s\n",
				"    # .",
				"    movq    i(%rip), %rax",
				"    movzbl  (%rax), %eax",
				"    movsbl  %al, %eax",
				"    movl    %eax, %edi",
				"    call    putchar");
		}
		if (code[i]==',')
		{
			condid++;
			fprintf(f, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s%i\n%s\n%s\n%s%i%s\n",
                "    # ,",
                "    movq    i(%rip), %rbx",
                "    call    getchar",
                "    movb    %al, (%rbx)",
                "    movq    i(%rip), %rax",
                "    movzbl  (%rax), %eax",
                "    cmpb    $4, %al",
                "    jne .cond", condid,
                "    movq    i(%rip), %rax",
                "    movb    $0, (%rax)",
                ".cond",condid,":");
		}
		if (code[i]=='[')
		{
			// keep track of loop nesting depth
			stackvar++;
			loopid++;
			stack[stackvar] = loopid;
			fprintf(f, "%s\n%s%i%s\n%s\n%s\n%s\n%s%i\n",
                "# [",
                ".loops", loopid, ":",
                "    movq    i(%rip), %rax",
                "    movzbl  (%rax), %eax",
                "    cmpb    $0, %al",
                "    je  .loope",loopid);
		}
		if (code[i]==']')
		{
			// pop loop nesting depth from stack
			int endloopid = stack[stackvar];
			stackvar--;
			fprintf(f, "%s\n%s%i\n%s%i%s\n",
				"    # ]",
				"    jmp .loops", endloopid,
				".loope", endloopid,":");
		}
		i++;
		length++;
	}
}

int check_syntax(char *code)
{
	char *length = strdup(code);
	int i =0;
	int nest_level = 0;

	// what's a better way of looping through each character in a string?
	while (*length)
	{
		if (code[i]=='[')
		{
			nest_level++;
		}
		if (code[i]==']')
		{
			if (nest_level > 0)
			{
				nest_level--;
			}
			else
			{
				fprintf(stderr, "%s%i\n", "Compile failed:\nSYNTAX ERROR: Mismatched loop nesting at character ", i);
				return 0;
			}
		}
		i++;
		length++;
	}

	if (nest_level != 0)
	{
		fprintf(stderr, "%s\n", "Compiler failed:\nSYNTAX ERROR: Mismatched loop nesting");
		return 0;
	} 

	return 1;
}

// top of assembly file
void make_template_top(FILE *f, const char *source_name)
{
	// this is a kinda awful tbh.
	fprintf(f, "%s%s%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		"    .file   \"", source_name, "\"",
		"    .comm   tape,4000,32",
		"    .globl  i",
		"    .data",
		"    .align 8",
		"    .type   i, @object",
		"    .size   i, 8",
		"i:",
		"    .quad   tape",
		"    .text",
		"    .globl  main",
		"    .type   main, @function",
		".LC0:",
		"    .string \"stty -icanon\"",
		"    .text",
		"    .globl  main",
		"    .type   main, @function",
		"main:",
		".LFB0:",
		"    .cfi_startproc",
		"    pushq   %rbp",
		"    .cfi_def_cfa_offset 16",
		"    .cfi_offset 6, -16",
		"    movq    %rsp, %rbp",
		"    .cfi_def_cfa_register 6",
		"    movl    $.LC0, %edi",
		"    call    system");
}

// bottom of assembly file
void make_template_bottom(FILE *f)
{
	fprintf(f, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		"    popq    %rbp",
		"    .cfi_def_cfa 7, 8",
		"    ret",
		"    .cfi_endproc",
		".LFE0:",
		"    .size   main, .-main",
		"    .section    .note.GNU-stack,\"\",@progbits");
	// I deleted the second-to-last line that stated my OS details like this:
	//    .ident  "GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	// It still seems to run fine, and this code wasn't transferrable...
}

int main(int argc, char *argv[])
{
	// reads 4000 characters of brainfuck
	char brainfuck[4000];
	
	FILE *in = fopen(argv[1], "r");
	FILE *out = fopen(argv[2], "w");

	// read from "in" file into brainfuck array
	fread(brainfuck, 4000, 1, in);
	fclose(in);

	if (!check_syntax(brainfuck))
	{
		return -1;
	}

	// create assembly file
	make_template_top(out, argv[1]);
	compile(brainfuck, out);
	make_template_bottom(out);
	fclose(out);

	// if a third object argument is specified, compile the .o file 
	if (argv[3])
	{
		char command[80];
		sprintf (command, "gcc %s -o %s", argv[2], argv[3]);
		system (command);
	}
}