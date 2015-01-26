[BITS 64]

extern _malloc

global _ft_strdup

_ft_strdup:
	push rbp
	mov rbp, rsp
	xor rcx, rcx
	push rdi
	cmp rdi, 0x0
	jz end
	not ecx
	xor al, al
	cld
repne scasb
	not rcx
	dec	ecx
	mov rdi, rcx
	inc rdi
	call _malloc
	pop rdi
	mov rsi, rdi
	mov rdi, rax
	cld
rep movsb
	pop rbp
end:
	ret