section .text
    global my_memset

;;memset(char *, int c, size_t n)
my_memset:
    xor rcx, rcx

byte_set:
    cmp rdx, rcx
    jle complete
    mov [rdi], sil
    inc rdi
    inc rcx
    jmp byte_set

complete:
    cmp rcx, 0
    je return
    dec rdi
    dec rcx
    jmp complete

return:
    mov rax, rdi
    ret    