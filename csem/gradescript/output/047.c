func main
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 12
t4 := local 1
t5 := 10
t6 := t4 =i t5
bgnstmt 14
label L1
bgnstmt 15
t7 := local 0
t8 := 1
t9 := @i t7
t10 := t9 +i t8
t11 := t7 =i t10
label L2
t12 := local 0
t13 := @i t12
t14 := local 1
t15 := @i t14
t16 := t13 <i t15
bt t16 B1
br B2
label L3
B1=L1
B2=L3
fend
