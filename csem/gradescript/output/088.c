func magic
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 12
label L1
t4 := "test1\n"
argi t4
t5 := global printf
t6 := fi t5 1
bgnstmt 14
t7 := local 0
t8 := 1
t9 := @i t7
t10 := t9 +i t8
t11 := t7 =i t10
bgnstmt 15
t12 := local 0
t13 := @i t12
t14 := 10
t15 := t13 ==i t14
bt t15 B1
br B2
label L2
bgnstmt 16
br B3
label L3
B1=L2
B2=L3
bgnstmt 17
t16 := local 1
t17 := local 0
t18 := @i t17
t19 := t16 =i t18
bgnstmt 18
br B4
bgnstmt 20
label L4
B4=L4
t20 := "B: %d\n"
t21 := local 1
t22 := @i t21
argi t20
argi t22
t23 := global printf
t24 := fi t23 2
bgnstmt 22
t25 := local 1
t26 := 1
t27 := @i t25
t28 := t27 -i t26
t29 := t25 =i t28
bgnstmt 23
t30 := local 1
t31 := @i t30
t32 := 0
t33 := t31 ==i t32
bt t33 B5
br B6
label L5
bgnstmt 24
br L1
label L6
B5=L5
B6=L6
bgnstmt 25
br L4
bgnstmt 27
label L7
B3=L7
reti
fend
func main
bgnstmt 32
t34 := global magic
t35 := fi t34 0
fend
