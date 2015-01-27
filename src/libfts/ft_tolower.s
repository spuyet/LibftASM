global _ft_tolower

_ft_tolower:
  mov rax, rdi
  cmp rax, 0x41
  jl end
  cmp rax, 0x5a
  jg end
  add rax, 0x20
end:
  ret