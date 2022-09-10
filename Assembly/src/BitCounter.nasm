	global BitCounter

	section .data
str:   db "Test", 0xa
len:   equ ($ - str)
temp: 

	section .bss
iter:  resb 1

	section .text
BitCounter:

	mov ecx, 0
	L1:

		mov rax, 1     ; write
		mov rdi, 1     ; stdout
		mov rsi, str
		mov rdx, len
		syscall

		inc ecx
		cmp ecx, 10
		jl  L1

	ret