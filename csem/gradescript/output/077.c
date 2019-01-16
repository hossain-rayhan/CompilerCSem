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
t11 := ~i t10
t12 := t8 +i t11
bgnstmt 13
t13 := local 1
t14 := @i t13
t15 := local 0
t16 := @i t15
t17 := ~i t16
t18 := t14 +i t17
bgnstmt 14
t19 := local 0
t20 := @i t19
t21 := local 1
t22 := @i t21
t23 := ~i t22
t24 := t20 +i t23
t25 := local 1
t26 := @i t25
t27 := ~i t26
t28 := t24 +i t27
fend
