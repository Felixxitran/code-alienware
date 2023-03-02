.pos 0x100
                 ld 0x5 ,r0
                 ld $array , r1
                 ld $s , r2 
                 ld (r1,r0,4) , r3  #int a = 0 
                 st r3,(r2) #   s = array[5]
                 halt

.pos 0x1000
a:               .long 0xffffffff         # a
.pos 0x3000
array:      .long 0xffffffff         # b[0]
                 .long 0xffffffff         # b[1]
                 .long 0xffffffff         # b[2]
                 .long 0xffffffff         # b[3]
                 .long 0xffffffff         # b[4]
                 .long 0xffffffff         # b[5]
                 .long 0xffffffff         # b[6]
