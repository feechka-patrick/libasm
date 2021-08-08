global ft_strcpy

section .text

;rdi - dest
;rsi - src

ft_strcpy:
	xor rax, rax
.loop:
	cmp byte [rsi + rax], 0
	je return
	mov bl, byte [rsi + rax]
	mov byte [rdi + rax], bl
	inc rax
	jmp .loop
return:
	mov byte [rdi + rax], 0
	mov rax, rdi
	ret