alloc matrix_w 4
alloc matrix_h 4
alloc list_size 4
alloc matrix 576
alloc node_list 48
alloc adjacency_list 576
alloc INFINITY 4
func c2d_to_1d
formal 4
formal 4
bgnstmt 29
t1 := param 1
t2 := @i t1
t3 := global matrix_w
t4 := @i t3
t5 := t2 *i t4
t6 := param 0
t7 := @i t6
t8 := t5 +i t7
reti t8
fend
func matrix_init
localloc 4
localloc 4
localloc 4
bgnstmt 35
t9 := local 1
t10 := 0
t11 := t9 =i t10
label L1
t12 := local 1
t13 := @i t12
t14 := global matrix_h
t15 := @i t14
t16 := t13 <i t15
bt t16 B1
br B2
label L2
t17 := local 1
t18 := 1
t19 := @i t17
t20 := t19 +i t18
t21 := t17 =i t20
br B3
label L3
bgnstmt 36
t22 := local 0
t23 := 0
t24 := t22 =i t23
label L4
t25 := local 0
t26 := @i t25
t27 := global matrix_w
t28 := @i t27
t29 := t26 <i t28
bt t29 B4
br B5
label L5
t30 := local 0
t31 := 1
t32 := @i t30
t33 := t32 +i t31
t34 := t30 =i t33
br B6
label L6
bgnstmt 37
t35 := local 2
t36 := local 0
t37 := @i t36
t38 := local 1
t39 := @i t38
argi t37
argi t39
t40 := global c2d_to_1d
t41 := fi t40 2
t42 := t35 =i t41
bgnstmt 38
t43 := local 0
t44 := @i t43
t45 := local 1
t46 := @i t45
t47 := t44 ==i t46
bt t47 B7
br B8
label L7
bgnstmt 39
t48 := local 2
t49 := @i t48
t50 := global matrix
t51 := t50 []i t49
t52 := 0
t53 := t51 =i t52
br B9
label L8
bgnstmt 41
t54 := local 2
t55 := @i t54
t56 := global matrix
t57 := t56 []i t55
t58 := global INFINITY
t59 := @i t58
t60 := t57 =i t59
label L9
B7=L7
B8=L8
B9=L9
br B10
label L10
B4=L6
B5=L10
B6=L4
B10=L5
br B11
label L11
B1=L3
B2=L11
B3=L1
B11=L2
fend
func matrix_generate
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 51
t61 := global getpid
t62 := fi t61 0
argi t62
t63 := global srand
t64 := fi t63 1
bgnstmt 52
t65 := local 3
t66 := global rand
t67 := fi t66 0
t68 := 5
t69 := t67 %i t68
t70 := t65 =i t69
bgnstmt 55
t71 := local 1
t72 := 0
t73 := t71 =i t72
label L12
t74 := local 1
t75 := @i t74
t76 := global list_size
t77 := @i t76
t78 := t75 <i t77
bt t78 B12
br B13
label L13
t79 := local 1
t80 := 1
t81 := @i t79
t82 := t81 +i t80
t83 := t79 =i t82
br B14
label L14
bgnstmt 56
t84 := local 0
t85 := local 1
t86 := @i t85
t87 := t84 =i t86
label L15
t88 := local 0
t89 := @i t88
t90 := global list_size
t91 := @i t90
t92 := t89 <i t91
bt t92 B15
br B16
label L16
t93 := local 0
t94 := 1
t95 := @i t93
t96 := t95 +i t94
t97 := t93 =i t96
br B17
label L17
bgnstmt 57
t98 := local 4
t99 := local 0
t100 := @i t99
t101 := local 1
t102 := @i t101
argi t100
argi t102
t103 := global c2d_to_1d
t104 := fi t103 2
t105 := t98 =i t104
bgnstmt 58
t106 := local 5
t107 := local 1
t108 := @i t107
t109 := local 0
t110 := @i t109
argi t108
argi t110
t111 := global c2d_to_1d
t112 := fi t111 2
t113 := t106 =i t112
bgnstmt 59
t114 := global rand
t115 := fi t114 0
t116 := 10
t117 := t115 %i t116
t118 := 6
t119 := local 3
t120 := @i t119
t121 := t118 +i t120
t122 := t117 >i t121
bt t122 B18
br B19
label L18
bgnstmt 60
t123 := local 2
t124 := global rand
t125 := fi t124 0
t126 := 100
t127 := t125 %i t126
t128 := t123 =i t127
bgnstmt 61
t129 := local 4
t130 := @i t129
t131 := global matrix
t132 := t131 []i t130
t133 := local 2
t134 := @i t133
t135 := t132 =i t134
bgnstmt 62
t136 := local 5
t137 := @i t136
t138 := global matrix
t139 := t138 []i t137
t140 := local 2
t141 := @i t140
t142 := t139 =i t141
label L19
B18=L18
B19=L19
bgnstmt 65
t143 := local 0
t144 := @i t143
t145 := local 1
t146 := @i t145
t147 := t144 ==i t146
bt t147 B20
br B21
label L20
bgnstmt 66
t148 := local 4
t149 := @i t148
t150 := global matrix
t151 := t150 []i t149
t152 := 0
t153 := t151 =i t152
bgnstmt 67
t154 := local 5
t155 := @i t154
t156 := global matrix
t157 := t156 []i t155
t158 := 0
t159 := t157 =i t158
label L21
B20=L20
B21=L21
br B22
label L22
B15=L17
B16=L22
B17=L15
B22=L16
br B23
label L23
B12=L14
B13=L23
B14=L12
B23=L13
fend
func floyd_marshall
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 78
t160 := local 2
t161 := 0
t162 := t160 =i t161
label L24
t163 := local 2
t164 := @i t163
t165 := global list_size
t166 := @i t165
t167 := t164 <i t166
bt t167 B24
br B25
label L25
t168 := local 2
t169 := 1
t170 := @i t168
t171 := t170 +i t169
t172 := t168 =i t171
br B26
label L26
bgnstmt 79
t173 := local 0
t174 := 0
t175 := t173 =i t174
label L27
t176 := local 0
t177 := @i t176
t178 := global list_size
t179 := @i t178
t180 := t177 <i t179
bt t180 B27
br B28
label L28
t181 := local 0
t182 := 1
t183 := @i t181
t184 := t183 +i t182
t185 := t181 =i t184
br B29
label L29
bgnstmt 80
t186 := local 1
t187 := 0
t188 := t186 =i t187
label L30
t189 := local 1
t190 := @i t189
t191 := global list_size
t192 := @i t191
t193 := t190 <i t192
bt t193 B30
br B31
label L31
t194 := local 1
t195 := 1
t196 := @i t194
t197 := t196 +i t195
t198 := t194 =i t197
br B32
label L32
bgnstmt 81
t199 := local 3
t200 := local 0
t201 := @i t200
t202 := local 1
t203 := @i t202
argi t201
argi t203
t204 := global c2d_to_1d
t205 := fi t204 2
t206 := t199 =i t205
bgnstmt 82
t207 := local 4
t208 := local 0
t209 := @i t208
t210 := local 2
t211 := @i t210
argi t209
argi t211
t212 := global c2d_to_1d
t213 := fi t212 2
t214 := t207 =i t213
bgnstmt 83
t215 := local 5
t216 := local 2
t217 := @i t216
t218 := local 1
t219 := @i t218
argi t217
argi t219
t220 := global c2d_to_1d
t221 := fi t220 2
t222 := t215 =i t221
bgnstmt 84
t223 := local 3
t224 := @i t223
t225 := global matrix
t226 := t225 []i t224
t227 := @i t226
t228 := local 4
t229 := @i t228
t230 := global matrix
t231 := t230 []i t229
t232 := @i t231
t233 := local 5
t234 := @i t233
t235 := global matrix
t236 := t235 []i t234
t237 := @i t236
t238 := t232 +i t237
t239 := t227 >i t238
bt t239 B33
br B34
label L33
bgnstmt 85
t240 := local 3
t241 := @i t240
t242 := global matrix
t243 := t242 []i t241
t244 := local 4
t245 := @i t244
t246 := global matrix
t247 := t246 []i t245
t248 := @i t247
t249 := local 5
t250 := @i t249
t251 := global matrix
t252 := t251 []i t250
t253 := @i t252
t254 := t248 +i t253
t255 := t243 =i t254
label L34
B33=L33
B34=L34
br B35
label L35
B30=L32
B31=L35
B32=L30
B35=L31
br B36
label L36
B27=L29
B28=L36
B29=L27
B36=L28
br B37
label L37
B24=L26
B25=L37
B26=L24
B37=L25
fend
func main
localloc 4
localloc 4
bgnstmt 95
t256 := global INFINITY
t257 := 99999
t258 := t256 =i t257
bgnstmt 96
t259 := global list_size
t260 := 12
t261 := t259 =i t260
bgnstmt 99
t262 := global matrix_w
t263 := global list_size
t264 := @i t263
t265 := t262 =i t264
bgnstmt 100
t266 := global matrix_h
t267 := global list_size
t268 := @i t267
t269 := t266 =i t268
bgnstmt 101
t270 := global matrix_init
t271 := fi t270 0
bgnstmt 104
t272 := global matrix_generate
t273 := fi t272 0
bgnstmt 105
t274 := global floyd_marshall
t275 := fi t274 0
bgnstmt 108
t276 := local 1
t277 := 0
t278 := t276 =i t277
label L38
t279 := local 1
t280 := @i t279
t281 := global list_size
t282 := @i t281
t283 := t280 <i t282
bt t283 B38
br B39
label L39
t284 := local 1
t285 := 1
t286 := @i t284
t287 := t286 +i t285
t288 := t284 =i t287
br B40
label L40
bgnstmt 109
t289 := local 0
t290 := 0
t291 := t289 =i t290
label L41
t292 := local 0
t293 := @i t292
t294 := global list_size
t295 := @i t294
t296 := t293 <i t295
bt t296 B41
br B42
label L42
t297 := local 0
t298 := 1
t299 := @i t297
t300 := t299 +i t298
t301 := t297 =i t300
br B43
label L43
bgnstmt 110
t302 := local 0
t303 := @i t302
t304 := local 1
t305 := @i t304
argi t303
argi t305
t306 := global c2d_to_1d
t307 := fi t306 2
t308 := global matrix
t309 := t308 []i t307
t310 := @i t309
t311 := global INFINITY
t312 := @i t311
t313 := t310 ==i t312
bt t313 B44
br B45
label L44
bgnstmt 111
t314 := "  INF "
argi t314
t315 := global printf
t316 := fi t315 1
br B46
label L45
bgnstmt 113
t317 := "%5d "
t318 := local 0
t319 := @i t318
t320 := local 1
t321 := @i t320
argi t319
argi t321
t322 := global c2d_to_1d
t323 := fi t322 2
t324 := global matrix
t325 := t324 []i t323
t326 := @i t325
argi t317
argi t326
t327 := global printf
t328 := fi t327 2
label L46
B44=L44
B45=L45
B46=L46
br B47
label L47
B41=L43
B42=L47
B43=L41
B47=L42
bgnstmt 115
t329 := "\n"
argi t329
t330 := global printf
t331 := fi t330 1
br B48
label L48
B38=L40
B39=L48
B40=L38
B48=L39
fend
