func main
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 17
t1 := local 0
t2 := 123
t3 := t1 =i t2
bgnstmt 18
t4 := local 1
t5 := 42
t6 := t4 =i t5
bgnstmt 19
t7 := local 2
t8 := 666
t9 := t7 =i t8
bgnstmt 21
t10 := local 4
t11 := 0
t12 := t10 =i t11
label L1
t13 := local 4
t14 := @i t13
t15 := 10
t16 := t14 <i t15
bt t16 B1
br B2
label L2
t17 := local 4
t18 := 1
t19 := @i t17
t20 := t19 +i t18
t21 := t17 =i t20
br B3
label L3
bgnstmt 22
t22 := local 3
t23 := 0
t24 := t22 =i t23
label L4
t25 := local 3
t26 := @i t25
t27 := 10
t28 := t26 <i t27
bt t28 B4
br B5
label L5
t29 := local 3
t30 := 1
t31 := @i t29
t32 := t31 +i t30
t33 := t29 =i t32
br B6
label L6
bgnstmt 23
t34 := "%d\n"
t35 := local 0
t36 := @i t35
t37 := local 1
t38 := @i t37
t39 := t36 &i t38
t40 := local 2
t41 := @i t40
t42 := ~i t41
t43 := local 3
t44 := @i t43
t45 := t42 *i t44
t46 := local 4
t47 := @i t46
t48 := ~i t47
t49 := t45 *i t48
t50 := t39 |i t49
argi t34
argi t50
t51 := global printf
t52 := fi t51 2
bgnstmt 24
t53 := "%d\n"
t54 := local 0
t55 := @i t54
t56 := local 1
t57 := @i t56
t58 := ~i t57
t59 := t55 +i t58
t60 := local 2
t61 := @i t60
t62 := local 0
t63 := @i t62
t64 := t61 *i t63
t65 := t59 &i t64
t66 := local 1
t67 := @i t66
t68 := local 4
t69 := @i t68
t70 := ~i t69
t71 := t67 /i t70
t72 := t65 |i t71
argi t53
argi t72
t73 := global printf
t74 := fi t73 2
bgnstmt 25
t75 := "%d\n"
t76 := local 0
t77 := @i t76
t78 := local 1
t79 := @i t78
t80 := local 2
t81 := @i t80
t82 := t79 -i t81
t83 := local 3
t84 := @i t83
t85 := local 1
t86 := @i t85
t87 := ~i t86
t88 := t84 *i t87
t89 := t82 +i t88
t90 := t77 &i t89
argi t75
argi t90
t91 := global printf
t92 := fi t91 2
bgnstmt 26
t93 := "%d\n"
t94 := local 0
t95 := @i t94
t96 := ~i t95
t97 := local 1
t98 := @i t97
t99 := t96 &i t98
t100 := local 2
t101 := @i t100
t102 := local 4
t103 := @i t102
t104 := ~i t103
t105 := t101 /i t104
t106 := local 3
t107 := @i t106
t108 := ~i t107
t109 := t105 *i t108
t110 := t99 ^i t109
argi t93
argi t110
t111 := global printf
t112 := fi t111 2
bgnstmt 27
t113 := "%d\n"
t114 := local 0
t115 := @i t114
t116 := ~i t115
t117 := local 1
t118 := @i t117
t119 := ~i t118
t120 := local 2
t121 := @i t120
t122 := t119 |i t121
t123 := t116 ^i t122
t124 := local 0
t125 := @i t124
t126 := ~i t125
t127 := local 3
t128 := @i t127
t129 := t126 *i t128
t130 := t123 |i t129
argi t113
argi t130
t131 := global printf
t132 := fi t131 2
br B7
label L7
B4=L6
B5=L7
B6=L4
B7=L5
br B8
label L8
B1=L3
B2=L8
B3=L1
B8=L2
fend
