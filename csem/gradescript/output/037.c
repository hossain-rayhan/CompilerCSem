func add
formal 4
formal 4
bgnstmt 9
t1 := param 0
t2 := @i t1
t3 := param 1
t4 := @i t3
t5 := t2 +i t4
reti t5
fend
func sub
formal 4
formal 4
bgnstmt 13
t6 := param 0
t7 := @i t6
t8 := param 1
t9 := @i t8
t10 := t7 -i t9
reti t10
fend
func fmul
formal 8
formal 8
bgnstmt 18
t11 := param 0
t12 := @f t11
t13 := param 1
t14 := @f t13
t15 := t12 *f t14
retf t15
fend
func main
localloc 4
localloc 4
localloc 8
bgnstmt 24
t16 := local 0
t17 := 2
t18 := 2
argi t17
argi t18
t19 := global add
t20 := fi t19 2
t21 := t16 =i t20
bgnstmt 25
t22 := local 1
t23 := 1
t24 := 2
argi t23
argi t24
t25 := global sub
t26 := fi t25 2
t27 := t22 =i t26
bgnstmt 27
t28 := local 2
t29 := local 0
t30 := @i t29
t31 := local 1
t32 := @i t31
argi t30
argi t32
t33 := global fmul
t34 := ff t33 2
t35 := t28 =f t34
fend
