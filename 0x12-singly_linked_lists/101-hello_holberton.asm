section .data
	hello db "Hello, Holberton", 10, 0
section .text
	extern printf
	global main
main:
	mov rdi, hello
	xor rax, rax
	call printf
	mov eax, 0
	ret
