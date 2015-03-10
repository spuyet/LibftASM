global _ft_cat

_ft_cat:
    push rbp
    mov rbp, rsp
    sub rsp, 0x40
    push rdi

read:
    mov rsi, rsp
    mov rdx, 0x40
    sub rsi, rdx
    mov rax, 0x2000003
    syscall  ; read
    jc quit
    js quit

write:
    mov rdi, 0x1
    mov rsi, rsp
    sub rsi, 0x40
    mov rdx, rax
    mov rax, 0x2000004
    syscall ; write
    cmp rax, 0x0
    jle quit
    pop rdi
    push rdi
    jmp read

quit:
    pop rdi
    add rsp, 0x40
    pop rbp
    ret