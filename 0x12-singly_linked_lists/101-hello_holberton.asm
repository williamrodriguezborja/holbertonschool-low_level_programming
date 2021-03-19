	global main
	extern printf
format:	 .ascii "Hello, Holberton\10"

main:
	push $format
	call printf

	mov rax, 60
	mov rdi, 0
	syscall
