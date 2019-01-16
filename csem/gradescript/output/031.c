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
B1=L1
label L2
t19 := local 0
t20 := @i t19
t21 := local 2
t22 := @i t21
t23 := t20 !=i t22
bt t23 B5
br B6
B4=L2
label L3
bgnstmt 16
t24 := "a, b, and c match (%d)!\n"
t25 := local 0
t26 := @i t25
argi t24
argi t26
t27 := global printf
t28 := fi t27 2
label L4
B2=L3
B3=L3
B5=L3
B6=L4
fend
