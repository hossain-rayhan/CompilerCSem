func main
localloc 4
bgnstmt 10
t1 := local 0
t2 := 0
t3 := t1 =i t2
bgnstmt 11
t4 := "%d\n"
t5 := local 0
t6 := @i t5
argi t4
argi t6
t7 := global printf
t8 := fi t7 2
fend
