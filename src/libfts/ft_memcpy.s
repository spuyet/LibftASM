global _ft_memcpy

_ft_memcpy:
	cmp rdx, 0x0
	jz null
	mov rcx, rdx
	mov rax, rdi
	cld
rep	movsb
	ret

null:
	mov rax, rdi
	ret