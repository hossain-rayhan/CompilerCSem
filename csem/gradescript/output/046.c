func main
localloc 4
localloc 4
localloc 4
bgnstmt 14
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 15
t4 := local 1
t5 := 10
t6 := t4 =i t5
bgnstmt 17
label L1
t7 := local 0
t8 := @i t7
t9 := local 1
t10 := @i t9
t11 := t8 <i t10
bt t11 B1
br B2
label L2
bgnstmt 18
t12 := local 0
t13 := 1
t14 := @i t12
t15 := t14 +i t13
t16 := t12 =i t15
bgnstmt 19
t17 := local 2
t18 := 0
t19 := t17 =i t18
bgnstmt 20
label L3
t20 := local 2
t21 := @i t20
t22 := local 0
t23 := @i t22
t24 := t21 <i t23
bt t24 B3
br B4
label L4
bgnstmt 21
t25 := local 2
t26 := 1
t27 := @i t25
t28 := t27 +i t26
t29 := t25 =i t28
bgnstmt 22
t30 := "%d\n"
t31 := local 2
t32 := @i t31
argi t30
argi t32
t33 := global printf
t34 := fi t33 2
br B5
label L5
B3=L4
B4=L5
B5=L3
br B6
label L6
B1=L2
B2=L6
B6=L1
fend
