	.file	"more_operators.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$12, -56(%rbp)
	movl	$34, -52(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	addl	%eax, -44(%rbp)
	movl	$0, -40(%rbp)
	movl	-44(%rbp), %eax
	sall	$2, %eax
	movl	%eax, -36(%rbp)
	movl	-40(%rbp), %eax
	sarl	$3, %eax
	movl	%eax, -32(%rbp)
	movl	-44(%rbp), %eax
	andl	-40(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-44(%rbp), %eax
	orl	-40(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	notl	%eax
	movl	%eax, -20(%rbp)
	leaq	-56(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$56, (%rax)
	leaq	-52(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$78, (%rax)
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.2.1-22ubuntu2) 5.2.1 20151010"
	.section	.note.GNU-stack,"",@progbits
