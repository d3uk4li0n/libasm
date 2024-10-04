section .text
    global my_memcpy

;;void *my_memcpy(char *, char *, int);
my_memcpy:
    xor rax, rax
    xor rbx, rbx
    
loop:
	cmp rdx, 0 ;; enough bytes, return
	je return
    mov al, BYTE [rsi + rbx] ;; copy byte, use al as temporary
    mov [rdi + rbx], al

	dec rdx  
    inc rbx
	
	jmp loop

return:
    mov rax, rdi
	ret    
