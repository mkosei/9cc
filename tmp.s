.globl _main
_main:
  mov x0, #0
  STR x0, [sp, #-16]!
  mov x0, #10
  STR x0, [sp, #-16]!
  LDR x1, [sp], #16
  LDR x0, [sp], #16
  sub x0, x0, x1
  STR x0, [sp, #-16]!
  mov x0, #20
  STR x0, [sp, #-16]!
  LDR x1, [sp], #16
  LDR x0, [sp], #16
  add x0, x0, x1
  STR x0, [sp, #-16]!
  LDR x0, [sp], #16
  ret
