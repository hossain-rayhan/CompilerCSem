alloc gl 8
func cool
formal 8
localloc 8
bgnstmt 13
t1 := local 0
t2 := param 0
t3 := @f t2
t4 := t1 =f t3
bgnstmt 14
t5 := local 0
t6 := @f t5
t7 := cvi t6
reti t7
fend
func main
localloc 4
localloc 8
bgnstmt 20
t8 := local 0
t9 := 0
t10 := t8 =i t9
bgnstmt 21
t11 := local 1
t12 := local 0
t13 := @i t12
t14 := 1
t15 := t13 +i t14
t16 := cvf t15
t17 := t11 =f t16
bgnstmt 22
t18 := local 1
t19 := local 1
t20 := @f t19
argf t20
t21 := global gl
t22 := ff t21 1
t23 := t18 =f t22
bgnstmt 23
t24 := "%d %f\n"
t25 := local 0
t26 := @i t25
t27 := local 1
t28 := @f t27
t29 := cvf t26
t30 := t29 +f t28
t31 := local 1
t32 := @f t31
argf t32
t33 := global gl
t34 := ff t33 1
t35 := 2
t36 := cvf t35
t37 := t34 +f t36
argi t24
argf t30
argf t37
t38 := global printf
t39 := fi t38 3
fend
