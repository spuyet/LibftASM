[BITS 64]

extern _malloc
extern _ft_memcpy
extern _ft_strlen

global _ft_strdup

_ft_strdup:
	push rbp
	mov rbp, rsp
	cmp rdi, 0x0
	jz null
	push rdi
	xor rcx, rcx

length:
	cmp BYTE [rdi], 0x0
	je allocation
	inc rcx
	inc rdi
	jmp length

allocation:
	inc rcx
	mov rdi, rcx
	call _malloc
	pop rdi
	push rax

cpy:
	cmp BYTE [rdi], 0x0
	je end
	mov rdx, [rdi]
	mov [rax], rdx
	inc rdi	
	inc rax
	jmp cpy

end:
	mov BYTE [rax], 0x0
	pop rax
	pop rbp
	ret

null:
	pop rbp
	mov rax, rdi
	ret