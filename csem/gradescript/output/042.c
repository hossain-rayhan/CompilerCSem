func main
localloc 4
localloc 4
localloc 4
bgnstmt 15
t1 := local 0
t2 := 0
t3 := t1 =i t2
label L1
t4 := local 0
t5 := @i t4
t6 := 10
t7 := t5 <i t6
bt t7 B1
br B2
label L2
t8 := local 0
t9 := 1
t10 := @i t8
t11 := t10 +i t9
t12 := t8 =i t11
br B3
label L3
bgnstmt 18
t13 := local 1
t14 := 0
t15 := t13 =i t14
label L4
t16 := local 1
t17 := @i t16
t18 := 10
t19 := t17 <i t18
bt t19 B4
br B5
label L5
t20 := local 1
t21 := 1
t22 := @i t20
t23 := t22 +i t21
t24 := t20 =i t23
br B6
label L6
bgnstmt 19
t25 := "%d, %d\n"
t26 := local 0
t27 := @i t26
t28 := local 1
t29 := @i t28
argi t25
argi t27
argi t29
t30 := global printf
t31 := fi t30 3
br B7
label L7
B4=L6
B5=L7
B6=L4
B7=L5
bgnstmt 23
t32 := local 1
t33 := 0
t34 := t32 =i t33
label L8
t35 := local 1
t36 := @i t35
t37 := 10
t38 := t36 <i t37
bt t38 B8
br B9
label L9
t39 := local 1
t40 := 1
t41 := @i t39
t42 := t41 +i t40
t43 := t39 =i t42
br B10
label L10
bgnstmt 24
t44 := "%d + %d = %d\n"
t45 := local 0
t46 := @i t45
t47 := local 1
t48 := @i t47
t49 := local 0
t50 := @i t49
t51 := local 1
t52 := @i t51
t53 := t50 +i t52
argi t44
argi t46
argi t48
argi t53
t54 := global printf
t55 := fi t54 4
br B11
label L11
B8=L10
B9=L11
B10=L8
B11=L9
bgnstmt 28
t56 := local 1
t57 := 0
t58 := t56 =i t57
label L12
t59 := local 1
t60 := @i t59
t61 := 10
t62 := t60 <i t61
bt t62 B12
br B13
label L13
t63 := local 1
t64 := 1
t65 := @i t63
t66 := t65 +i t64
t67 := t63 =i t66
br B14
label L14
bgnstmt 29
t68 := "%d + %d = %d\n"
t69 := local 0
t70 := @i t69
t71 := local 1
t72 := @i t71
t73 := local 0
t74 := @i t73
t75 := local 1
t76 := @i t75
t77 := t74 +i t76
argi t68
argi t70
argi t72
argi t77
t78 := global printf
t79 := fi t78 4
br B15
label L15
B12=L14
B13=L15
B14=L12
B15=L13
bgnstmt 33
t80 := local 1
t81 := 0
t82 := t80 =i t81
label L16
t83 := local 1
t84 := @i t83
t85 := 10
t86 := t84 <i t85
bt t86 B16
br B17
label L17
t87 := local 1
t88 := 1
t89 := @i t87
t90 := t89 +i t88
t91 := t87 =i t90
br B18
label L18
bgnstmt 35
t92 := local 2
t93 := 0
t94 := t92 =i t93
label L19
t95 := local 2
t96 := @i t95
t97 := local 1
t98 := @i t97
t99 := t96 <i t98
bt t99 B19
br B20
label L20
t100 := local 2
t101 := 1
t102 := @i t100
t103 := t102 +i t101
t104 := t100 =i t103
br B21
label L21
bgnstmt 36
t105 := "%d * %d + %d = %d\n"
t106 := local 0
t107 := @i t106
t108 := local 1
t109 := @i t108
t110 := local 2
t111 := @i t110
t112 := local 0
t113 := @i t112
t114 := local 1
t115 := @i t114
t116 := t113 *i t115
t117 := local 2
t118 := @i t117
t119 := t116 +i t118
argi t105
argi t107
argi t109
argi t111
argi t119
t120 := global printf
t121 := fi t120 5
br B22
label L22
B19=L21
B20=L22
B21=L19
B22=L20
br B23
label L23
B16=L18
B17=L23
B18=L16
B23=L17
br B24
label L24
B1=L3
B2=L24
B3=L1
B24=L2
fend
