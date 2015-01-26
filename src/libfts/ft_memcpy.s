[BITS 64]

global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	push rsi
	push rdi
	mov rcx, rdx
	cld
	movsb
	pop rdi
	pop rsi
	pop rbp
	mov rax, rdi