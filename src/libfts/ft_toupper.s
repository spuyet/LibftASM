[BITS 64]

global _ft_toupper

_ft_toupper:
  mov rax, rdi
  cmp rax, 0x61
  jl end
  cmp rax, 0x7a
  jg end
  sub rax, 0x20
end:
  ret