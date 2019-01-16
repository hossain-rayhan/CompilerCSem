alloc i 32
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 2
t3 := t1 =i t2
bgnstmt 16
t4 := 0
t5 := global i
t6 := t5 []i t4
t7 := 2
t8 := t6 =i t7
bgnstmt 17
t9 := 1
t10 := global i
t11 := t10 []i t9
t12 := 3
t13 := t11 =i t12
bgnstmt 18
t14 := 2
t15 := global i
t16 := t15 []i t14
t17 := 4
t18 := t16 =i t17
bgnstmt 19
t19 := 3
t20 := global i
t21 := t20 []i t19
t22 := 5
t23 := t21 =i t22
bgnstmt 20
t24 := 4
t25 := global i
t26 := t25 []i t24
t27 := 6
t28 := t26 =i t27
bgnstmt 21
t29 := 5
t30 := global i
t31 := t30 []i t29
t32 := 7
t33 := t31 =i t32
bgnstmt 22
t34 := 6
t35 := global i
t36 := t35 []i t34
t37 := 8
t38 := t36 =i t37
bgnstmt 23
t39 := 7
t40 := global i
t41 := t40 []i t39
t42 := 9
t43 := t41 =i t42
bgnstmt 26
t44 := 0
t45 := global i
t46 := t45 []i t44
t47 := @i t46
t48 := local 0
t49 := @i t48
t50 := t47 ==i t49
bt t50 B1
br B2
label L1
bgnstmt 27
t51 := 1
t52 := global i
t53 := t52 []i t51
t54 := 1
t55 := -i t54
t56 := t53 =i t55
bgnstmt 28
t57 := 2
t58 := global i
t59 := t58 []i t57
t60 := 2
t61 := -i t60
t62 := t59 =i t61
br B3
label L2
bgnstmt 30
bgnstmt 32
t63 := 7
t64 := global i
t65 := t64 []i t63
t66 := 2
t67 := t65 =i t66
label L3
B1=L1
B2=L2
B3=L3
fend
