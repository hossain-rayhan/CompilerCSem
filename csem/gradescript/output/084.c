func main
localloc 4
bgnstmt 11
label L1
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 13
br B1
bgnstmt 15
label L2
B1=L2
t4 := local 0
t5 := 1
t6 := @i t4
t7 := t6 +i t5
t8 := t4 =i t7
bgnstmt 17
t9 := "%d\n"
t10 := local 0
t11 := @i t10
argi t9
argi t11
t12 := global printf
t13 := fi t12 2
bgnstmt 18
br L2
bgnstmt 21
t14 := "%d\n"
t15 := local 0
t16 := @i t15
argi t14
argi t16
t17 := global printf
t18 := fi t17 2
fend
