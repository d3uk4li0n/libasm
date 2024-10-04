section .text
    global my_strchr

my_strchr:
    xor eax, eax

loop:
    cmp BYTE [rdi + rax], 0  ;; end of the string
    jz return

    cmp BYTE [rdi + rax], sil
    jz found

    inc rax  ;; move to next character
    jmp loop ;; continue to find

found:
    lea rax, [rdi + rax]
    ret

return:
    xor eax, eax
    ret