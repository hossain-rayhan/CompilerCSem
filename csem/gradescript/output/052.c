alloc a 96
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 0
t3 := t1 =i t2
label L1
t4 := local 0
t5 := @i t4
t6 := 100
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
bgnstmt 14
t13 := local 0
t14 := @i t13
t15 := 24
t16 := t14 >=i t15
bt t16 B4
br B5
label L4
bgnstmt 15
br B6
label L5
B4=L4
B5=L5
bgnstmt 16
t17 := local 0
t18 := @i t17
t19 := global a
t20 := t19 []i t18
t21 := 0
t22 := t20 =i t21
bgnstmt 17
br B7
br B8
label L6
B1=L3
B2=L6
B6=L2
B3=L1
B8=L2
B7=L6
fend
