alloc i 16
alloc j 32
func main
localloc 4
localloc 4
bgnstmt 23
t1 := 0
t2 := global i
t3 := t2 []i t1
t4 := 2
t5 := t3 =i t4
bgnstmt 24
t6 := 3
t7 := global i
t8 := t7 []i t6
t9 := 0
t10 := global i
t11 := t10 []i t9
t12 := @i t11
t13 := 2
t14 := t12 *i t13
t15 := t8 =i t14
bgnstmt 25
t16 := 2
t17 := global i
t18 := t17 []i t16
t19 := 3
t20 := global i
t21 := t20 []i t19
t22 := @i t21
t23 := 0
t24 := global i
t25 := t24 []i t23
t26 := @i t25
t27 := t22 *i t26
t28 := t18 =i t27
bgnstmt 26
t29 := 1
t30 := global i
t31 := t30 []i t29
t32 := 0
t33 := global i
t34 := t33 []i t32
t35 := @i t34
t36 := 1
t37 := t35 +i t36
t38 := t31 =i t37
bgnstmt 28
t39 := local 0
t40 := 0
t41 := global i
t42 := t41 []i t40
t43 := @i t42
t44 := 1
t45 := global i
t46 := t45 []i t44
t47 := @i t46
t48 := t43 +i t47
t49 := 2
t50 := global i
t51 := t50 []i t49
t52 := @i t51
t53 := t48 +i t52
t54 := 3
t55 := global i
t56 := t55 []i t54
t57 := @i t56
t58 := t53 +i t57
t59 := t39 =i t58
bgnstmt 29
t60 := local 1
t61 := 0
t62 := global i
t63 := t62 []i t61
t64 := @i t63
t65 := 1
t66 := global i
t67 := t66 []i t65
t68 := @i t67
t69 := t64 *i t68
t70 := 2
t71 := global i
t72 := t71 []i t70
t73 := @i t72
t74 := t69 *i t73
t75 := 3
t76 := global i
t77 := t76 []i t75
t78 := @i t77
t79 := t74 *i t78
t80 := t60 =i t79
bgnstmt 32
t81 := local 0
t82 := @i t81
t83 := local 1
t84 := @i t83
t85 := t82 ==i t84
bt t85 B1
br B2
label L1
bgnstmt 33
t86 := "a == b (%d)! Therefore, all of \"i\" must be 1!\n"
t87 := local 0
t88 := @i t87
argi t86
argi t88
t89 := global printf
t90 := fi t89 2
br B3
label L2
bgnstmt 36
t91 := local 0
t92 := @i t91
t93 := local 1
t94 := @i t93
t95 := t92 <i t94
bt t95 B4
br B5
label L3
t96 := 0
t97 := global i
t98 := t97 []i t96
t99 := @i t98
t100 := 0
t101 := t99 !=i t100
bt t101 B6
br B7
B4=L3
label L4
t102 := 0
t103 := global i
t104 := t103 []i t102
t105 := @i t104
t106 := 0
t107 := t105 !=i t106
bt t107 B8
br B9
B5=L4
B6=L4
label L5
bgnstmt 37
t108 := "a is less than b (%d < %d), but something weird is going on...\n"
t109 := local 0
t110 := @i t109
t111 := local 1
t112 := @i t111
argi t108
argi t110
argi t112
t113 := global printf
t114 := fi t113 3
br B10
label L6
bgnstmt 39
bgnstmt 40
t115 := 0
t116 := global i
t117 := t116 []i t115
t118 := @i t117
t119 := 2
t120 := t118 ==i t119
bt t120 B11
br B12
label L7
bgnstmt 41
t121 := "no\n"
argi t121
t122 := global printf
t123 := fi t122 1
br B13
label L8
bgnstmt 43
bgnstmt 44
t124 := "yes\n"
argi t124
t125 := global printf
t126 := fi t125 1
label L9
B11=L7
B12=L8
B13=L9
label L10
B7=L5
B8=L5
B9=L6
B10=L10
label L11
B1=L1
B2=L2
B3=L11
fend
