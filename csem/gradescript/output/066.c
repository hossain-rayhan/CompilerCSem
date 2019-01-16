alloc a 96
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 14
label L1
bgnstmt 15
t4 := local 0
t5 := @i t4
t6 := 24
t7 := t5 >=i t6
bt t7 B1
br B2
label L2
bgnstmt 16
br B3
label L3
B1=L2
B2=L3
bgnstmt 17
t8 := local 0
t9 := @i t8
t10 := global a
t11 := t10 []i t9
t12 := 0
t13 := t11 =i t12
bgnstmt 18
t14 := local 0
t15 := 1
t16 := @i t14
t17 := t16 +i t15
t18 := t14 =i t17
label L4
t19 := local 0
t20 := @i t19
t21 := 100
t22 := t20 <i t21
bt t22 B4
br B5
label L5
B4=L1
B5=L5
B3=L5
bgnstmt 22
t23 := local 0
t24 := 0
t25 := t23 =i t24
bgnstmt 23
label L6
bgnstmt 24
t26 := local 0
t27 := @i t26
t28 := 24
t29 := t27 >=i t28
bt t29 B6
br B7
label L7
bgnstmt 25
br B8
label L8
B6=L7
B7=L8
bgnstmt 26
t30 := local 0
t31 := @i t30
t32 := global a
t33 := t32 []i t31
t34 := 0
t35 := t33 =i t34
bgnstmt 27
t36 := local 0
t37 := 1
t38 := @i t36
t39 := t38 +i t37
t40 := t36 =i t39
label L9
t41 := local 0
t42 := @i t41
t43 := 100
t44 := t42 <i t43
bt t44 B9
br B10
label L10
B9=L6
B10=L10
B8=L10
bgnstmt 31
t45 := local 0
t46 := 0
t47 := t45 =i t46
bgnstmt 32
label L11
bgnstmt 33
t48 := local 0
t49 := @i t48
t50 := 24
t51 := t49 >=i t50
bt t51 B11
br B12
label L12
bgnstmt 34
br B13
label L13
B11=L12
B12=L13
bgnstmt 35
t52 := local 0
t53 := @i t52
t54 := global a
t55 := t54 []i t53
t56 := 0
t57 := t55 =i t56
bgnstmt 36
t58 := local 0
t59 := 1
t60 := @i t58
t61 := t60 +i t59
t62 := t58 =i t61
label L14
t63 := local 0
t64 := @i t63
t65 := 100
t66 := t64 <i t65
bt t66 B14
br B15
label L15
B14=L11
B15=L15
B13=L15
fend
