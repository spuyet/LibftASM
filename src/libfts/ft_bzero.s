[BITS 64]

global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	push rdi
	push rsi

loop_start:
	cmp rsi, 0
	je  loop_end
	mov BYTE [rdi], 0
	inc rdi
	dec rsi
	jmp loop_start

loop_end:
	pop rsi
	pop rdi
	pop rbp
	ret