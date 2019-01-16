alloc i 32
func main
localloc 8
localloc 4
localloc 8
bgnstmt 14
t1 := 0
t2 := local 0
t3 := t2 []i t1
t4 := 8
t5 := t3 =i t4
bgnstmt 15
t6 := 1
t7 := local 0
t8 := t7 []i t6
t9 := 13
t10 := t8 =i t9
bgnstmt 16
t11 := local 1
t12 := 2
t13 := t11 =i t12
bgnstmt 18
t14 := local 1
t15 := @i t14
t16 := global i
t17 := t16 []i t15
t18 := 0
t19 := local 0
t20 := t19 []i t18
t21 := @i t20
t22 := t17 =i t21
bgnstmt 19
t23 := local 1
t24 := @i t23
t25 := 1
t26 := t24 +i t25
t27 := global i
t28 := t27 []i t26
t29 := 1
t30 := local 0
t31 := t30 []i t29
t32 := @i t31
t33 := t28 =i t32
bgnstmt 21
t34 := global i
t35 := local 2
t36 := @f t35
t37 := cvi t36
t38 := t34 =i t37
bgnstmt 22
t39 := 1
t40 := -i t39
t41 := global i
t42 := t41 []i t40
t43 := local 2
t44 := @f t43
t45 := cvi t44
t46 := t42 =i t45
fend
