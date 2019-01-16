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
bgnstmt 16
t14 := "a, b, and c match (%d)!\n"
t15 := local 0
t16 := @i t15
argi t14
argi t16
t17 := global printf
t18 := fi t17 2
label L2
B2=L1
B1=L2
fend
