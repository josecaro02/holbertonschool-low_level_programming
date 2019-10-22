	.file	"hague.c"
	.globl	_DAH_
	.data
	.align 32
	.type	_DAH_, @object
	.size	_DAH_, 58
_DAH_:
	.string	"ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$81, %edi
	movl	$0, %eax
	call	malloc
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -16(%rbp)
	movq	%rax, -8(%rbp)
	jmp	.L2
.L14:
	movq	-16(%rbp), %rax
	movq	%rax, -32(%rbp)
	jmp	.L3
.L13:
	movq	-8(%rbp), %rax
	movb	$2, (%rax)
	movq	$_DAH_, -24(%rbp)
	jmp	.L4
.L10:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$96, %al
	jle	.L5
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	subl	$97, %eax
	jmp	.L6
.L5:
	movl	$0, %eax
.L6:
	addl	%edx, %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movb	%dl, (%rax)
	addq	$1, -24(%rbp)
.L4:
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L7
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$96, %al
	jle	.L8
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	andl	$223, %eax
	jmp	.L9
.L8:
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
.L9:
	cmpl	%eax, %edx
	jne	.L10
.L7:
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L11
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	_DAH
	jmp	.L12
.L11:
	movl	$63, %eax
.L12:
	movl	%eax, %edi
	movl	$0, %eax
	call	__DIT
	movl	$32, %edi
	movl	$0, %eax
	call	__DIT
	addq	$1, -32(%rbp)
.L3:
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L13
	movl	$10, %edi
	movl	$0, %eax
	call	__DIT
.L2:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	gets
	cmpq	-16(%rbp), %rax
	je	.L14
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	_DAH
	.type	_DAH, @function
_DAH:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$3, -4(%rbp)
	jle	.L16
	movl	-4(%rbp), %eax
	sarl	%eax
	movl	%eax, %edi
	movl	$0, %eax
	call	_DAH
	jmp	.L17
.L16:
	movl	$0, %eax
.L17:
	movl	%eax, %edi
	movl	$0, %eax
	call	__DIT
	movl	-4(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L18
	movl	$45, %eax
	jmp	.L19
.L18:
	movl	$46, %eax
.L19:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_DAH, .-_DAH
	.globl	__DIT
	.type	__DIT, @function
__DIT:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	leaq	-4(%rbp), %rax
	movl	$1, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	__DIT, .-__DIT
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
