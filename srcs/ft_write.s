global ft_write

section .text

;rdi - fd
;rsi - buf
;rdx - count

ft_write:
	mov rax, 0x00
	syscall
	ret