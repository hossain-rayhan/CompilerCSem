func main
localloc 4
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 2
t3 := t1 =i t2
bgnstmt 12
t4 := local 1
t5 := 3
t6 := t4 =i t5
bgnstmt 13
t7 := local 2
t8 := 2
t9 := t7 =i t8
bgnstmt 15
t10 := local 0
t11 := @i t10
t12 := local 1
t13 := @i t12
t14 := t11 ==i t13
bt t14 B1
br B2
label L1
t15 := local 1
t16 := @i t15
t17 := local 2
t18 := @i t17
t19 := t16 ==i t18
bt t19 B3
br B4
B2=L1
label L2
bgnstmt 16
t20 := local 0
t21 := @i t20
t22 := local 1
t23 := @i t22
t24 := t21 ==i t23
bt t24 B5
br B6
label L3
bgnstmt 17
t25 := "a and b match (%d)!\n"
t26 := local 0
t27 := @i t26
argi t25
argi t27
t28 := global printf
t29 := fi t28 2
label L4
B5=L3
B6=L4
bgnstmt 18
t30 := local 1
t31 := @i t30
t32 := local 2
t33 := @i t32
t34 := t31 ==i t33
bt t34 B7
br B8
label L5
bgnstmt 19
t35 := "b and c match (%d)!\n"
t36 := local 1
t37 := @i t36
argi t35
argi t37
t38 := global printf
t39 := fi t38 2
label L6
B7=L5
B8=L6
br B9
label L7
bgnstmt 22
t40 := local 0
t41 := @i t40
t42 := local 2
t43 := @i t42
t44 := t41 ==i t43
bt t44 B10
br B11
label L8
t45 := local 2
t46 := @i t45
t47 := local 0
t48 := @i t47
t49 := t46 ==i t48
bt t49 B12
br B13
B11=L8
label L9
bgnstmt 23
t50 := "a and b don't match, but a and c do! (%d)\n"
t51 := local 0
t52 := @i t51
argi t50
argi t52
t53 := global printf
t54 := fi t53 2
br B14
label L10
bgnstmt 25
bgnstmt 26
t55 := "These pathetic numbers never had a chance...\n"
argi t55
t56 := global printf
t57 := fi t56 1
label L11
B10=L9
B12=L9
B13=L10
B14=L11
label L12
B1=L2
B3=L2
B4=L7
B9=L12
fend
