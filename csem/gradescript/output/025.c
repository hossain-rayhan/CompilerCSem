func main
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
bgnstmt 14
t7 := local 0
t8 := @i t7
t9 := local 1
t10 := @i t9
t11 := t8 ==i t10
bt t11 B1
br B2
label L1
bgnstmt 15
t12 := "a and b match (%d)!\n"
t13 := local 0
t14 := @i t13
argi t12
argi t14
t15 := global printf
t16 := fi t15 2
br B3
label L2
bgnstmt 17
bgnstmt 18
t17 := "a and b don't match (%d != %d)!\n"
t18 := local 0
t19 := @i t18
t20 := local 1
t21 := @i t20
argi t17
argi t19
argi t21
t22 := global printf
t23 := fi t22 3
label L3
B1=L1
B2=L2
B3=L3
fend
