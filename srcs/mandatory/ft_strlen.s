global	_ft_strlen

section .text

_ft_strlen:
	mov rax , 0
	.while:
		cmp BYTE [rdi + rax] , 0
		je return
		inc rax
		jmp .while
return:
		ret ;