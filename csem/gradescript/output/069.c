alloc a 96
func main
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 21
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 22
t4 := local 1
t5 := 0
t6 := t4 =i t5
bgnstmt 23
t7 := local 2
t8 := 0
t9 := t7 =i t8
bgnstmt 24
t10 := local 3
t11 := 0
t12 := t10 =i t11
bgnstmt 25
t13 := local 4
t14 := 1
t15 := t13 =i t14
bgnstmt 26
label L1
bgnstmt 27
t16 := local 0
t17 := @i t16
t18 := 240
t19 := t17 >=i t18
bt t19 B1
br B2
label L2
bgnstmt 28
br B3
label L3
B1=L2
B2=L3
bgnstmt 29
t20 := local 0
t21 := @i t20
t22 := global a
t23 := t22 []i t21
t24 := local 4
t25 := @i t24
t26 := t23 =i t25
bgnstmt 30
t27 := local 0
t28 := 1
t29 := @i t27
t30 := t29 +i t28
t31 := t27 =i t30
bgnstmt 31
t32 := local 1
t33 := 0
t34 := t32 =i t33
label L4
t35 := local 1
t36 := @i t35
t37 := local 0
t38 := @i t37
t39 := 1
t40 := t38 -i t39
t41 := global a
t42 := t41 []i t40
t43 := @i t42
t44 := t36 <i t43
bt t44 B4
br B5
label L5
t45 := local 1
t46 := 1
t47 := @i t45
t48 := t47 +i t46
t49 := t45 =i t48
br B6
label L6
bgnstmt 32
t50 := local 2
t51 := local 1
t52 := @i t51
t53 := t50 =i t52
label L7
t54 := local 2
t55 := @i t54
t56 := 0
t57 := t55 >=i t56
bt t57 B7
br B8
label L8
t58 := local 2
t59 := 1
t60 := @i t58
t61 := t60 -i t59
t62 := t58 =i t61
br B9
label L9
bgnstmt 33
t63 := local 3
t64 := 1
t65 := @i t63
t66 := t65 +i t64
t67 := t63 =i t66
br B10
label L10
B7=L9
B8=L10
B9=L7
B10=L8
bgnstmt 35
label L11
t68 := local 3
t69 := @i t68
t70 := 50
t71 := t69 >i t70
bt t71 B11
br B12
label L12
bgnstmt 36
t72 := local 4
t73 := @i t72
t74 := 1000
t75 := t73 >i t74
bt t75 B13
br B14
label L13
bgnstmt 37
br B15
label L14
B13=L13
B14=L14
bgnstmt 38
t76 := local 4
t77 := local 3
t78 := @i t77
t79 := @i t76
t80 := t79 +i t78
t81 := t76 =i t80
bgnstmt 39
t82 := local 3
t83 := 1
t84 := @i t82
t85 := t84 -i t83
t86 := t82 =i t85
bgnstmt 40
t87 := local 3
t88 := @i t87
t89 := 50
t90 := t88 <=i t89
bt t90 B16
br B17
label L15
bgnstmt 41
br B18
label L16
B16=L15
B17=L16
br B19
label L17
B11=L12
B12=L17
B19=L11
B15=L17
B18=L17
bgnstmt 43
t91 := "%d * %d = %d\n"
t92 := local 3
t93 := @i t92
t94 := local 4
t95 := @i t94
t96 := local 3
t97 := @i t96
t98 := local 4
t99 := @i t98
t100 := t97 *i t99
argi t91
argi t93
argi t95
argi t100
t101 := global printf
t102 := fi t101 4
br B20
label L18
B4=L6
B5=L18
B6=L4
B20=L5
bgnstmt 45
t103 := local 3
t104 := @i t103
t105 := 100000
t106 := t104 >i t105
bt t106 B21
br B22
label L19
bgnstmt 46
br B23
label L20
B21=L19
B22=L20
label L21
t107 := local 0
t108 := @i t107
t109 := 100
t110 := t108 <i t109
bt t110 B24
br B25
label L22
B24=L1
B25=L22
B3=L21
B23=L22
bgnstmt 51
t111 := "\nFINAL:\n%d * %d = %d\n"
t112 := local 3
t113 := @i t112
t114 := local 4
t115 := @i t114
t116 := local 3
t117 := @i t116
t118 := local 4
t119 := @i t118
t120 := t117 *i t119
argi t111
argi t113
argi t115
argi t120
t121 := global printf
t122 := fi t121 4
fend
