global ft_strcmp

section .text

;rdi - s1
;rsi - s2

ft_strcmp:
	xor rcx, rcx
	xor rax, rax
.loop:
	mov al, byte [rdi + rcx]
	cmp al, byte [rsi + rcx]
	jl less
	jg greater
	cmp byte [rdi + rcx], 0
	je return
	cmp byte [rsi + rcx], 0
	je return
	inc rcx
	jmp .loop

less:
	sub al, byte [rsi + rcx]
	sub rax, 256
	ret

greater:
	sub al, byte [rsi + rcx]
	ret
return:
	ret
