func main
localloc 4
localloc 4
localloc 4
bgnstmt 10
t1 := local 0
t2 := 1
t3 := t1 =i t2
bgnstmt 11
t4 := local 1
t5 := 2
t6 := t4 =i t5
bgnstmt 12
t7 := local 2
t8 := 3
t9 := t7 =i t8
bgnstmt 14
t10 := local 0
t11 := local 1
t12 := @i t11
t13 := ~i t12
t14 := local 2
t15 := @i t14
t16 := ~i t15
t17 := t13 |i t16
t18 := local 0
t19 := @i t18
t20 := local 1
t21 := @i t20
t22 := ~i t21
t23 := t19 ^i t22
t24 := t17 &i t23
t25 := @i t10
t26 := t25 +i t24
t27 := t10 =i t26
bgnstmt 15
t28 := local 1
t29 := local 0
t30 := @i t29
t31 := ~i t30
t32 := local 0
t33 := @i t32
t34 := t31 |i t33
t35 := local 1
t36 := @i t35
t37 := ~i t36
t38 := 8
t39 := t37 <<i t38
t40 := t34 *i t39
t41 := @i t28
t42 := t41 +i t40
t43 := t28 =i t42
bgnstmt 16
t44 := local 2
t45 := local 2
t46 := @i t45
t47 := ~i t46
t48 := local 2
t49 := @i t48
t50 := ~i t49
t51 := t47 *i t50
t52 := local 1
t53 := @i t52
t54 := local 0
t55 := @i t54
t56 := 2
t57 := t55 >>i t56
t58 := t53 &i t57
t59 := t51 |i t58
t60 := 12
t61 := t59 <<i t60
t62 := @i t44
t63 := t62 +i t61
t64 := t44 =i t63
fend
