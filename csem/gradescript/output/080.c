func main
localloc 4
bgnstmt 10
label L1
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 12
br B1
bgnstmt 14
label L2
B1=L2
t4 := local 0
t5 := 1
t6 := t4 =i t5
fend
