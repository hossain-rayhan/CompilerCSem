func main
localloc 4
localloc 4
localloc 4
bgnstmt 16
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 17
t4 := local 1
t5 := 10
t6 := t4 =i t5
bgnstmt 19
label L1
bgnstmt 20
t7 := local 0
t8 := 1
t9 := @i t7
t10 := t9 +i t8
t11 := t7 =i t10
bgnstmt 21
label L2
bgnstmt 22
t12 := local 0
t13 := local 1
t14 := @i t13
t15 := @i t12
t16 := t15 +i t14
t17 := t12 =i t16
label L3
t18 := local 2
t19 := @i t18
t20 := local 1
t21 := @i t20
t22 := t19 <i t21
bt t22 B1
br B2
label L4
B1=L2
B2=L4
label L5
t23 := global rand
t24 := fi t23 0
t25 := 20000
t26 := t24 %i t25
t27 := 10000
t28 := t26 <i t27
bt t28 B3
br B4
label L6
B3=L1
B4=L6
fend
