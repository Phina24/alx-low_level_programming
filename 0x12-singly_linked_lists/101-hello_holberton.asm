extern printf ;used to print a string folowed by a new line

global main ;a 64-bit program in assembly

section .text
main:
	mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
