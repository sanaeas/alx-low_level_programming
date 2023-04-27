global main

section .text

main:
mov rax, 1
mov rdi, 1
mov rsi, message
mov rdx, 16
syscall

mov rax, 60
mov rdi, 0
syscall           ;

message:
 db "Hello, Holberton", 10
