section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0

section .text
    extern printf
    global main

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    add rsp, 8
    pop rbp
    ret

