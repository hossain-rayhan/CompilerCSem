func main
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 0
t3 := t1 =i t2
label L1
t4 := local 0
t5 := @i t4
t6 := 10
t7 := t5 <i t6
bt t7 B1
br B2
label L2
t8 := local 0
t9 := 1
t10 := @i t8
t11 := t10 +i t9
t12 := t8 =i t11
br B3
label L3
bgnstmt 12
t13 := "%d\n"
t14 := local 0
t15 := @i t14
argi t13
argi t15
t16 := global printf
t17 := fi t16 2
br B4
label L4
B1=L3
B2=L4
B3=L1
B4=L2
fend
