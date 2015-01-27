[BITS 64]

extern _malloc

global _ft_strdup

_ft_strdup:
	push rbp
	mov rbp, rsp
	cmp rdi, 0x0
	jz null
	push rdi
	xor rcx, rcx
	not rcx
	xor al, al
	cld
	repne scasb
	not rcx
	dec rcx

allocation:
	inc rcx
	mov rdi, rcx
	push rcx
	call _malloc
	pop rcx
	pop rdi

	mov rsi, rdi
	mov rdi, rax
	push rsi
	push rdi

	cld
	rep movsb

end:
	pop rdi
	pop rsi
	pop rbp
	ret

null:
	pop rbp
	mov rax, rdi
	ret