[BITS 64]

extern _ft_isalpha
extern _ft_isdigit

global _ft_isalnum

_ft_isalnum:
  push rbp
  mov rbp, rsp

  call _ft_isdigit
  cmp rax, 0x1
  je is_alnum
  call _ft_isalpha
  cmp rax, 0x1
  je is_alnum

not_alnum:
  pop rbp
  xor rax, rax
  ret

is_alnum:
  pop rbp
  mov rax, 0x1
  ret