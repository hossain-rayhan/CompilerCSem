func magic1
formal 4
formal 4
localloc 4
localloc 4
bgnstmt 20
t1 := local 0
t2 := param 0
t3 := @i t2
t4 := t1 =i t3
bgnstmt 21
label L1
t5 := "test1\n"
argi t5
t6 := global printf
t7 := fi t6 1
bgnstmt 23
t8 := local 0
t9 := 1
t10 := @i t8
t11 := t10 +i t9
t12 := t8 =i t11
bgnstmt 24
t13 := local 0
t14 := @i t13
t15 := param 1
t16 := @i t15
t17 := t14 ==i t16
bt t17 B1
br B2
label L2
bgnstmt 25
br B3
label L3
B1=L2
B2=L3
bgnstmt 26
t18 := local 1
t19 := local 0
t20 := @i t19
t21 := t18 =i t20
bgnstmt 27
br B4
bgnstmt 29
label L4
B4=L4
t22 := "B: %d\n"
t23 := local 1
t24 := @i t23
argi t22
argi t24
t25 := global printf
t26 := fi t25 2
bgnstmt 31
t27 := local 1
t28 := 1
t29 := @i t27
t30 := t29 -i t28
t31 := t27 =i t30
bgnstmt 32
t32 := local 1
t33 := @i t32
t34 := 0
t35 := t33 ==i t34
bt t35 B5
br B6
label L5
bgnstmt 33
br L1
label L6
B5=L5
B6=L6
bgnstmt 34
br L4
bgnstmt 36
label L7
B3=L7
t36 := param 1
t37 := @i t36
t38 := param 0
t39 := @i t38
t40 := t37 -i t39
t41 := local 0
t42 := @i t41
t43 := t40 *i t42
reti t43
fend
func magic2
formal 4
formal 4
localloc 4
bgnstmt 42
t44 := "Total: %d\n"
t45 := param 0
t46 := @i t45
argi t44
argi t46
t47 := global printf
t48 := fi t47 2
bgnstmt 44
label L8
t49 := local 0
t50 := global rand
t51 := fi t50 0
t52 := param 1
t53 := @i t52
t54 := param 0
t55 := @i t54
t56 := 1
t57 := t55 +i t56
t58 := t53 *i t57
t59 := t51 %i t58
t60 := t49 =i t59
bgnstmt 46
t61 := local 0
t62 := @i t61
t63 := param 0
t64 := @i t63
t65 := param 1
t66 := @i t65
t67 := t64 *i t66
t68 := t62 >i t67
bt t68 B7
br B8
label L9
bgnstmt 47
br B9
label L10
B7=L9
B8=L10
bgnstmt 48
br L8
bgnstmt 50
label L11
B9=L11
t69 := local 0
t70 := @i t69
reti t70
fend
func main
bgnstmt 56
t71 := 1
t72 := 42
argi t71
argi t72
t73 := global magic1
t74 := fi t73 2
fend
