func main
localloc 4
localloc 8
bgnstmt 11
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 12
t4 := local 1
t5 := local 0
t6 := @i t5
t7 := 1
t8 := t6 +i t7
t9 := cvf t8
t10 := t4 =f t9
bgnstmt 13
t11 := "%d %f\n"
t12 := local 0
t13 := @i t12
t14 := local 1
t15 := @f t14
t16 := cvf t13
t17 := t16 +f t15
t18 := local 1
t19 := @f t18
t20 := 2
t21 := cvf t20
t22 := t19 +f t21
argi t11
argf t17
argf t22
t23 := global printf
t24 := fi t23 3
fend
