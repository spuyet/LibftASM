[BITS 64]

global	_ft_isdigit

_ft_isdigit:
	cmp rdi, 0x30
	jl not_digit
	cmp rdi, 0x39
	jle is_digit

not_digit:
	xor rax, rax
	ret

is_digit:
	mov rax, 0x1
	ret