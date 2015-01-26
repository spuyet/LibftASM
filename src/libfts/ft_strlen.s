[BITS 64]

global _ft_strlen

_ft_strlen:
	xor rcx, rcx
	cmp rdi, 0x0
	jz end
	not ecx
	xor al, al
	cld
repne scasb
	not rcx
	dec	ecx

end:
	mov rax, rcx
	ret