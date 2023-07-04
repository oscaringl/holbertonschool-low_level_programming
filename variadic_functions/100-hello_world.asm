section .data
    msg db "Hello, World", 0
    len equ $ - msg

section .text
    global _start

_start:
    mov eax, 1       ; system call number (write)
    mov edi, 1       ; file descriptor (stdout)
    mov rsi, msg     ; pointer to the string
    mov edx, len     ; length of the string
    syscall

    mov eax, 60      ; system call number (exit)
    xor edi, edi     ; exit status 0
    syscall
