section .text
    global my_strcasecmp

;;int strcasecmp(char *, char *)
my_strcasecmp:
    mov	r8, -1

loop:
    inc	r8
    movzx	rcx, byte [rdi + r8]
    movzx	rdx, byte [rsi + r8]
    cmp	rcx, 'A'
    jge	check_case_first_upper
    ret

convert_first_tolower: ;; convert the first to lower case
    add	rcx, 32
    jmp	check_case_second_lower ;; check case of the second char

convert_second_tolower:
    add	rdx, 32      ;; convert to lower case
    jmp	compare

check_case_first_upper:
    cmp	rcx, 'Z'      ;; between A and Z
    jle	convert_first_tolower
    jmp	check_case_second_lower

check_case_second_upper: ;; check the second <= 'Z'
    cmp	rdx, 'Z'
    jle	convert_second_tolower
    jmp	compare

check_case_second_lower:
    cmp	rdx, 'A'    ;; between A and Z
    jge	check_case_second_upper

compare: ;;

    mov	rax, rcx
    sub	rax, rdx

    cmp	rcx, 0   ;reach end of string
    je	return

    cmp	rdx, 0   ;reach end of string
    je	return

    or	rax, rax   ; if rax is zero, continue check next character
    jz	loop

return:
    ret
