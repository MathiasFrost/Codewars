    extern BitCounter

    global _start

    section .text
_start: 
    mov rax, 1                ; system call for write
    mov rdi, 1                ; making file handle stdout
    mov rsi, message          ; passing adress of string to output
    mov rdx, length           ; number of bytes
    syscall                   ; invoking os to write

    call BitCounter

    mov rax, 60               ; sys call for exit
    xor rdi, rdi              ; exit code 0
    syscall                   ; invoke os to exit

    section .data
message: db "Hello NASM", 0xa ; 0xa = '\n'
length: equ $ - message       ; len(message)