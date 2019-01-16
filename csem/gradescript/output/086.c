func main
localloc 4
localloc 4
bgnstmt 11
label L1
t1 := local 0
t2 := 1
t3 := @i t1
t4 := t3 +i t2
t5 := t1 =i t4
bgnstmt 13
br B1
bgnstmt 14
label L2
B1=L2
t6 := local 1
t7 := 1
t8 := @i t6
t9 := t8 +i t7
t10 := t6 =i t9
bgnstmt 16
br L1
bgnstmt 18
t11 := "%d %d\n"
t12 := local 0
t13 := @i t12
t14 := local 1
t15 := @i t14
argi t11
argi t13
argi t15
t16 := global printf
t17 := fi t16 3
fend
