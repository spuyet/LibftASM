global _ft_isascii

_ft_isascii:
  cmp rdi, 0x0
  jl not_ascii
  cmp rdi, 0x7f
  jle is_ascii

not_ascii:
  xor rax, rax
  ret

is_ascii:
  mov rax, 0x1
  ret
