global	main
extern	puts
main:
	mov	edi,	format
	call	puts
	mov	eax, 0
	ret
format: db `Hello, Holberton\n`,0
