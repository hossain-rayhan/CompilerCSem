alloc a 96
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 14
label L1
bgnstmt 15
t4 := local 0
t5 := @i t4
t6 := 24
t7 := t5 >=i t6
bt t7 B1
br B2
label L2
bgnstmt 16
br B3
label L3
B1=L2
B2=L3
bgnstmt 17
t8 := local 0
t9 := @i t8
t10 := global a
t11 := t10 []i t9
t12 := 0
t13 := t11 =i t12
bgnstmt 18
t14 := local 0
t15 := 1
t16 := @i t14
t17 := t16 +i t15
t18 := t14 =i t17
label L4
t19 := local 0
t20 := @i t19
t21 := 100
t22 := t20 <i t21
bt t22 B4
br B5
label L5
B4=L1
B5=L5
B3=L4
fend
