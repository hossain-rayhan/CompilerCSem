func main
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 0
t3 := t1 =i t2
label L1
t4 := local 0
t5 := @i t4
t6 := 10
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
t13 := local 1
t14 := 0
t15 := t13 =i t14
label L4
t16 := local 1
t17 := @i t16
t18 := 10
t19 := t17 <i t18
bt t19 B4
br B5
label L5
t20 := local 1
t21 := 1
t22 := @i t20
t23 := t22 +i t21
t24 := t20 =i t23
br B6
label L6
bgnstmt 15
t25 := "%d, %d\n"
t26 := local 0
t27 := @i t26
t28 := local 1
t29 := @i t28
argi t25
argi t27
argi t29
t30 := global printf
t31 := fi t30 3
br B7
label L7
B4=L6
B5=L7
B6=L4
B7=L5
br B8
label L8
B1=L3
B2=L8
B3=L1
B8=L2
fend
