func main
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 1
t3 := t1 =i t2
bgnstmt 12
t4 := local 1
t5 := 2
t6 := t4 =i t5
bgnstmt 13
t7 := local 2
t8 := 3
t9 := t7 =i t8
bgnstmt 15
t10 := local 3
t11 := 0
t12 := t10 =i t11
label L1
t13 := local 3
t14 := @i t13
t15 := local 0
t16 := @i t15
t17 := 12
t18 := t16 <<i t17
t19 := t14 |i t18
t20 := 1
t21 := 12
t22 := t20 <<i t21
t23 := t19 <i t22
bt t23 B1
br B2
label L2
t24 := local 3
t25 := 1
t26 := @i t24
t27 := t26 +i t25
t28 := t24 =i t27
br B3
label L3
bgnstmt 16
t29 := local 0
t30 := local 1
t31 := @i t30
t32 := ~i t31
t33 := local 2
t34 := @i t33
t35 := ~i t34
t36 := t32 |i t35
t37 := local 0
t38 := @i t37
t39 := local 1
t40 := @i t39
t41 := ~i t40
t42 := t38 ^i t41
t43 := t36 &i t42
t44 := @i t29
t45 := t44 +i t43
t46 := t29 =i t45
bgnstmt 17
t47 := local 1
t48 := local 0
t49 := @i t48
t50 := ~i t49
t51 := local 0
t52 := @i t51
t53 := t50 |i t52
t54 := local 1
t55 := @i t54
t56 := ~i t55
t57 := 8
t58 := t56 <<i t57
t59 := t53 *i t58
t60 := @i t47
t61 := t60 +i t59
t62 := t47 =i t61
bgnstmt 18
t63 := local 2
t64 := local 2
t65 := @i t64
t66 := ~i t65
t67 := local 2
t68 := @i t67
t69 := ~i t68
t70 := t66 *i t69
t71 := local 1
t72 := @i t71
t73 := local 0
t74 := @i t73
t75 := 2
t76 := t74 >>i t75
t77 := t72 &i t76
t78 := t70 |i t77
t79 := 12
t80 := t78 <<i t79
t81 := @i t63
t82 := t81 +i t80
t83 := t63 =i t82
br B4
label L4
B1=L3
B2=L4
B3=L1
B4=L2
bgnstmt 21
t84 := "%d %d %d\n"
t85 := local 0
t86 := @i t85
t87 := local 1
t88 := @i t87
t89 := local 2
t90 := @i t89
argi t84
argi t86
argi t88
argi t90
t91 := global printf
t92 := fi t91 4
fend
