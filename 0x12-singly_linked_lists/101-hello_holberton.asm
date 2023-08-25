section .data
	msg db	"FUTO, has been a greate school", `\n`

	section .text
	global main
main:
	mov     rax, 1
	mov     rdi, 1
	mov     rsi, msg
	mov     rdx, 17
	syscall
	mov    rax, 60
	mov    rdi, 0
	syscall
