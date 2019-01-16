alloc i 64
func main
localloc 4
localloc 4
bgnstmt 13
t1 := local 0
t2 := 8
t3 := t1 =i t2
bgnstmt 14
t4 := local 1
t5 := 2
t6 := t4 =i t5
bgnstmt 16
t7 := local 1
t8 := @i t7
t9 := global i
t10 := t9 []f t8
t11 := local 0
t12 := @i t11
t13 := cvf t12
t14 := t10 =f t13
fend
