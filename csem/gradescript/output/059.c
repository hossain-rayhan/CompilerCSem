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
t11 := 1
t12 := t10 =i t11
bgnstmt 25
t13 := local 4
t14 := 0
t15 := t13 =i t14
bgnstmt 26
label L1
bgnstmt 27
t16 := local 0
t17 := @i t16
t18 := global a
t19 := t18 []i t17
t20 := local 3
t21 := @i t20
t22 := t19 =i t21
bgnstmt 28
t23 := local 0
t24 := 1
t25 := @i t23
t26 := t25 +i t24
t27 := t23 =i t26
bgnstmt 29
t28 := local 1
t29 := 0
t30 := t28 =i t29
label L2
t31 := local 1
t32 := @i t31
t33 := local 0
t34 := @i t33
t35 := 1
t36 := t34 -i t35
t37 := global a
t38 := t37 []i t36
t39 := @i t38
t40 := t32 <i t39
bt t40 B1
br B2
label L3
t41 := local 1
t42 := 1
t43 := @i t41
t44 := t43 +i t42
t45 := t41 =i t44
br B3
label L4
bgnstmt 30
t46 := local 2
t47 := 1
t48 := @i t46
t49 := t48 +i t47
t50 := t46 =i t49
bgnstmt 31
label L5
t51 := local 2
t52 := @i t51
t53 := 50
t54 := t52 >i t53
bt t54 B4
br B5
label L6
bgnstmt 32
t55 := local 3
t56 := 1
t57 := @i t55
t58 := t57 +i t56
t59 := t55 =i t58
bgnstmt 33
t60 := local 2
t61 := 4
t62 := @i t60
t63 := t62 -i t61
t64 := t60 =i t63
br B6
label L7
B4=L6
B5=L7
B6=L5
bgnstmt 35
t65 := "%8d - %d * %d = %d\n"
t66 := local 4
t67 := @i t66
t68 := local 2
t69 := @i t68
t70 := local 3
t71 := @i t70
t72 := local 2
t73 := @i t72
t74 := local 3
t75 := @i t74
t76 := t73 *i t75
argi t65
argi t67
argi t69
argi t71
argi t76
t77 := global printf
t78 := fi t77 5
bgnstmt 36
t79 := local 4
t80 := 1
t81 := @i t79
t82 := t81 +i t80
t83 := t79 =i t82
br B7
label L8
B1=L4
B2=L8
B3=L2
B7=L3
label L9
t84 := local 0
t85 := @i t84
t86 := 100
t87 := t85 <i t86
bt t87 B8
br B9
label L10
B8=L1
B9=L10
fend
