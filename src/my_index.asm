section .text
    global my_index

;;char *index(char *s, int c);
my_index:
    xor eax, eax
    
loop:
    cmp BYTE [rdi + rax], sil
    jz found

    cmp BYTE [rdi + rax], 0  
    jz return

    inc rax  
    jmp loop 
    
found:
    lea rax, [rdi + rax]
    ret
    
return:
    xor eax, eax
    ret
