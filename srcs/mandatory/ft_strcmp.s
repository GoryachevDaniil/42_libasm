global _ft_strcmp

section .text

_ft_strcmp:
    mov rcx , -1
    .while:
        inc rcx
        mov dl , byte [rdi + rcx]
        cmp dl , byte [rsi + rcx]
        jne return
        cmp dl , 0
        jnz .while
return:
    movzx rax , dl
    movzx rdx , byte [rsi + rcx]
    sub rax , rdx
    ret ;