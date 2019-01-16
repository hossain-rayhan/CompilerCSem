func magic
formal 4
formal 4
formal 4
localloc 4
localloc 4
localloc 4
bgnstmt 19
t1 := local 2
t2 := 0
t3 := t1 =i t2
bgnstmt 20
t4 := local 1
t5 := 0
t6 := t4 =i t5
label L1
t7 := local 1
t8 := @i t7
t9 := 10
t10 := t8 <i t9
bt t10 B1
br B2
label L2
t11 := local 1
t12 := 1
t13 := @i t11
t14 := t13 +i t12
t15 := t11 =i t14
br B3
label L3
bgnstmt 21
t16 := local 0
t17 := 0
t18 := t16 =i t17
label L4
t19 := local 0
t20 := @i t19
t21 := 10
t22 := t20 <i t21
bt t22 B4
br B5
label L5
t23 := local 0
t24 := 1
t25 := @i t23
t26 := t25 +i t24
t27 := t23 =i t26
br B6
label L6
bgnstmt 22
t28 := "%d\n"
t29 := param 0
t30 := @i t29
t31 := param 1
t32 := @i t31
t33 := t30 &i t32
t34 := param 2
t35 := @i t34
t36 := ~i t35
t37 := local 0
t38 := @i t37
t39 := local 1
t40 := @i t39
t41 := ~i t40
t42 := t38 *i t41
t43 := t36 ^i t42
t44 := t33 |i t43
argi t28
argi t44
t45 := global printf
t46 := fi t45 2
bgnstmt 23
t47 := "%d\n"
t48 := param 0
t49 := @i t48
t50 := param 1
t51 := @i t50
t52 := ~i t51
t53 := t49 +i t52
t54 := param 2
t55 := @i t54
t56 := t53 &i t55
t57 := param 0
t58 := @i t57
t59 := t56 ^i t58
t60 := param 1
t61 := @i t60
t62 := local 1
t63 := @i t62
t64 := ~i t63
t65 := t61 /i t64
t66 := t59 |i t65
argi t47
argi t66
t67 := global printf
t68 := fi t67 2
bgnstmt 24
t69 := "%d\n"
t70 := param 0
t71 := @i t70
t72 := param 1
t73 := @i t72
t74 := param 2
t75 := @i t74
t76 := t73 -i t75
t77 := local 0
t78 := @i t77
t79 := param 1
t80 := @i t79
t81 := ~i t80
t82 := t78 *i t81
t83 := t76 +i t82
t84 := t71 &i t83
argi t69
argi t84
t85 := global printf
t86 := fi t85 2
bgnstmt 25
t87 := "%d\n"
t88 := param 0
t89 := @i t88
t90 := ~i t89
t91 := param 1
t92 := @i t91
t93 := t90 &i t92
t94 := param 2
t95 := @i t94
t96 := local 1
t97 := @i t96
t98 := ~i t97
t99 := t95 /i t98
t100 := local 0
t101 := @i t100
t102 := ~i t101
t103 := t99 *i t102
t104 := t93 ^i t103
argi t87
argi t104
t105 := global printf
t106 := fi t105 2
bgnstmt 26
t107 := "%d\n"
t108 := param 0
t109 := @i t108
t110 := ~i t109
t111 := param 1
t112 := @i t111
t113 := ~i t112
t114 := param 2
t115 := @i t114
t116 := t113 |i t115
t117 := t110 &i t116
t118 := param 0
t119 := @i t118
t120 := ~i t119
t121 := local 0
t122 := @i t121
t123 := t120 ^i t122
t124 := t117 |i t123
argi t107
argi t124
t125 := global printf
t126 := fi t125 2
bgnstmt 28
t127 := local 2
t128 := param 0
t129 := @i t128
t130 := param 1
t131 := @i t130
t132 := t129 &i t131
t133 := param 2
t134 := @i t133
t135 := ~i t134
t136 := local 0
t137 := @i t136
t138 := local 1
t139 := @i t138
t140 := ~i t139
t141 := t137 *i t140
t142 := t135 ^i t141
t143 := t132 |i t142
t144 := param 0
t145 := @i t144
t146 := param 1
t147 := @i t146
t148 := ~i t147
t149 := t145 +i t148
t150 := param 2
t151 := @i t150
t152 := t149 &i t151
t153 := param 0
t154 := @i t153
t155 := t152 ^i t154
t156 := param 1
t157 := @i t156
t158 := local 1
t159 := @i t158
t160 := ~i t159
t161 := t157 /i t160
t162 := t155 |i t161
t163 := t143 +i t162
t164 := param 0
t165 := @i t164
t166 := param 1
t167 := @i t166
t168 := param 2
t169 := @i t168
t170 := t167 -i t169
t171 := local 0
t172 := @i t171
t173 := param 1
t174 := @i t173
t175 := ~i t174
t176 := t172 *i t175
t177 := t170 +i t176
t178 := t165 &i t177
t179 := t163 +i t178
t180 := param 0
t181 := @i t180
t182 := ~i t181
t183 := param 1
t184 := @i t183
t185 := t182 &i t184
t186 := param 2
t187 := @i t186
t188 := local 1
t189 := @i t188
t190 := ~i t189
t191 := t187 /i t190
t192 := local 0
t193 := @i t192
t194 := ~i t193
t195 := t191 *i t194
t196 := t185 ^i t195
t197 := t179 +i t196
t198 := param 0
t199 := @i t198
t200 := ~i t199
t201 := param 1
t202 := @i t201
t203 := ~i t202
t204 := param 2
t205 := @i t204
t206 := t203 |i t205
t207 := t200 &i t206
t208 := param 0
t209 := @i t208
t210 := ~i t209
t211 := local 0
t212 := @i t211
t213 := t210 ^i t212
t214 := t207 |i t213
t215 := t197 +i t214
t216 := @i t127
t217 := t216 +i t215
t218 := t127 =i t217
br B7
label L7
B4=L6
B5=L7
B6=L4
B7=L5
br B8
label L8
B1=L3
B2=L8
B3=L1
B8=L2
bgnstmt 38
t219 := local 2
t220 := @i t219
t221 := 0
t222 := t220 <i t221
bt t222 B9
br B10
label L9
bgnstmt 39
t223 := local 2
t224 := @i t223
t225 := -i t224
reti t225
label L10
B9=L9
B10=L10
bgnstmt 40
t226 := local 2
t227 := @i t226
reti t227
fend
func main
localloc 4
localloc 4
localloc 4
bgnstmt 45
t228 := local 0
t229 := 123
t230 := t228 =i t229
bgnstmt 46
t231 := local 1
t232 := 42
t233 := t231 =i t232
bgnstmt 47
t234 := local 2
t235 := 666
t236 := t234 =i t235
bgnstmt 48
label L11
bgnstmt 49
t237 := local 0
t238 := local 0
t239 := @i t238
t240 := local 1
t241 := @i t240
t242 := local 2
t243 := @i t242
argi t239
argi t241
argi t243
t244 := global magic
t245 := fi t244 3
t246 := t237 =i t245
bgnstmt 50
t247 := local 1
t248 := 1
t249 := @i t247
t250 := t249 +i t248
t251 := t247 =i t250
bgnstmt 51
t252 := local 2
t253 := 2
t254 := @i t252
t255 := t254 +i t253
t256 := t252 =i t255
label L12
t257 := local 0
t258 := @i t257
t259 := 1000000
t260 := t258 <i t259
bt t260 B11
br B12
label L13
B11=L11
B12=L13
fend
