.global write32
put32:
  str w1,[x0]
  ret

.global read32
read32:
  ldr w0,[x0]
  ret
