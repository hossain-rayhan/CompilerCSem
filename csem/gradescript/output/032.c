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
t12 := 0
t13 := t11 !=i t12
bt t13 B1
br B2
label L1
t14 := local 1
t15 := @i t14
t16 := local 2
t17 := @i t16
t18 := t15 ==i t17
bt t18 B3
br B4
B2=L1
label L2
t19 := local 0
t20 := @i t19
t21 := local 2
t22 := @i t21
t23 := t20 !=i t22
bt t23 B5
br B6
label L3
t24 := local 1
t25 := @i t24
t26 := 0
t27 := t25 !=i t26
bt t27 B7
br B8
B5=L3
B1=L2
B4=L2
label L4
bgnstmt 16
t28 := "a, b, and c match (%d)!\n"
t29 := local 0
t30 := @i t29
argi t28
argi t30
t31 := global printf
t32 := fi t31 2
label L5
B3=L4
B8=L4
B6=L5
B7=L5
fend
