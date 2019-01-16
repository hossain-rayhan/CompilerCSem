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
t15 := local 0
t16 := @i t15
t17 := local 2
t18 := @i t17
t19 := t16 ==i t18
bt t19 B3
br B4
B1=L1
label L2
bgnstmt 16
t20 := "a, b, and c match (%d)!\n"
t21 := local 0
t22 := @i t21
argi t20
argi t22
t23 := global printf
t24 := fi t23 2
label L3
B3=L2
B2=L3
B4=L3
fend
