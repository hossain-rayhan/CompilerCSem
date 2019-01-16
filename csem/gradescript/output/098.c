alloc i 40
alloc j 40
func QuickSort
formal 4
bgnstmt 24
t1 := 0
t2 := param 0
t3 := @i t2
t4 := 1
t5 := t3 -i t4
argi t1
argi t5
t6 := global QuickSortRun
t7 := fi t6 2
fend
func QuickSortPartition
formal 4
formal 4
localloc 4
bgnstmt 30
t8 := local 0
t9 := param 0
t10 := @i t9
t11 := global i
t12 := t11 []i t10
t13 := @i t12
t14 := t8 =i t13
bgnstmt 31
t15 := param 0
t16 := param 0
t17 := @i t16
t18 := 1
t19 := t17 -i t18
t20 := t15 =i t19
bgnstmt 32
t21 := param 1
t22 := param 1
t23 := @i t22
t24 := 1
t25 := t23 +i t24
t26 := t21 =i t25
bgnstmt 34
label L1
bgnstmt 35
label L2
bgnstmt 36
t27 := param 0
t28 := param 0
t29 := @i t28
t30 := 1
t31 := t29 +i t30
t32 := t27 =i t31
label L3
t33 := param 0
t34 := @i t33
t35 := global i
t36 := t35 []i t34
t37 := @i t36
t38 := local 0
t39 := @i t38
t40 := t37 <i t39
bt t40 B1
br B2
label L4
B1=L2
B2=L4
bgnstmt 39
label L5
bgnstmt 40
t41 := param 1
t42 := param 1
t43 := @i t42
t44 := 1
t45 := t43 -i t44
t46 := t41 =i t45
label L6
t47 := param 1
t48 := @i t47
t49 := global i
t50 := t49 []i t48
t51 := @i t50
t52 := local 0
t53 := @i t52
t54 := t51 >i t53
bt t54 B3
br B4
label L7
B3=L5
B4=L7
bgnstmt 43
t55 := param 0
t56 := @i t55
t57 := param 1
t58 := @i t57
t59 := t56 >=i t58
bt t59 B5
br B6
label L8
bgnstmt 44
br B7
label L9
B5=L8
B6=L9
bgnstmt 46
t60 := param 0
t61 := @i t60
t62 := global i
t63 := t62 []i t61
t64 := @i t63
t65 := param 1
t66 := @i t65
t67 := global i
t68 := t67 []i t66
t69 := @i t68
argi t64
argi t69
t70 := global swap
t71 := fi t70 2
label L10
t72 := 1
t73 := 0
t74 := t72 !=i t73
bt t74 B8
br B9
label L11
B8=L1
B9=L11
B7=L11
bgnstmt 50
t75 := param 1
t76 := @i t75
reti t76
fend
func QuickSortRun
formal 4
formal 4
localloc 4
bgnstmt 55
t77 := param 0
t78 := @i t77
t79 := param 1
t80 := @i t79
t81 := t78 <i t80
bt t81 B10
br B11
label L12
bgnstmt 56
t82 := local 0
t83 := param 0
t84 := @i t83
t85 := param 1
t86 := @i t85
argi t84
argi t86
t87 := global QuickSortPartition
t88 := fi t87 2
t89 := t82 =i t88
bgnstmt 57
t90 := param 0
t91 := @i t90
t92 := local 0
t93 := @i t92
argi t91
argi t93
t94 := global QuickSortRun
t95 := fi t94 2
bgnstmt 58
t96 := local 0
t97 := @i t96
t98 := 1
t99 := t97 +i t98
t100 := param 1
t101 := @i t100
argi t99
argi t101
t102 := global QuickSortRun
t103 := fi t102 2
label L13
B10=L12
B11=L13
fend
