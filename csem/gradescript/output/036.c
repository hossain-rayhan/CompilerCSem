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
func sub
formal 4
formal 4
bgnstmt 13
t6 := param 0
t7 := @i t6
t8 := param 1
t9 := @i t8
t10 := t7 -i t9
reti t10
fend
func main
localloc 4
bgnstmt 18
t11 := local 0
t12 := 2
t13 := 2
argi t12
argi t13
t14 := global add
t15 := fi t14 2
t16 := t11 =i t15
bgnstmt 19
t17 := local 0
t18 := 1
t19 := 2
argi t18
argi t19
t20 := global sub
t21 := fi t20 2
t22 := t17 =i t21
fend
