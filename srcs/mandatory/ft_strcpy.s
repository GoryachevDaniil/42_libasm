global _ft_strcpy

section .text

_ft_strcpy:
    mov rax , 0
    .while:
        mov dl , byte [rsi + rax]
        mov byte [rdi + rax] , dl
        cmp dl , 0
        je return
        inc rax
        jmp .while
return:
        mov rax, rdi
        ret