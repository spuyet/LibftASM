[BITS 64]

global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	cmp rdi, 0x0
	jz null
	cmp rsi, 0x0
	jz null
	cmp rdx, 0x0
	jz null
	push rsi
	push rdi
	mov rcx, rdx
	cld
rep	movsb
	pop rdi
	pop rsi
	pop rbp
	mov rax, rdi
	ret

null:
	pop rbp
	mov rax, rdi
	ret