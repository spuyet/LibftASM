global _ft_strcat

_ft_strcat:
	push rbp
	mov rbp, rsp
	push rdi
	push rsi

begin_loop:
	cmp BYTE [rdi], 0
	jz  copy_loop
	inc rdi
	jmp begin_loop

copy_loop:
	mov al, [rsi]
	mov [rdi], al
	inc rdi
	inc rsi
	cmp al, 0
	jne copy_loop

end_loop:
	pop rsi
	pop rdi
	pop rbp
	mov rax, rdi
	ret