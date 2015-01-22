[BITS 64]

global _ft_memset

_ft_memset:
	mov rax, rdi
	mov rcx, rdx

begin_loop:
	cmp rcx, 0x0
	je end
	mov [rdi], rsi
	dec rcx
	inc rdi
	jmp begin_loop

end: 
	mov rdi, rax
	ret