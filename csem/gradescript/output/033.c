alloc i 16
func main
bgnstmt 19
t1 := 0
t2 := global i
t3 := t2 []i t1
t4 := 2
t5 := t3 =i t4
bgnstmt 20
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
bgnstmt 21
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
bgnstmt 22
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
bgnstmt 25
t39 := 0
t40 := global i
t41 := t40 []i t39
t42 := @i t41
t43 := 0
t44 := t42 !=i t43
bt t44 B1
br B2
label L1
bgnstmt 26
t45 := 1
t46 := global i
t47 := t46 []i t45
t48 := @i t47
t49 := 2
t50 := global i
t51 := t50 []i t49
t52 := @i t51
t53 := t48 ==i t52
bt t53 B3
br B4
label L2
bgnstmt 27
t54 := "yes\n"
argi t54
t55 := global printf
t56 := fi t55 1
br B5
label L3
bgnstmt 29
bgnstmt 30
t57 := 2
t58 := global i
t59 := t58 []i t57
t60 := @i t59
t61 := 3
t62 := global i
t63 := t62 []i t61
t64 := @i t63
t65 := t60 ==i t64
bt t65 B6
br B7
label L4
t66 := 0
t67 := global i
t68 := t67 []i t66
t69 := @i t68
t70 := 3
t71 := global i
t72 := t71 []i t70
t73 := @i t72
t74 := t69 ==i t73
bt t74 B8
br B9
label L5
t75 := 0
t76 := global i
t77 := t76 []i t75
t78 := @i t77
t79 := 2
t80 := global i
t81 := t80 []i t79
t82 := @i t81
t83 := t78 ==i t82
bt t83 B10
br B11
B8=L5
B7=L4
label L6
bgnstmt 31
t84 := "lolwhat\n"
argi t84
t85 := global printf
t86 := fi t85 1
br B12
label L7
bgnstmt 33
bgnstmt 34
t87 := "no\n"
argi t87
t88 := global printf
t89 := fi t88 1
label L8
B6=L6
B10=L6
B9=L7
B11=L7
B12=L8
label L9
B3=L2
B4=L3
B5=L9
br B13
label L10
bgnstmt 39
t90 := 1
t91 := global i
t92 := t91 []i t90
t93 := @i t92
t94 := 0
t95 := t93 !=i t94
bt t95 B14
br B15
label L11
bgnstmt 40
t96 := "i[1] (%d) is not 0!\n"
t97 := 1
t98 := global i
t99 := t98 []i t97
t100 := @i t99
argi t96
argi t100
t101 := global printf
t102 := fi t101 2
br B16
label L12
bgnstmt 42
bgnstmt 43
t103 := "These pathetic numbers never had a chance...\n"
argi t103
t104 := global printf
t105 := fi t104 1
label L13
B15=L11
B14=L12
B16=L13
label L14
B2=L1
B1=L10
B13=L14
fend
