func main
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
t10 := "%d\n"
t11 := local 0
t12 := @i t11
t13 := local 1
t14 := @i t13
t15 := t12 &i t14
t16 := local 2
t17 := @i t16
t18 := ~i t17
t19 := t15 |i t18
argi t10
argi t19
t20 := global printf
t21 := fi t20 2
bgnstmt 22
t22 := "%d\n"
t23 := local 0
t24 := @i t23
t25 := local 1
t26 := @i t25
t27 := ~i t26
t28 := t24 +i t27
t29 := local 2
t30 := @i t29
t31 := local 0
t32 := @i t31
t33 := t30 *i t32
t34 := t28 &i t33
t35 := local 1
t36 := @i t35
t37 := t34 |i t36
argi t22
argi t37
t38 := global printf
t39 := fi t38 2
bgnstmt 23
t40 := "%d\n"
t41 := local 0
t42 := @i t41
t43 := local 1
t44 := @i t43
t45 := local 2
t46 := @i t45
t47 := local 1
t48 := @i t47
t49 := ~i t48
t50 := t46 *i t49
t51 := t44 -i t50
t52 := t42 &i t51
argi t40
argi t52
t53 := global printf
t54 := fi t53 2
bgnstmt 24
t55 := "%d\n"
t56 := local 0
t57 := @i t56
t58 := ~i t57
t59 := local 1
t60 := @i t59
t61 := t58 &i t60
t62 := local 2
t63 := @i t62
t64 := t61 ^i t63
argi t55
argi t64
t65 := global printf
t66 := fi t65 2
bgnstmt 25
t67 := "%d\n"
t68 := local 0
t69 := @i t68
t70 := ~i t69
t71 := local 1
t72 := @i t71
t73 := ~i t72
t74 := local 2
t75 := @i t74
t76 := t73 |i t75
t77 := t70 &i t76
t78 := local 0
t79 := @i t78
t80 := t77 |i t79
argi t67
argi t80
t81 := global printf
t82 := fi t81 2
fend
