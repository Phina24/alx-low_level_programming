extern printf ;used to print a string folowed by a new line

global main ;a 64-bit program in assembly

section .text
main:
	push msg
	call printf
	ret

section .data
msg: db 'Hello, Holberton0xa',0
