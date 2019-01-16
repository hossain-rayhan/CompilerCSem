alloc a 96
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 0
t3 := t1 =i t2
label L1
t4 := local 0
t5 := @i t4
t6 := 100
t7 := t5 <i t6
bt t7 B1
br B2
label L2
t8 := local 0
t9 := 1
t10 := @i t8
t11 := t10 +i t9
t12 := t8 =i t11
br B3
label L3
bgnstmt 14
t13 := local 0
t14 := @i t13
t15 := 24
t16 := t14 >=i t15
bt t16 B4
br B5
label L4
bgnstmt 15
br B6
label L5
B4=L4
B5=L5
bgnstmt 16
t17 := local 0
t18 := @i t17
t19 := global a
t20 := t19 []i t18
t21 := 0
t22 := t20 =i t21
bgnstmt 17
br B7
br B8
label L6
B1=L3
B2=L6
B6=L2
B3=L1
B8=L2
B7=L6
bgnstmt 20
t23 := local 0
t24 := 0
t25 := t23 =i t24
label L7
t26 := local 0
t27 := @i t26
t28 := 100
t29 := t27 <i t28
bt t29 B9
br B10
label L8
t30 := local 0
t31 := 1
t32 := @i t30
t33 := t32 +i t31
t34 := t30 =i t33
br B11
label L9
bgnstmt 21
t35 := local 0
t36 := @i t35
t37 := 24
t38 := t36 >=i t37
bt t38 B12
br B13
label L10
bgnstmt 22
br B14
label L11
B12=L10
B13=L11
bgnstmt 23
t39 := local 0
t40 := @i t39
t41 := global a
t42 := t41 []i t40
t43 := 0
t44 := t42 =i t43
bgnstmt 24
br B15
br B16
label L12
B9=L9
B10=L12
B14=L8
B11=L7
B16=L8
B15=L12
bgnstmt 27
t45 := local 0
t46 := 0
t47 := t45 =i t46
label L13
t48 := local 0
t49 := @i t48
t50 := 100
t51 := t49 <i t50
bt t51 B17
br B18
label L14
t52 := local 0
t53 := 1
t54 := @i t52
t55 := t54 +i t53
t56 := t52 =i t55
br B19
label L15
bgnstmt 28
t57 := local 0
t58 := @i t57
t59 := 24
t60 := t58 >=i t59
bt t60 B20
br B21
label L16
bgnstmt 29
br B22
label L17
B20=L16
B21=L17
bgnstmt 30
t61 := local 0
t62 := @i t61
t63 := global a
t64 := t63 []i t62
t65 := 0
t66 := t64 =i t65
bgnstmt 31
br B23
br B24
label L18
B17=L15
B18=L18
B22=L14
B19=L13
B24=L14
B23=L18
fend
