alloc i 32
func main
localloc 4
bgnstmt 13
t1 := local 0
t2 := 2
t3 := t1 =i t2
bgnstmt 16
t4 := 0
t5 := global i
t6 := t5 []i t4
t7 := 2
t8 := t6 =i t7
bgnstmt 17
t9 := 1
t10 := global i
t11 := t10 []i t9
t12 := 3
t13 := t11 =i t12
bgnstmt 18
t14 := 2
t15 := global i
t16 := t15 []i t14
t17 := 4
t18 := t16 =i t17
bgnstmt 21
t19 := 0
t20 := global i
t21 := t20 []i t19
t22 := @i t21
t23 := local 0
t24 := @i t23
t25 := t22 ==i t24
bt t25 B1
br B2
label L1
bgnstmt 22
t26 := 1
t27 := global i
t28 := t27 []i t26
t29 := 1
t30 := -i t29
t31 := t28 =i t30
bgnstmt 23
t32 := 2
t33 := global i
t34 := t33 []i t32
t35 := 2
t36 := -i t35
t37 := t34 =i t36
label L2
B1=L1
B2=L2
fend
