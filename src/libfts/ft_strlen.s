[BITS 64]

global _ft_strlen

_ft_strlen:
	push rbp
	push rdi
	mov rbp, rsp

	xor rcx, rcx

begin_loop:
	cmp BYTE [rdi], 0x0
	je end
	inc rdi
	inc rcx
	jmp begin_loop

end:
	mov rax, rcx
	pop rdi
	pop rbp
	ret