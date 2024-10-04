;section .data
;    msg db "longstring"

section .text
    global my_strlen ;_start

my_strlen:
    xor rax, rax
        
inc1:
    ;;while(string[i] != '\0')
    inc rax
    inc rdi
    cmp [rdi], byte 0
    jne inc1
    ret

;exit:
;    mov rax, 60
;    mov rdi, 0
;    syscall