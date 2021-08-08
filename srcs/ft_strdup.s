global ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

section .text
;rdi - s
ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	call _malloc
	mov rdi, rax
	push rsi
	call _ft_strcpy
	ret
