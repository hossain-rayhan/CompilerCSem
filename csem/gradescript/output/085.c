func main
localloc 4
bgnstmt 11
label L1
t1 := local 0
t2 := 1
t3 := @i t1
t4 := t3 +i t2
t5 := t1 =i t4
bgnstmt 13
t6 := local 0
t7 := @i t6
t8 := 10
t9 := t7 <i t8
bt t9 B1
br B2
label L2
bgnstmt 14
br L1
label L3
B1=L2
B2=L3
bgnstmt 17
t10 := "%d\n"
t11 := local 0
t12 := @i t11
argi t10
argi t12
t13 := global printf
t14 := fi t13 2
fend
