[BITS 64]

global _ft_isprint

_ft_isprint:
  cmp rdi, 0x20
  jl not_printable
  cmp rdi, 0x7e
  jle is_printable

not_printable:
  xor rax, rax
  ret

is_printable:
  mov rax, 0x1
  ret