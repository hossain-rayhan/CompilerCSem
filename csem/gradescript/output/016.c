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
argi t11
argi t13
argf t15
t16 := global printf
t17 := fi t16 3
fend
