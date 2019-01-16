func main
localloc 4
localloc 4
localloc 4
bgnstmt 11
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 12
t4 := local 1
t5 := 10
t6 := t4 =i t5
bgnstmt 15
label L1
t7 := 1
t8 := 0
t9 := t7 !=i t8
bt t9 B1
br B2
label L2
bgnstmt 16
t10 := "yes\n"
argi t10
t11 := global printf
t12 := fi t11 1
br B3
label L3
B1=L2
B2=L3
B3=L1
fend
