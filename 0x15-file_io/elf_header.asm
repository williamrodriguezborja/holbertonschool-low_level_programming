	.file	"100-elf_header.c"
	.text
	.section	.rodata
.LC0:
	.string	"/bin/ls"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	cmpl	$2, -52(%rbp)
	je	.L2
	movl	$98, %edi
	call	exit@PLT
.L2:
	movl	$0, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	open@PLT
	movl	%eax, -36(%rbp)
	cmpl	$-1, -36(%rbp)
	jne	.L3
	movl	$98, %edi
	call	exit@PLT
.L3:
	leaq	-18(%rbp), %rcx
	movl	-36(%rbp), %eax
	movl	$10, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	read@PLT
	cmpq	$-1, %rax
	jne	.L4
	movl	$98, %edi
	call	exit@PLT
.L4:
	leaq	-18(%rbp), %rax
	movq	%rax, -32(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
