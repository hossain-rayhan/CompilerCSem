alloc a 96
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 14
label L1
t4 := local 0
t5 := @i t4
t6 := 100
t7 := t5 <i t6
bt t7 B1
br B2
label L2
bgnstmt 15
t8 := local 0
t9 := @i t8
t10 := 24
t11 := t9 >=i t10
bt t11 B3
br B4
label L3
bgnstmt 16
br B5
label L4
B3=L3
B4=L4
bgnstmt 17
t12 := local 0
t13 := @i t12
t14 := global a
t15 := t14 []i t13
t16 := 0
t17 := t15 =i t16
bgnstmt 18
t18 := local 0
t19 := 1
t20 := @i t18
t21 := t20 +i t19
t22 := t18 =i t21
br B6
label L5
B1=L2
B2=L5
B6=L1
B5=L5
fend
