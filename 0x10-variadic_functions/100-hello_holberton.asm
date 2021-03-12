section	.rodata
; db = initialize value;
msg db `Hello, Holberton`,10 ;string to be printed
;  equ = create constant $ = expresion - = length  = msg
len equ $ - msg

section	.text
   global main     ;must be declared for linker (ld)

main:
;  start to save to register pending operations
   mov	rax, 1   ; sys call to syswrite   write(1, text, len)
   mov  rdi, 1	 ; rdi primer parameter
   mov	rsi, msg ; rsi second parameter
   mov  rdx, len  ; rdx third parameter
;------------------------------------------
   syscall    ;call kernel  execute pending operations saved in previous registers
;------------------------------------------
;  start to save to register pending operations

   mov	rax, 60  ;system call number (sys_exit)
   mov	rdi, 0   ; exit code
   syscall       ; call kernel
  ;length of the string