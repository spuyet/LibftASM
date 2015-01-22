[BITS 64]

global _ft_puts

section .text

_ft_puts:
  push rbp
  mov rbp, rsp

  xor rcx, rcx
  mov rbx, rdi

_begin_loop:
  cmp BYTE [rbx], 0x0
  je print
  inc rbx
  inc rcx
  jmp _begin_loop

print:
  mov rsi, rdi ; msg
  mov rdi, 0x1 ; fd
  mov rdx, rcx; length 
  mov rax, 0x2000004 ; write
  syscall

  lea rsi, [rel msg]
  mov rdx, 0x1 ; length 
  mov rax, 0x2000004 ; write
  syscall

  mov rax, 0xa
  pop rbp
  ret

section .rodata
 
msg:    db      `\n`