section .text

	global BitCounter

BitCounter:

	mov rax, 0
	cmp rdi, 0 ; input is expected to be found in destination index (di)
	je end     ; jump to end if 0

	while:

		inc rax

		mov rsi, rdi
		dec rsi
		and rdi, rsi ; value &= (value - 1)
		cmp rdi, 0
		jne while

	end:
	ret
