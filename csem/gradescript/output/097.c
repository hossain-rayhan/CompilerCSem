alloc i 40
alloc j 40
func merging
formal 4
formal 4
formal 4
localloc 4
localloc 4
localloc 4
bgnstmt 23
t1 := local 0
t2 := param 0
t3 := @i t2
t4 := t1 =i t3
bgnstmt 24
t5 := local 1
t6 := param 1
t7 := @i t6
t8 := 1
t9 := t7 +i t8
t10 := t5 =i t9
bgnstmt 26
t11 := local 2
t12 := param 0
t13 := @i t12
t14 := t11 =i t13
label L1
t15 := local 0
t16 := @i t15
t17 := param 1
t18 := @i t17
t19 := t16 <=i t18
bt t19 B1
br B2
label L2
t20 := local 1
t21 := @i t20
t22 := param 2
t23 := @i t22
t24 := t21 <=i t23
bt t24 B3
br B4
B1=L2
label L3
t25 := local 2
t26 := 1
t27 := @i t25
t28 := t27 +i t26
t29 := t25 =i t28
br B5
label L4
bgnstmt 27
t30 := local 0
t31 := @i t30
t32 := global i
t33 := t32 []i t31
t34 := @i t33
t35 := local 1
t36 := @i t35
t37 := global i
t38 := t37 []i t36
t39 := @i t38
t40 := t34 <=i t39
bt t40 B6
br B7
label L5
bgnstmt 28
t41 := local 2
t42 := @i t41
t43 := global j
t44 := t43 []i t42
t45 := local 0
t46 := @i t45
t47 := global i
t48 := t47 []i t46
t49 := @i t48
t50 := t44 =i t49
bgnstmt 29
t51 := local 0
t52 := 1
t53 := @i t51
t54 := t53 +i t52
t55 := t51 =i t54
br B8
label L6
bgnstmt 31
bgnstmt 32
t56 := local 2
t57 := @i t56
t58 := global j
t59 := t58 []i t57
t60 := local 1
t61 := @i t60
t62 := global i
t63 := t62 []i t61
t64 := @i t63
t65 := t59 =i t64
bgnstmt 33
t66 := local 1
t67 := 1
t68 := @i t66
t69 := t68 +i t67
t70 := t66 =i t69
label L7
B6=L5
B7=L6
B8=L7
br B9
label L8
B3=L4
B2=L8
B4=L8
B5=L1
B9=L3
bgnstmt 37
label L9
t71 := local 0
t72 := @i t71
t73 := param 1
t74 := @i t73
t75 := t72 <=i t74
bt t75 B10
br B11
label L10
bgnstmt 38
t76 := local 2
t77 := @i t76
t78 := global j
t79 := t78 []i t77
t80 := local 0
t81 := @i t80
t82 := global i
t83 := t82 []i t81
t84 := @i t83
t85 := t79 =i t84
bgnstmt 39
t86 := local 2
t87 := 1
t88 := @i t86
t89 := t88 +i t87
t90 := t86 =i t89
bgnstmt 40
t91 := local 0
t92 := 1
t93 := @i t91
t94 := t93 +i t92
t95 := t91 =i t94
br B12
label L11
B10=L10
B11=L11
B12=L9
bgnstmt 43
label L12
t96 := local 1
t97 := @i t96
t98 := param 2
t99 := @i t98
t100 := t97 <=i t99
bt t100 B13
br B14
label L13
bgnstmt 44
t101 := local 2
t102 := @i t101
t103 := global j
t104 := t103 []i t102
t105 := local 1
t106 := @i t105
t107 := global i
t108 := t107 []i t106
t109 := @i t108
t110 := t104 =i t109
bgnstmt 45
t111 := local 2
t112 := 1
t113 := @i t111
t114 := t113 +i t112
t115 := t111 =i t114
bgnstmt 46
t116 := local 0
t117 := 1
t118 := @i t116
t119 := t118 +i t117
t120 := t116 =i t119
br B15
label L14
B13=L13
B14=L14
B15=L12
bgnstmt 49
t121 := local 2
t122 := param 0
t123 := @i t122
t124 := t121 =i t123
label L15
t125 := local 2
t126 := @i t125
t127 := param 2
t128 := @i t127
t129 := t126 <=i t128
bt t129 B16
br B17
label L16
t130 := local 2
t131 := 1
t132 := @i t130
t133 := t132 +i t131
t134 := t130 =i t133
br B18
label L17
bgnstmt 50
t135 := local 2
t136 := @i t135
t137 := global i
t138 := t137 []i t136
t139 := local 2
t140 := @i t139
t141 := global j
t142 := t141 []i t140
t143 := @i t142
t144 := t138 =i t143
br B19
label L18
B16=L17
B17=L18
B18=L15
B19=L16
fend
func sort
formal 4
formal 4
localloc 4
bgnstmt 56
t145 := param 0
t146 := @i t145
t147 := param 1
t148 := @i t147
t149 := t146 <i t148
bt t149 B20
br B21
label L19
bgnstmt 57
t150 := local 0
t151 := param 0
t152 := @i t151
t153 := param 1
t154 := @i t153
t155 := t152 +i t154
t156 := 2
t157 := t155 /i t156
t158 := t150 =i t157
bgnstmt 58
t159 := param 0
t160 := @i t159
t161 := local 0
t162 := @i t161
argi t160
argi t162
t163 := global sort
t164 := fi t163 2
bgnstmt 59
t165 := local 0
t166 := @i t165
t167 := 1
t168 := t166 +i t167
t169 := param 1
t170 := @i t169
argi t168
argi t170
t171 := global sort
t172 := fi t171 2
bgnstmt 60
t173 := param 0
t174 := @i t173
t175 := local 0
t176 := @i t175
t177 := param 1
t178 := @i t177
argi t174
argi t176
argi t178
t179 := global merging
t180 := fi t179 3
br B22
label L20
bgnstmt 61
bgnstmt 62
reti
label L21
B20=L19
B21=L20
B22=L21
fend
func main
localloc 4
bgnstmt 70
t181 := 0
t182 := global i
t183 := t182 []i t181
t184 := 4
t185 := t183 =i t184
bgnstmt 71
t186 := 1
t187 := global i
t188 := t187 []i t186
t189 := 7
t190 := t188 =i t189
bgnstmt 72
t191 := 2
t192 := global i
t193 := t192 []i t191
t194 := 9
t195 := t193 =i t194
bgnstmt 73
t196 := 3
t197 := global i
t198 := t197 []i t196
t199 := 11
t200 := t198 =i t199
bgnstmt 74
t201 := 4
t202 := global i
t203 := t202 []i t201
t204 := 1
t205 := t203 =i t204
bgnstmt 75
t206 := 5
t207 := global i
t208 := t207 []i t206
t209 := 5
t210 := -i t209
t211 := t208 =i t210
bgnstmt 76
t212 := 6
t213 := global i
t214 := t213 []i t212
t215 := 6
t216 := t214 =i t215
bgnstmt 77
t217 := 7
t218 := global i
t219 := t218 []i t217
t220 := 837
t221 := -i t220
t222 := t219 =i t221
bgnstmt 78
t223 := 8
t224 := global i
t225 := t224 []i t223
t226 := 13587
t227 := t225 =i t226
bgnstmt 79
t228 := 9
t229 := global i
t230 := t229 []i t228
t231 := 3598359
t232 := -i t231
t233 := t230 =i t232
bgnstmt 82
t234 := 0
t235 := 9
argi t234
argi t235
t236 := global sort
t237 := fi t236 2
bgnstmt 85
t238 := local 0
t239 := 0
t240 := t238 =i t239
label L22
t241 := local 0
t242 := @i t241
t243 := 10
t244 := t242 <i t243
bt t244 B23
br B24
label L23
t245 := local 0
t246 := 1
t247 := @i t245
t248 := t247 +i t246
t249 := t245 =i t248
br B25
label L24
bgnstmt 86
t250 := "%d "
t251 := local 0
t252 := @i t251
t253 := global i
t254 := t253 []i t252
t255 := @i t254
argi t250
argi t255
t256 := global printf
t257 := fi t256 2
br B26
label L25
B23=L24
B24=L25
B25=L22
B26=L23
bgnstmt 88
t258 := "\n"
argi t258
t259 := global printf
t260 := fi t259 1
fend
