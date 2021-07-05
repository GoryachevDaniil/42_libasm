global _ft_list_size

section .text

_ft_list_size:
    mov rax , -1
    .while:
        inc rax
        cmp rdi , 0
        je .return
        mov rdi , [rdi + 8]
        jmp .while
.return:
    ret
