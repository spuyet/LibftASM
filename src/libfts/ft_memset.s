global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp
	push rdi
	cmp rdi, 0x0
	jz end
	mov rcx, rdx
	mov rax, rsi
	cld
rep stosb

end: 
	pop rdi
	pop rbp
	mov rax, rdi
	ret