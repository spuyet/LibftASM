global _ft_puts

section .text

_ft_puts:
  cmp rdi, 0x0
  je aff_null
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

carriage_return:
  lea rsi, [rel msg]
  mov rdx, 0x1 ; length 
  mov rax, 0x2000004 ; write
  syscall

  mov rax, 0xa
  ret

aff_null:
  mov rdi, 0x1
  lea rsi, [rel null]
  mov rdx, 0x6
  mov rax, 0x2000004 ; write
  syscall
  jmp carriage_return

section .rodata
 
msg:    db      `\n`
null:   db      "(null)"