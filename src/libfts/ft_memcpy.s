[BITS 64]

global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	push rcx
	mov rcx, rdx
	push rdi
	push rsi
	push rdx

begin_loop:
	cmp rcx, 0x0
	je end
	dec rcx
	mov rdx, [rsi]
	mov [rdi], rdx
	inc rsi
	inc rdi
	jmp begin_loop

end
	pop rdx
	pop rsi
	pop rdi
	mov rax, rdi
	pop rcx
	pop rbp
	ret