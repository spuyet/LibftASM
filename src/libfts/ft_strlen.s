global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	xor rcx, rcx
	cmp rdi, 0x0
	jz end
	push rdi
	not rcx
	xor al, al
	cld
repne scasb
	not rcx
	dec	rcx

end:
	mov rax, rcx
	pop rdi
	pop rbp
	ret