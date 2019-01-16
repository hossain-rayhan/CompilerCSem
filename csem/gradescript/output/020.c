alloc i 32
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 2
t3 := t1 =i t2
bgnstmt 14
t4 := 0
t5 := global i
t6 := t5 []i t4
t7 := 2
t8 := t6 =i t7
bgnstmt 16
t9 := 0
t10 := global i
t11 := t10 []i t9
t12 := @i t11
t13 := local 0
t14 := @i t13
t15 := t12 ==i t14
bt t15 B1
br B2
label L1
bgnstmt 17
t16 := 1
t17 := global i
t18 := t17 []i t16
t19 := 3
t20 := t18 =i t19
label L2
B1=L1
B2=L2
fend
