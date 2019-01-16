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
func imul
formal 8
formal 8
bgnstmt 22
t16 := param 0
t17 := @f t16
t18 := param 1
t19 := @f t18
t20 := t17 *f t19
t21 := cvi t20
reti t21
fend
func main
localloc 4
localloc 4
localloc 4
localloc 8
bgnstmt 28
t22 := local 0
t23 := 2
t24 := 2
argi t23
argi t24
t25 := global add
t26 := fi t25 2
t27 := t22 =i t26
bgnstmt 29
t28 := local 1
t29 := 1
t30 := 2
argi t29
argi t30
t31 := global sub
t32 := fi t31 2
t33 := t28 =i t32
bgnstmt 31
t34 := local 3
t35 := local 0
t36 := @i t35
t37 := local 1
t38 := @i t37
argi t36
argi t38
t39 := global fmul
t40 := ff t39 2
t41 := t34 =f t40
bgnstmt 32
t42 := local 2
t43 := local 0
t44 := @i t43
t45 := local 1
t46 := @i t45
argi t44
argi t46
t47 := global imul
t48 := fi t47 2
t49 := t42 =i t48
bgnstmt 35
t50 := local 3
t51 := local 0
t52 := @i t51
t53 := local 1
t54 := @i t53
argi t52
argi t54
t55 := global imul
t56 := fi t55 2
t57 := cvf t56
t58 := t50 =f t57
fend
