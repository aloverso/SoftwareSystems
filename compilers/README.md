# subfusc - the brainfuck compiler in C

This is a C program I wrote that will compile a program written in [brainfuck](https://en.wikipedia.org/wiki/Brainfuck).
It's named **subfusc** because it's a word that contains the letters "b", "f", "c" in order, and because it means "dull, gloomy, and devoid of appeal", and while this compiler was A LOT of fun to write and figure out, it is devoid of appeal for use in any real situation.

## Usage

First, compile the C program into an executable
```
$ gcc subfusc.c -o subfusc
```

Then, run the program with the brainfuck code as arguments.  The argument structure of the program is as follows:
```
$ ./subfusc <brainfuck source code> <target assembly file> [target executable file]
```

If you don't specify a target executable file, subfusc will create the assembly code, but you will have to assemble it yourself by running:
```
$ gcc <assembly file> -o <executable file name>
```

For example, the following lines will compile, assemble, and run the Hello World brainfuck program (assuming you have compiled the subfusc source):
```
$ ./subfusc examples/hello.bf hello.s hello
$ ./hello
```

## Making Of
The development of subfusc was heavily influenced by the [naegleria compiler](https://igor.io/2014/10/27/compiling-brainfuck.html), which was written in PHP.  I used the same process as illustrated in the linked blog post, since I don't actually know how to write assembly code, but went through the process on my own to understand the C translation of each brainfuck command.

I created a test program where I implemented each individual brainfuck command equivalent in C.  I think compiled it and took a look at the assembly output, and copied those files into my compiler output.

## Limitations
subfusc does absolutely no optimization - it goes through each command at face level without regard to what comes before or after.  

subfusc does implement minimal syntax error checking - it takes two passes through the program, and on the first checks solely for syntax errors.  Currently, the only syntax error it will detect are mismatched loop brackets.  The following are all examples of mismatched loops it will catch:
```
[
][
[[]
[]]
```
and so on.  If subfusc finds a syntax error, it will halt compilation and print an error message to the screen. In some cases, it will be able print the character location of the mismatching error.

Another limitation is that subfusc is a compiler in the most pure sense of the word - it compiles source code to assembly code, but does not perform the extra steps such as assembling, which programs like gcc typically include.
