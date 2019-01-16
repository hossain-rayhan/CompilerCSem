func add
formal 4
formal 4
bgnstmt 9
t1 := param 0
t2 := @i t1
t3 := param 1
t4 := @i t3
t5 := t2 +i t4
reti t5
fend
func main
localloc 4
bgnstmt 14
t6 := local 0
t7 := 1
t8 := 2
argi t7
argi t8
t9 := global add
t10 := fi t9 2
t11 := t6 =i t10
fend
