func looper
formal 4
localloc 4
bgnstmt 16
t1 := local 0
t2 := 0
t3 := t1 =i t2
label L1
t4 := local 0
t5 := @i t4
t6 := param 0
t7 := @i t6
t8 := t5 <i t7
bt t8 B1
br B2
label L2
t9 := local 0
t10 := 1
t11 := @i t9
t12 := t11 +i t10
t13 := t9 =i t12
br B3
label L3
bgnstmt 17
t14 := "yeet\n"
argi t14
t15 := global printf
t16 := fi t15 1
br B4
label L4
B1=L3
B2=L4
B3=L1
B4=L2
fend
func main
localloc 4
localloc 4
localloc 4
bgnstmt 23
t17 := local 0
t18 := 0
t19 := t17 =i t18
label L5
t20 := local 0
t21 := @i t20
t22 := 10
t23 := t21 <i t22
bt t23 B5
br B6
label L6
t24 := local 0
t25 := 1
t26 := @i t24
t27 := t26 +i t25
t28 := t24 =i t27
br B7
label L7
bgnstmt 26
t29 := local 1
t30 := 0
t31 := t29 =i t30
label L8
t32 := local 1
t33 := @i t32
t34 := 10
t35 := t33 <i t34
bt t35 B8
br B9
label L9
t36 := local 1
t37 := 1
t38 := @i t36
t39 := t38 +i t37
t40 := t36 =i t39
br B10
label L10
bgnstmt 27
t41 := "%d, %d\n"
t42 := local 0
t43 := @i t42
t44 := local 1
t45 := @i t44
argi t41
argi t43
argi t45
t46 := global printf
t47 := fi t46 3
br B11
label L11
B8=L10
B9=L11
B10=L8
B11=L9
bgnstmt 31
t48 := local 1
t49 := 0
t50 := t48 =i t49
label L12
t51 := local 1
t52 := @i t51
t53 := 10
t54 := t52 <i t53
bt t54 B12
br B13
label L13
t55 := local 1
t56 := 1
t57 := @i t55
t58 := t57 +i t56
t59 := t55 =i t58
br B14
label L14
bgnstmt 32
t60 := "%d + %d = %d\n"
t61 := local 0
t62 := @i t61
t63 := local 1
t64 := @i t63
t65 := local 0
t66 := @i t65
t67 := local 1
t68 := @i t67
t69 := t66 +i t68
argi t60
argi t62
argi t64
argi t69
t70 := global printf
t71 := fi t70 4
br B15
label L15
B12=L14
B13=L15
B14=L12
B15=L13
bgnstmt 36
t72 := local 1
t73 := 0
t74 := t72 =i t73
label L16
t75 := local 1
t76 := @i t75
t77 := 10
t78 := t76 <i t77
bt t78 B16
br B17
label L17
t79 := local 1
t80 := 1
t81 := @i t79
t82 := t81 +i t80
t83 := t79 =i t82
br B18
label L18
bgnstmt 37
t84 := "%d + %d = %d\n"
t85 := local 0
t86 := @i t85
t87 := local 1
t88 := @i t87
t89 := local 0
t90 := @i t89
t91 := local 1
t92 := @i t91
t93 := t90 +i t92
argi t84
argi t86
argi t88
argi t93
t94 := global printf
t95 := fi t94 4
br B19
label L19
B16=L18
B17=L19
B18=L16
B19=L17
bgnstmt 41
t96 := local 1
t97 := 0
t98 := t96 =i t97
label L20
t99 := local 1
t100 := @i t99
t101 := 10
t102 := t100 <i t101
bt t102 B20
br B21
label L21
t103 := local 1
t104 := 1
t105 := @i t103
t106 := t105 +i t104
t107 := t103 =i t106
br B22
label L22
bgnstmt 43
t108 := local 2
t109 := 0
t110 := t108 =i t109
label L23
t111 := local 2
t112 := @i t111
t113 := local 1
t114 := @i t113
t115 := t112 <i t114
bt t115 B23
br B24
label L24
t116 := local 2
t117 := 1
t118 := @i t116
t119 := t118 +i t117
t120 := t116 =i t119
br B25
label L25
bgnstmt 44
t121 := "%d * %d + %d = %d\n"
t122 := local 0
t123 := @i t122
t124 := local 1
t125 := @i t124
t126 := local 2
t127 := @i t126
t128 := local 0
t129 := @i t128
t130 := local 1
t131 := @i t130
t132 := t129 *i t131
t133 := local 2
t134 := @i t133
t135 := t132 +i t134
argi t121
argi t123
argi t125
argi t127
argi t135
t136 := global printf
t137 := fi t136 5
bgnstmt 47
t138 := 100
argi t138
t139 := global looper
t140 := fi t139 1
br B26
label L26
B23=L25
B24=L26
B25=L23
B26=L24
br B27
label L27
B20=L22
B21=L27
B22=L20
B27=L21
br B28
label L28
B5=L7
B6=L28
B7=L5
B28=L6
fend
