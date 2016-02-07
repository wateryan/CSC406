.section  .rodata
.align 8

.my_data_area:
  .byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
.the_string_to_print:
  .string "number = %016lx\n"
  .text
  .globl  main
  .type main, @function
main:
  pushq %rbp
  movq %rsp, %rbp

  /* Start here */

  movq $.my_data_area, %rbx
  movq %rbx, %rsi
  movq $.the_string_to_print, %rdi
  call printf

  movq .my_data_area, %rbx
  movq %rbx, %rsi
  movq $.the_string_to_print, %rdi
  call printf

  movq $.my_data_area, %rax
  movq (%rax), %rbx
  movq %rbx, %rsi
  movq $.the_string_to_print, %rdi
  call printf

  movq $.my_data_area, %rax
  movq 8(%rax), %rbx
  movq %rbx, %rsi
  movq $.the_string_to_print, %rdi
  call printf

  /* End here */

  movq $0, %rax
  leave
  ret
