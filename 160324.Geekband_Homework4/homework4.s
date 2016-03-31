	.file	"homework4.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"Fruit::process()"
	.section	.text._ZN5Fruit7processEv,"axG",@progbits,_ZN5Fruit7processEv,comdat
	.align 2
	.weak	_ZN5Fruit7processEv
	.type	_ZN5Fruit7processEv, @function
_ZN5Fruit7processEv:
.LFB1686:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1686:
	.size	_ZN5Fruit7processEv, .-_ZN5Fruit7processEv
	.section	.rodata
.LC1:
	.string	"Fruit::process2()"
	.section	.text._ZN5Fruit8process2Ev,"axG",@progbits,_ZN5Fruit8process2Ev,comdat
	.align 2
	.weak	_ZN5Fruit8process2Ev
	.type	_ZN5Fruit8process2Ev, @function
_ZN5Fruit8process2Ev:
.LFB1687:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1687:
	.size	_ZN5Fruit8process2Ev, .-_ZN5Fruit8process2Ev
	.section	.rodata
.LC2:
	.string	"Apple::process()"
	.section	.text._ZN5Apple7processEv,"axG",@progbits,_ZN5Apple7processEv,comdat
	.align 2
	.weak	_ZN5Apple7processEv
	.type	_ZN5Apple7processEv, @function
_ZN5Apple7processEv:
.LFB1689:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1689:
	.size	_ZN5Apple7processEv, .-_ZN5Apple7processEv
	.section	.text._ZN5FruitC2Ev,"axG",@progbits,_ZN5FruitC5Ev,comdat
	.align 2
	.weak	_ZN5FruitC2Ev
	.type	_ZN5FruitC2Ev, @function
_ZN5FruitC2Ev:
.LFB1692:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Fruit+16, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1692:
	.size	_ZN5FruitC2Ev, .-_ZN5FruitC2Ev
	.weak	_ZN5FruitC1Ev
	.set	_ZN5FruitC1Ev,_ZN5FruitC2Ev
	.section	.text._ZN5AppleC2Ev,"axG",@progbits,_ZN5AppleC5Ev,comdat
	.align 2
	.weak	_ZN5AppleC2Ev
	.type	_ZN5AppleC2Ev, @function
_ZN5AppleC2Ev:
.LFB1695:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5FruitC2Ev
	movq	-8(%rbp), %rax
	movq	$_ZTV5Apple+16, (%rax)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1695:
	.size	_ZN5AppleC2Ev, .-_ZN5AppleC2Ev
	.weak	_ZN5AppleC1Ev
	.set	_ZN5AppleC1Ev,_ZN5AppleC2Ev
	.section	.rodata
.LC3:
	.string	"Size of System Standard Type"
.LC4:
	.string	"sizeof(int)      "
.LC5:
	.string	"sizeof(int*)     "
.LC6:
	.string	"sizeof(double)   "
.LC7:
	.string	"sizeof(double*)  "
.LC8:
	.string	"sizeof(char)     "
.LC9:
	.string	"sizeof(char*)    "
.LC10:
	.string	"---------------------------"
.LC11:
	.string	"Size of Class Fruit "
.LC12:
	.string	"fruit address: "
.LC13:
	.string	"vptrFruit:     "
.LC14:
	.string	"fruit.no:      "
.LC15:
	.string	"fruit.weight:  "
.LC16:
	.string	"fruit.key:     "
	.align 8
.LC17:
	.string	"1st Virtual Function Address: "
.LC18:
	.string	"Call it "
.LC19:
	.string	"Size of Class Apple "
.LC20:
	.string	"apple address: "
.LC21:
	.string	"vptrApple:     "
.LC22:
	.string	"apple.no:      "
.LC23:
	.string	"apple.weight:  "
.LC24:
	.string	"apple.key:     "
.LC25:
	.string	"apple.size:    "
.LC26:
	.string	"apple.type:    "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1690:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC8, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC9, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC10, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5FruitC1Ev
	movl	$.LC11, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$32, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC12, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-80(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-80(%rbp), %rax
	movq	%rax, -112(%rbp)
	movl	$.LC13, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-112(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC14, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-80(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC15, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-80(%rbp), %rdx
	addq	$16, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC16, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-80(%rbp), %rdx
	addq	$24, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC10, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC17, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-80(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movl	(%rax), %eax
	cltq
	movq	%rax, -104(%rbp)
	leaq	-80(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC18, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-104(%rbp), %rax
	call	*%rax
	movl	$.LC10, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5AppleC1Ev
	movl	$.LC19, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$40, %esi
	movq	%rax, %rdi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC20, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-48(%rbp), %rax
	movq	%rax, -96(%rbp)
	movl	$.LC21, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-96(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC22, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	addq	$8, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC23, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	addq	$16, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC24, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	addq	$24, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC25, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	addq	$28, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC26, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	addq	$32, %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC10, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC17, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-48(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movl	(%rax), %eax
	cltq
	movq	%rax, -88(%rbp)
	leaq	-48(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC18, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-88(%rbp), %rax
	call	*%rax
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1690:
	.size	main, .-main
	.weak	_ZTV5Apple
	.section	.rodata._ZTV5Apple,"aG",@progbits,_ZTV5Apple,comdat
	.align 32
	.type	_ZTV5Apple, @object
	.size	_ZTV5Apple, 32
_ZTV5Apple:
	.quad	0
	.quad	_ZTI5Apple
	.quad	_ZN5Apple7processEv
	.quad	_ZN5Fruit8process2Ev
	.weak	_ZTV5Fruit
	.section	.rodata._ZTV5Fruit,"aG",@progbits,_ZTV5Fruit,comdat
	.align 32
	.type	_ZTV5Fruit, @object
	.size	_ZTV5Fruit, 32
_ZTV5Fruit:
	.quad	0
	.quad	_ZTI5Fruit
	.quad	_ZN5Fruit7processEv
	.quad	_ZN5Fruit8process2Ev
	.weak	_ZTS5Apple
	.section	.rodata._ZTS5Apple,"aG",@progbits,_ZTS5Apple,comdat
	.type	_ZTS5Apple, @object
	.size	_ZTS5Apple, 7
_ZTS5Apple:
	.string	"5Apple"
	.weak	_ZTI5Apple
	.section	.rodata._ZTI5Apple,"aG",@progbits,_ZTI5Apple,comdat
	.align 16
	.type	_ZTI5Apple, @object
	.size	_ZTI5Apple, 24
_ZTI5Apple:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS5Apple
	.quad	_ZTI5Fruit
	.weak	_ZTS5Fruit
	.section	.rodata._ZTS5Fruit,"aG",@progbits,_ZTS5Fruit,comdat
	.type	_ZTS5Fruit, @object
	.size	_ZTS5Fruit, 7
_ZTS5Fruit:
	.string	"5Fruit"
	.weak	_ZTI5Fruit
	.section	.rodata._ZTI5Fruit,"aG",@progbits,_ZTI5Fruit,comdat
	.align 16
	.type	_ZTI5Fruit, @object
	.size	_ZTI5Fruit, 16
_ZTI5Fruit:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Fruit
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1857:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L8
	cmpl	$65535, -8(%rbp)
	jne	.L8
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1857:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1858:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1858:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
