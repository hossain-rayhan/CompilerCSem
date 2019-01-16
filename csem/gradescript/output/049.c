func magic1
formal 4
formal 4
localloc 4
bgnstmt 22
label L1
t1 := param 0
t2 := @i t1
t3 := param 1
t4 := @i t3
t5 := t2 <i t4
bt t5 B1
br B2
label L2
t6 := param 0
t7 := 1
t8 := @i t6
t9 := t8 +i t7
t10 := t6 =i t9
br B3
label L3
bgnstmt 23
t11 := local 0
t12 := 0
t13 := t11 =i t12
bgnstmt 24
label L4
bgnstmt 25
t14 := local 0
t15 := 1
t16 := @i t14
t17 := t16 +i t15
t18 := t14 =i t17
bgnstmt 26
t19 := param 0
t20 := @i t19
t21 := param 1
t22 := @i t21
argi t20
argi t22
t23 := global magic2
t24 := fi t23 2
label L5
t25 := local 0
t26 := @i t25
t27 := param 1
t28 := @i t27
t29 := t26 <i t28
bt t29 B4
br B5
label L6
B4=L4
B5=L6
br B6
label L7
B1=L3
B2=L7
B3=L1
B6=L2
bgnstmt 31
t30 := local 0
t31 := @i t30
t32 := param 0
t33 := @i t32
t34 := t31 *i t33
t35 := param 1
t36 := @i t35
t37 := t34 *i t36
reti t37
fend
func magic2
formal 8
formal 8
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 36
t38 := local 0
t39 := param 0
t40 := @f t39
t41 := cvi t40
t42 := t38 =i t41
bgnstmt 37
t43 := local 1
t44 := param 0
t45 := @f t44
t46 := param 1
t47 := @f t46
t48 := t45 *f t47
t49 := cvi t48
t50 := t43 =i t49
bgnstmt 38
t51 := local 0
t52 := @i t51
t53 := 0
t54 := t52 ==i t53
bt t54 B7
br B8
label L8
t55 := local 1
t56 := @i t55
t57 := 0
t58 := t56 !=i t57
bt t58 B9
br B10
B7=L8
label L9
bgnstmt 39
t59 := local 2
t60 := local 1
t61 := @i t60
t62 := local 1
t63 := @i t62
t64 := t61 *i t63
t65 := t59 =i t64
br B11
label L10
bgnstmt 41
t66 := local 1
t67 := @i t66
t68 := 0
t69 := t67 ==i t68
bt t69 B12
br B13
label L11
t70 := local 0
t71 := @i t70
t72 := 0
t73 := t71 !=i t72
bt t73 B14
br B15
B12=L11
label L12
bgnstmt 42
t74 := local 2
t75 := local 0
t76 := @i t75
t77 := local 0
t78 := @i t77
t79 := t76 *i t78
t80 := t74 =i t79
br B16
label L13
bgnstmt 44
t81 := local 2
t82 := 100
t83 := t81 =i t82
label L14
B14=L12
B13=L13
B15=L13
B16=L14
label L15
B9=L9
B8=L10
B10=L10
B11=L15
bgnstmt 45
t84 := local 3
t85 := local 2
t86 := @i t85
t87 := t84 =i t86
bgnstmt 47
label L16
bgnstmt 48
t88 := local 1
t89 := 1
t90 := @i t88
t91 := t90 -i t89
t92 := t88 =i t91
bgnstmt 49
label L17
t93 := local 2
t94 := @i t93
t95 := 0
t96 := t94 >i t95
bt t96 B17
br B18
label L18
bgnstmt 50
t97 := local 2
t98 := 1
t99 := @i t97
t100 := t99 -i t98
t101 := t97 =i t100
br B19
label L19
B17=L18
B18=L19
B19=L17
bgnstmt 52
t102 := "%d\n"
t103 := local 3
t104 := @i t103
t105 := local 2
t106 := @i t105
t107 := t104 -i t106
t108 := local 4
t109 := @i t108
t110 := t107 +i t109
argi t102
argi t110
t111 := global printf
t112 := fi t111 2
bgnstmt 53
t113 := local 2
t114 := local 3
t115 := @i t114
t116 := t113 =i t115
bgnstmt 54
t117 := local 4
t118 := 1
t119 := @i t117
t120 := t119 +i t118
t121 := t117 =i t120
label L20
t122 := local 1
t123 := @i t122
t124 := local 0
t125 := @i t124
t126 := t123 >i t125
bt t126 B20
br B21
label L21
B20=L16
B21=L21
bgnstmt 58
t127 := local 4
t128 := @i t127
reti t128
fend
func main
localloc 4
localloc 4
localloc 4
localloc 8
bgnstmt 64
t129 := local 0
t130 := 0
t131 := t129 =i t130
bgnstmt 65
t132 := local 1
t133 := 10
t134 := t132 =i t133
bgnstmt 66
t135 := local 3
t136 := 0
t137 := cvf t136
t138 := t135 =f t137
bgnstmt 68
t139 := local 0
t140 := 0
t141 := t139 =i t140
label L22
t142 := local 0
t143 := @i t142
t144 := local 1
t145 := @i t144
t146 := t143 <i t145
bt t146 B22
br B23
label L23
t147 := local 0
t148 := 1
t149 := @i t147
t150 := t149 +i t148
t151 := t147 =i t150
br B24
label L24
bgnstmt 69
t152 := local 0
t153 := @i t152
t154 := local 1
t155 := @i t154
argi t153
argi t155
t156 := global magic1
t157 := fi t156 2
bgnstmt 70
t158 := local 0
t159 := @i t158
t160 := local 1
t161 := @i t160
argi t159
argi t161
t162 := global magic2
t163 := fi t162 2
br B25
label L25
B22=L24
B23=L25
B24=L22
B25=L23
bgnstmt 74
t164 := local 0
t165 := 0
t166 := t164 =i t165
label L26
t167 := local 0
t168 := @i t167
t169 := local 1
t170 := @i t169
t171 := t168 <i t170
bt t171 B26
br B27
label L27
t172 := local 0
t173 := 1
t174 := @i t172
t175 := t174 +i t173
t176 := t172 =i t175
br B28
label L28
bgnstmt 75
t177 := local 3
t178 := local 0
t179 := @i t178
t180 := local 1
t181 := @i t180
argi t179
argi t181
t182 := global magic2
t183 := fi t182 2
t184 := local 1
t185 := @i t184
t186 := local 0
t187 := @i t186
argi t185
argi t187
t188 := global magic2
t189 := fi t188 2
argi t183
argi t189
t190 := global magic1
t191 := fi t190 2
t192 := cvf t191
t193 := @f t177
t194 := t193 +f t192
t195 := t177 =f t194
bgnstmt 76
t196 := local 3
t197 := local 1
t198 := @i t197
t199 := local 0
t200 := @i t199
argi t198
argi t200
t201 := global magic2
t202 := fi t201 2
t203 := local 0
t204 := @i t203
t205 := local 1
t206 := @i t205
argi t204
argi t206
t207 := global magic2
t208 := fi t207 2
argi t202
argi t208
t209 := global magic1
t210 := fi t209 2
t211 := cvf t210
t212 := @f t196
t213 := t212 +f t211
t214 := t196 =f t213
bgnstmt 77
t215 := local 3
t216 := local 0
t217 := @i t216
t218 := local 0
t219 := @i t218
argi t217
argi t219
t220 := global magic2
t221 := fi t220 2
t222 := local 1
t223 := @i t222
t224 := local 1
t225 := @i t224
argi t223
argi t225
t226 := global magic2
t227 := fi t226 2
argi t221
argi t227
t228 := global magic1
t229 := fi t228 2
t230 := cvf t229
t231 := @f t215
t232 := t231 *f t230
t233 := t215 =f t232
bgnstmt 78
t234 := local 3
t235 := local 1
t236 := @i t235
t237 := local 1
t238 := @i t237
argi t236
argi t238
t239 := global magic2
t240 := fi t239 2
t241 := local 0
t242 := @i t241
t243 := local 0
t244 := @i t243
argi t242
argi t244
t245 := global magic2
t246 := fi t245 2
argi t240
argi t246
t247 := global magic1
t248 := fi t247 2
t249 := cvf t248
t250 := @f t234
t251 := t250 /f t249
t252 := t234 =f t251
br B29
label L29
B26=L28
B27=L29
B28=L26
B29=L27
bgnstmt 82
t253 := "l is %d\n"
t254 := local 3
t255 := @f t254
argi t253
argf t255
t256 := global printf
t257 := fi t256 2
fend
