func main
localloc 4
localloc 4
bgnstmt 11
br B1
bgnstmt 12
label L1
t1 := local 0
t2 := 1
t3 := @i t1
t4 := t3 -i t2
t5 := t1 =i t4
bgnstmt 14
t6 := local 0
t7 := @i t6
t8 := 0
t9 := t7 ==i t8
bt t9 B2
br B3
label L2
bgnstmt 15
br B4
br B5
label L3
bgnstmt 17
br L1
label L4
B2=L2
B3=L3
B5=L4
bgnstmt 19
label L5
B1=L5
t10 := local 0
t11 := 10
t12 := t10 =i t11
bgnstmt 21
br L1
bgnstmt 23
label L6
B4=L6
t13 := "%d %d\n"
t14 := local 0
t15 := @i t14
t16 := local 1
t17 := @i t16
argi t13
argi t15
argi t17
t18 := global printf
t19 := fi t18 3
fend
