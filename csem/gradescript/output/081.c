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
t6 := @i t4
t7 := t6 +i t5
t8 := t4 =i t7
bgnstmt 18
br L2
fend
