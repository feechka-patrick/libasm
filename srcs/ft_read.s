global ft_read

section .text

;rdi - fd
;rsi - buf
;rdx - count

ft_read:
	mov rax, 0x00
	syscall
	ret
