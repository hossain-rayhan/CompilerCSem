alloc i 64
func main
localloc 8
localloc 4
bgnstmt 13
t1 := 0
t2 := local 0
t3 := t2 []i t1
t4 := 8
t5 := t3 =i t4
bgnstmt 14
t6 := 1
t7 := local 0
t8 := t7 []i t6
t9 := 13
t10 := t8 =i t9
bgnstmt 15
t11 := local 1
t12 := 2
t13 := t11 =i t12
bgnstmt 17
t14 := local 1
t15 := @i t14
t16 := global i
t17 := t16 []f t15
t18 := 0
t19 := local 0
t20 := t19 []i t18
t21 := @i t20
t22 := cvf t21
t23 := t17 =f t22
bgnstmt 18
t24 := local 1
t25 := @i t24
t26 := 1
t27 := t25 +i t26
t28 := global i
t29 := t28 []f t27
t30 := 1
t31 := local 0
t32 := t31 []i t30
t33 := @i t32
t34 := cvf t33
t35 := t29 =f t34
fend
