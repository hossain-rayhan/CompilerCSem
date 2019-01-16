alloc RAND_MAX 4
alloc array 256
func rand_int
formal 4
localloc 4
localloc 4
bgnstmt 26
t1 := local 0
t2 := global RAND_MAX
t3 := @i t2
t4 := global RAND_MAX
t5 := @i t4
t6 := param 0
t7 := @i t6
t8 := t5 %i t7
t9 := t3 -i t8
t10 := t1 =i t9
bgnstmt 28
label L1
bgnstmt 29
t11 := local 1
t12 := global rand
t13 := fi t12 0
t14 := t11 =i t13
label L2
t15 := local 1
t16 := @i t15
t17 := local 0
t18 := @i t17
t19 := t16 >=i t18
bt t19 B1
br B2
label L3
B1=L1
B2=L3
fend
func shuffle
formal 4
localloc 4
localloc 4
localloc 4
bgnstmt 37
t20 := local 0
t21 := param 0
t22 := @i t21
t23 := 1
t24 := t22 -i t23
t25 := t20 =i t24
label L4
t26 := local 0
t27 := @i t26
t28 := 0
t29 := t27 >i t28
bt t29 B3
br B4
label L5
t30 := local 0
t31 := 1
t32 := @i t30
t33 := t32 -i t31
t34 := t30 =i t33
br B5
label L6
bgnstmt 38
t35 := local 1
t36 := local 0
t37 := @i t36
t38 := local 0
t39 := @i t38
t40 := t37 +i t39
argi t40
t41 := global rand_int
t42 := fi t41 1
t43 := t35 =i t42
bgnstmt 39
t44 := local 2
t45 := local 1
t46 := @i t45
t47 := global array
t48 := t47 []i t46
t49 := @i t48
t50 := t44 =i t49
bgnstmt 40
t51 := local 1
t52 := @i t51
t53 := global array
t54 := t53 []i t52
t55 := local 0
t56 := @i t55
t57 := global array
t58 := t57 []i t56
t59 := @i t58
t60 := t54 =i t59
bgnstmt 41
t61 := local 0
t62 := @i t61
t63 := global array
t64 := t63 []i t62
t65 := local 2
t66 := @i t65
t67 := t64 =i t66
br B6
label L7
B3=L6
B4=L7
B5=L4
B6=L5
fend
func main
bgnstmt 47
t68 := global RAND_MAX
t69 := 32767
t70 := t68 =i t69
fend
