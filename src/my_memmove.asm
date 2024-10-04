section .text
        global my_memmove

;;char* my_memmove(char*, char*, int)
my_memmove:
    xor rax, rax
    mov rbx, rdx
    dec rbx

loop:
    cmp rdx, 0 ;; enough bytes, return
    je return
    mov al, BYTE [rsi + rbx] ;; copy byte, use al as temporary
    mov [rdi + rbx], al

    dec rdx  
    dec rbx

    jmp loop

return:
    mov rax, rdi
    ret    