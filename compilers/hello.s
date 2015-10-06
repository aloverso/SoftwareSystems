    .file   "examples/hello.bf"
    .comm   tape,4000,32
    .globl  i
    .data
    .align 8
    .type   i, @object
    .size   i, 8
i:
    .quad   tape
    .text
    .globl  main
    .type   main, @function
.LC0:
    .string "stty -icanon"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $.LC0, %edi
    call    system
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
# [
.loops1:
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    cmpb    $0, %al
    je  .loope1
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # <
	movq	i(%rip), %rax
	subq	$1, %rax
	movq	%rax, i(%rip)
    # <
	movq	i(%rip), %rax
	subq	$1, %rax
	movq	%rax, i(%rip)
    # <
	movq	i(%rip), %rax
	subq	$1, %rax
	movq	%rax, i(%rip)
    # <
	movq	i(%rip), %rax
	subq	$1, %rax
	movq	%rax, i(%rip)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # ]
    jmp .loops1
.loope1:
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # <
	movq	i(%rip), %rax
	subq	$1, %rax
	movq	%rax, i(%rip)
    # <
	movq	i(%rip), %rax
	subq	$1, %rax
	movq	%rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # -
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    subl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # +
    movq    i(%rip), %rax
    movzbl  (%rax), %edx
    addl    $1, %edx
    movb    %dl, (%rax)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    # >
    movq    i(%rip), %rax
    addq    $1, %rax
    movq    %rax, i(%rip)
    # .
    movq    i(%rip), %rax
    movzbl  (%rax), %eax
    movsbl  %al, %eax
    movl    %eax, %edi
    call    putchar
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .section    .note.GNU-stack,"",@progbits
