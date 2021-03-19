
format:	 db "Hello, Holberton",10

main:
	mov rdi, format
	call printf

	mov rax, 60
	mov rdi, 0
	syscall
