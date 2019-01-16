alloc i 16
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
bgnstmt 22
t24 := 0
t25 := global i
t26 := t25 []i t24
t27 := @i t26
t28 := local 0
t29 := @i t28
t30 := t27 ==i t29
bt t30 B1
br B2
label L1
bgnstmt 23
t31 := 1
t32 := global i
t33 := t32 []i t31
t34 := 1
t35 := -i t34
t36 := t33 =i t35
bgnstmt 24
t37 := 2
t38 := global i
t39 := t38 []i t37
t40 := 2
t41 := -i t40
t42 := t39 =i t41
br B3
label L2
bgnstmt 27
t43 := 0
t44 := global i
t45 := t44 []i t43
t46 := @i t45
t47 := local 0
t48 := @i t47
t49 := t46 !=i t48
bt t49 B4
br B5
label L3
bgnstmt 28
t50 := 0
t51 := global i
t52 := t51 []i t50
t53 := local 0
t54 := @i t53
t55 := t52 =i t54
br B6
label L4
bgnstmt 30
bgnstmt 32
t56 := 3
t57 := global i
t58 := t57 []i t56
t59 := 2
t60 := t58 =i t59
label L5
B4=L3
B5=L4
B6=L5
label L6
B1=L1
B2=L2
B3=L6
fend
