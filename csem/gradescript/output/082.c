func add
formal 4
formal 4
bgnstmt 10
t1 := param 0
t2 := @i t1
t3 := param 1
t4 := @i t3
t5 := t2 +i t4
reti t5
fend
func main
localloc 16
bgnstmt 15
br B1
bgnstmt 16
label L1
t6 := 0
t7 := local 0
t8 := t7 []i t6
t9 := 2
t10 := t8 =i t9
bgnstmt 18
t11 := 1
t12 := local 0
t13 := t12 []i t11
t14 := 3
t15 := t13 =i t14
bgnstmt 19
br B2
bgnstmt 21
label L2
B1=L2
t16 := 2
t17 := local 0
t18 := t17 []i t16
t19 := 0
t20 := local 0
t21 := t20 []i t19
t22 := @i t21
t23 := 1
t24 := local 0
t25 := t24 []i t23
t26 := @i t25
argi t22
argi t26
t27 := global add
t28 := fi t27 2
t29 := t18 =i t28
bgnstmt 23
t30 := 3
t31 := local 0
t32 := t31 []i t30
t33 := 0
t34 := local 0
t35 := t34 []i t33
t36 := @i t35
t37 := 1
t38 := local 0
t39 := t38 []i t37
t40 := @i t39
t41 := t36 *i t40
t42 := t32 =i t41
bgnstmt 24
br L1
bgnstmt 26
label L3
B2=L3
t43 := 0
t44 := local 0
t45 := t44 []i t43
t46 := 42
t47 := t45 =i t46
fend
