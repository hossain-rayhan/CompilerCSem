alloc i 64
alloc a 4
func main
localloc 4
localloc 4
localloc 8
bgnstmt 16
t1 := local 1
t2 := 2
t3 := t1 =i t2
bgnstmt 17
t4 := local 0
t5 := local 1
t6 := @i t5
t7 := t4 =i t6
bgnstmt 18
t8 := local 2
t9 := local 0
t10 := @i t9
t11 := cvf t10
t12 := t8 =f t11
fend
