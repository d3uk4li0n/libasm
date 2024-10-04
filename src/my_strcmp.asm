section .text
    global my_strcmp

my_strcmp:
    mov al, byte [rsi]
    cmp BYTE [rdi], al
    jne .difference

    cmp BYTE [rdi], 0
    je .zero

    inc rdi
    inc rsi

    jmp my_strcmp

.zero:
    xor rax, rax
    ret

.difference:
    movzx rax, byte [rdi]
    movzx r8, byte [rsi]
    sub rax, r8
    ret