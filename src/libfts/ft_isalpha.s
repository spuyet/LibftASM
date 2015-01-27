global _ft_isalpha

_ft_isalpha:
	cmp rdi, 0x41
	jl not_alpha
	cmp rdi, 0x5a
	jg is_maj
	jmp is_alpha

is_maj:
	cmp rdi, 0x61
	jl not_alpha
	cmp rdi, 0x7a
	jle is_alpha

not_alpha:
	xor rax, rax
	ret

is_alpha:
	mov rax, 0x1
	ret