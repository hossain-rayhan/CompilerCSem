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
t15 := t12 +i t14
t16 := local 2
t17 := @i t16
t18 := t15 -i t17
argi t10
argi t18
t19 := global printf
t20 := fi t19 2
bgnstmt 22
t21 := "%d\n"
t22 := local 0
t23 := @i t22
t24 := local 1
t25 := @i t24
t26 := t23 +i t25
t27 := local 2
t28 := @i t27
t29 := t26 &i t28
argi t21
argi t29
t30 := global printf
t31 := fi t30 2
bgnstmt 23
t32 := "%d\n"
t33 := local 0
t34 := @i t33
t35 := local 1
t36 := @i t35
t37 := local 2
t38 := @i t37
t39 := t36 -i t38
t40 := t34 &i t39
argi t32
argi t40
t41 := global printf
t42 := fi t41 2
bgnstmt 24
t43 := "%d\n"
t44 := local 0
t45 := @i t44
t46 := local 1
t47 := @i t46
t48 := t45 &i t47
t49 := local 2
t50 := @i t49
t51 := t48 |i t50
argi t43
argi t51
t52 := global printf
t53 := fi t52 2
bgnstmt 25
t54 := "%d\n"
t55 := local 0
t56 := @i t55
t57 := local 1
t58 := @i t57
t59 := local 2
t60 := @i t59
t61 := t58 |i t60
t62 := t56 &i t61
t63 := local 0
t64 := @i t63
t65 := t62 |i t64
argi t54
argi t65
t66 := global printf
t67 := fi t66 2
fend
