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
t7 := local 0
t8 := @i t7
t9 := local 1
t10 := @i t9
t11 := t8 <i t10
bt t11 B1
br B2
label L2
bgnstmt 15
t12 := local 0
t13 := 1
t14 := @i t12
t15 := t14 +i t13
t16 := t12 =i t15
br B3
label L3
B1=L2
B2=L3
B3=L1
fend
