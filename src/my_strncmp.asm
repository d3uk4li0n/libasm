section .text
    global my_strncmp

;;int my_strcmp(char *, char *, int);
my_strncmp:
    xor rbx, rbx
    
.loop:
    cmp rdx, 0 
	je .zero

	mov al, byte [rsi + rbx]
	cmp BYTE [rdi + rbx], al
	jne .difference

	cmp BYTE [rdi + rbx], 0
	je .zero

	inc rdi
	inc rsi

	jmp .loop

.zero:
	xor rax, rax
    ret

.difference:
    movzx rax, byte [rdi + rbx]
    movzx r8, byte [rsi + rbx]
    sub rax, r8
    ret
