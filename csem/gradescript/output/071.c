func main
localloc 4
localloc 4
bgnstmt 10
t1 := local 0
t2 := 1
t3 := t1 =i t2
bgnstmt 11
t4 := local 1
t5 := 2
t6 := t4 =i t5
bgnstmt 12
t7 := local 0
t8 := @i t7
t9 := local 1
t10 := @i t9
t11 := t8 |i t10
bgnstmt 13
t12 := local 1
t13 := @i t12
t14 := local 0
t15 := @i t14
t16 := t13 |i t15
bgnstmt 14
t17 := local 0
t18 := @i t17
t19 := local 1
t20 := @i t19
t21 := t18 |i t20
t22 := local 1
t23 := @i t22
t24 := t21 |i t23
fend
