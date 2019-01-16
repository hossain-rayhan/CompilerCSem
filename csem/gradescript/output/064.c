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
B5=L1
bgnstmt 21
t23 := local 0
t24 := 0
t25 := t23 =i t24
bgnstmt 22
label L6
t26 := local 0
t27 := @i t26
t28 := 100
t29 := t27 <i t28
bt t29 B7
br B8
label L7
bgnstmt 23
t30 := local 0
t31 := @i t30
t32 := 24
t33 := t31 >=i t32
bt t33 B9
br B10
label L8
bgnstmt 24
br B11
label L9
B9=L8
B10=L9
bgnstmt 25
t34 := local 0
t35 := @i t34
t36 := global a
t37 := t36 []i t35
t38 := 0
t39 := t37 =i t38
bgnstmt 26
t40 := local 0
t41 := 1
t42 := @i t40
t43 := t42 +i t41
t44 := t40 =i t43
br B12
label L10
B7=L7
B8=L10
B12=L6
B11=L6
bgnstmt 29
t45 := local 0
t46 := 0
t47 := t45 =i t46
bgnstmt 30
label L11
t48 := local 0
t49 := @i t48
t50 := 100
t51 := t49 <i t50
bt t51 B13
br B14
label L12
bgnstmt 31
t52 := local 0
t53 := @i t52
t54 := 24
t55 := t53 >=i t54
bt t55 B15
br B16
label L13
bgnstmt 32
br B17
label L14
B15=L13
B16=L14
bgnstmt 33
t56 := local 0
t57 := @i t56
t58 := global a
t59 := t58 []i t57
t60 := 0
t61 := t59 =i t60
bgnstmt 34
t62 := local 0
t63 := 1
t64 := @i t62
t65 := t64 +i t63
t66 := t62 =i t65
br B18
label L15
B13=L12
B14=L15
B18=L11
B17=L11
fend
