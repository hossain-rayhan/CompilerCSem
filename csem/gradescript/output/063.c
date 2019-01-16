alloc a 96
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 14
label L1
t4 := local 0
t5 := @i t4
t6 := 100
t7 := t5 <i t6
bt t7 B1
br B2
label L2
bgnstmt 15
t8 := local 0
t9 := @i t8
t10 := 24
t11 := t9 >=i t10
bt t11 B3
br B4
label L3
bgnstmt 16
br B5
label L4
B3=L3
B4=L4
bgnstmt 17
t12 := local 0
t13 := @i t12
t14 := global a
t15 := t14 []i t13
t16 := 0
t17 := t15 =i t16
bgnstmt 18
t18 := local 0
t19 := 1
t20 := @i t18
t21 := t20 +i t19
t22 := t18 =i t21
br B6
label L5
B1=L2
B2=L5
B6=L1
B5=L5
bgnstmt 21
label L6
t23 := local 0
t24 := @i t23
t25 := 100
t26 := t24 <i t25
bt t26 B7
br B8
label L7
bgnstmt 22
t27 := local 0
t28 := @i t27
t29 := 24
t30 := t28 >=i t29
bt t30 B9
br B10
label L8
bgnstmt 23
br B11
label L9
B9=L8
B10=L9
bgnstmt 24
t31 := local 0
t32 := @i t31
t33 := global a
t34 := t33 []i t32
t35 := 0
t36 := t34 =i t35
bgnstmt 25
t37 := local 0
t38 := 1
t39 := @i t37
t40 := t39 +i t38
t41 := t37 =i t40
br B12
label L10
B7=L7
B8=L10
B12=L6
B11=L10
bgnstmt 28
label L11
t42 := local 0
t43 := @i t42
t44 := 100
t45 := t43 <i t44
bt t45 B13
br B14
label L12
bgnstmt 29
t46 := local 0
t47 := @i t46
t48 := 24
t49 := t47 >=i t48
bt t49 B15
br B16
label L13
bgnstmt 30
br B17
label L14
B15=L13
B16=L14
bgnstmt 31
t50 := local 0
t51 := @i t50
t52 := global a
t53 := t52 []i t51
t54 := 0
t55 := t53 =i t54
bgnstmt 32
t56 := local 0
t57 := 1
t58 := @i t56
t59 := t58 +i t57
t60 := t56 =i t59
br B18
label L15
B13=L12
B14=L15
B18=L11
B17=L15
fend
