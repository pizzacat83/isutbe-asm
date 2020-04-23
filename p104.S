	.intel_syntax noprefix
	.text
	.globl	maxof2
maxof2:
    push rbp
    mov rbp, rsp
    cmp rdi, rsi
    jg RDI_GREATER
    mov rax, rsi
    jmp END
RDI_GREATER:
    mov rax, rdi
END:
    pop rbp
    ret
