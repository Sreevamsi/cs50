	.file	"sizeof.c"
	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$104, %esp
	leal	.L.str, %eax
	movl	$1, %ecx
	movl	%eax, (%esp)
	movl	$1, 4(%esp)
	movl	%ecx, -40(%ebp)         # 4-byte Spill
	calll	printf
	leal	.L.str1, %ecx
	movl	$4, %edx
	movl	%ecx, (%esp)
	movl	$4, 4(%esp)
	movl	%eax, -44(%ebp)         # 4-byte Spill
	movl	%edx, -48(%ebp)         # 4-byte Spill
	calll	printf
	leal	.L.str2, %ecx
	movl	$8, %edx
	movl	%ecx, (%esp)
	movl	$8, 4(%esp)
	movl	%eax, -52(%ebp)         # 4-byte Spill
	movl	%edx, -56(%ebp)         # 4-byte Spill
	calll	printf
	leal	.L.str3, %ecx
	movl	$4, %edx
	movl	%ecx, (%esp)
	movl	$4, 4(%esp)
	movl	%eax, -60(%ebp)         # 4-byte Spill
	movl	%edx, -64(%ebp)         # 4-byte Spill
	calll	printf
	leal	.L.str4, %ecx
	movl	$8, %edx
	movl	%ecx, (%esp)
	movl	$8, 4(%esp)
	movl	%eax, -68(%ebp)         # 4-byte Spill
	movl	%edx, -72(%ebp)         # 4-byte Spill
	calll	printf
	leal	.L.str5, %ecx
	movl	$4, %edx
	movl	%ecx, (%esp)
	movl	$4, 4(%esp)
	movl	%eax, -76(%ebp)         # 4-byte Spill
	movl	%edx, -80(%ebp)         # 4-byte Spill
	calll	printf
	movl	$0, %ecx
	movl	%eax, -84(%ebp)         # 4-byte Spill
	movl	%ecx, %eax
	addl	$104, %esp
	popl	%ebp
	ret
.Ltmp0:
	.size	main, .Ltmp0-main

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"char :%i\n"
	.size	.L.str, 10

	.type	.L.str1,@object         # @.str1
.L.str1:
	.asciz	"float :%i\n"
	.size	.L.str1, 11

	.type	.L.str2,@object         # @.str2
.L.str2:
	.asciz	"double :%i\n"
	.size	.L.str2, 12

	.type	.L.str3,@object         # @.str3
.L.str3:
	.asciz	"long :%i\n"
	.size	.L.str3, 10

	.type	.L.str4,@object         # @.str4
.L.str4:
	.asciz	"long long:%i\n"
	.size	.L.str4, 14

	.type	.L.str5,@object         # @.str5
.L.str5:
	.asciz	"int :%i\n"
	.size	.L.str5, 9


	.ident	"Ubuntu clang version 3.4-1ubuntu3 (tags/RELEASE_34/final) (based on LLVM 3.4)"
	.section	".note.GNU-stack","",@progbits
