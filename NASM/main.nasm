section .data
    message: db  "Hello NASM", 0xa ; 0xa = '\n'
    length:  equ $ - message       ; len(message)
    bitmsg:  db  "Number of bits in 1234 is %d", 0xa
    bitlen:  equ $ - bitmsg

section .text
    
    extern printf
    extern BitCounter

    global main

main:
    mov rax, 1       ; system call for write
    mov rdi, 1       ; making file handle stdout
    mov rsi, message ; passing adress of string to output
    mov rdx, length  ; number of bytes
    syscall          ; invoking os to write

    mov  rdi, 1234  ; BitCounter expects value to work with in the destination index (di)
    call BitCounter ; stores return in primary accumulator (ax)
    mov  rdi, bitmsg
    mov  rsi, rax
    xor  rax, rax
    call printf

    mov rax, 60  ; sys call for exit
    xor rdi, rdi ; clear destination index (exit code 0)
    syscall      ; invoke os to exit
