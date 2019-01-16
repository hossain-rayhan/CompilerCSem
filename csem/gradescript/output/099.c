alloc o 1152
alloc n 1152
alloc j_w 4
alloc j_h 4
func jacobi_generate
formal 4
formal 4
formal 4
formal 4
localloc 4
localloc 4
localloc 4
localloc 4
bgnstmt 34
t1 := local 2
t2 := 0
t3 := t1 =i t2
bgnstmt 37
t4 := local 1
t5 := param 1
t6 := @i t5
t7 := t4 =i t6
label L1
t8 := local 1
t9 := @i t8
t10 := param 1
t11 := @i t10
t12 := param 3
t13 := @i t12
t14 := t11 +i t13
t15 := t9 <i t14
bt t15 B1
br B2
label L2
t16 := local 1
t17 := 1
t18 := @i t16
t19 := t18 +i t17
t20 := t16 =i t19
br B3
label L3
bgnstmt 38
t21 := local 0
t22 := param 0
t23 := @i t22
t24 := t21 =i t23
label L4
t25 := local 0
t26 := @i t25
t27 := param 0
t28 := @i t27
t29 := param 2
t30 := @i t29
t31 := t28 +i t30
t32 := t26 <i t31
bt t32 B4
br B5
label L5
t33 := local 0
t34 := 1
t35 := @i t33
t36 := t35 +i t34
t37 := t33 =i t36
br B6
label L6
bgnstmt 39
t38 := local 3
t39 := global rand
t40 := fi t39 0
t41 := 100
t42 := t40 %i t41
t43 := t38 =i t42
bgnstmt 40
t44 := local 2
t45 := @i t44
t46 := global o
t47 := t46 []f t45
t48 := local 3
t49 := @i t48
t50 := cvf t49
t51 := t47 =f t50
bgnstmt 41
t52 := local 2
t53 := @i t52
t54 := global n
t55 := t54 []f t53
t56 := local 3
t57 := @i t56
t58 := cvf t57
t59 := t55 =f t58
bgnstmt 42
t60 := local 2
t61 := 1
t62 := @i t60
t63 := t62 +i t61
t64 := t60 =i t63
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
bgnstmt 52
t65 := local 0
t66 := 0
t67 := t65 =i t66
label L9
t68 := local 0
t69 := @i t68
t70 := global j_w
t71 := @i t70
t72 := t69 <i t71
bt t72 B9
br B10
label L10
t73 := local 0
t74 := 1
t75 := @i t73
t76 := t75 +i t74
t77 := t73 =i t76
br B11
label L11
bgnstmt 54
t78 := local 0
t79 := @i t78
t80 := global o
t81 := t80 []f t79
t82 := @f t81
t83 := 0
t84 := cvf t83
t85 := t82 ==f t84
bt t85 B12
br B13
label L12
t86 := local 0
t87 := @i t86
t88 := global n
t89 := t88 []f t87
t90 := @f t89
t91 := 0
t92 := cvf t91
t93 := t90 ==f t92
bt t93 B14
br B15
B12=L12
label L13
bgnstmt 55
br B16
label L14
B14=L13
B13=L14
B15=L14
bgnstmt 56
t94 := local 0
t95 := @i t94
t96 := global o
t97 := t96 []f t95
t98 := 0
t99 := cvf t98
t100 := t97 =f t99
bgnstmt 57
t101 := local 0
t102 := @i t101
t103 := global n
t104 := t103 []f t102
t105 := 0
t106 := cvf t105
t107 := t104 =f t106
br B17
label L15
B9=L11
B10=L15
B16=L10
B11=L9
B17=L10
bgnstmt 61
t108 := local 3
t109 := global j_w
t110 := @i t109
t111 := global j_w
t112 := @i t111
t113 := t110 *i t112
t114 := global j_w
t115 := @i t114
t116 := t113 -i t115
t117 := t108 =i t116
bgnstmt 62
t118 := local 0
t119 := local 3
t120 := @i t119
t121 := t118 =i t120
label L16
t122 := local 0
t123 := @i t122
t124 := local 3
t125 := @i t124
t126 := global j_w
t127 := @i t126
t128 := t125 +i t127
t129 := t123 <i t128
bt t129 B18
br B19
label L17
t130 := local 0
t131 := 1
t132 := @i t130
t133 := t132 +i t131
t134 := t130 =i t133
br B20
label L18
bgnstmt 64
t135 := local 2
t136 := @i t135
t137 := global o
t138 := t137 []f t136
t139 := @f t138
t140 := 0
t141 := cvf t140
t142 := t139 ==f t141
bt t142 B21
br B22
label L19
t143 := local 2
t144 := @i t143
t145 := global n
t146 := t145 []f t144
t147 := @f t146
t148 := 0
t149 := cvf t148
t150 := t147 ==f t149
bt t150 B23
br B24
B21=L19
label L20
bgnstmt 65
br B25
label L21
B23=L20
B22=L21
B24=L21
bgnstmt 66
t151 := local 0
t152 := @i t151
t153 := global o
t154 := t153 []f t152
t155 := 0
t156 := cvf t155
t157 := t154 =f t156
bgnstmt 67
t158 := local 0
t159 := @i t158
t160 := global n
t161 := t160 []f t159
t162 := 0
t163 := cvf t162
t164 := t161 =f t163
br B26
label L22
B18=L18
B19=L22
B25=L17
B20=L16
B26=L17
bgnstmt 71
t165 := local 3
t166 := global j_w
t167 := @i t166
t168 := global j_h
t169 := @i t168
t170 := t167 *i t169
t171 := t165 =i t170
bgnstmt 72
t172 := local 0
t173 := 0
t174 := t172 =i t173
label L23
t175 := local 0
t176 := @i t175
t177 := local 3
t178 := @i t177
t179 := t176 <i t178
bt t179 B27
br B28
label L24
t180 := local 0
t181 := global j_w
t182 := @i t181
t183 := @i t180
t184 := t183 +i t182
t185 := t180 =i t184
br B29
label L25
bgnstmt 74
t186 := local 2
t187 := @i t186
t188 := global o
t189 := t188 []f t187
t190 := @f t189
t191 := 0
t192 := cvf t191
t193 := t190 ==f t192
bt t193 B30
br B31
label L26
t194 := local 2
t195 := @i t194
t196 := global n
t197 := t196 []f t195
t198 := @f t197
t199 := 0
t200 := cvf t199
t201 := t198 ==f t200
bt t201 B32
br B33
B30=L26
label L27
bgnstmt 75
br B34
label L28
B32=L27
B31=L28
B33=L28
bgnstmt 76
t202 := local 0
t203 := @i t202
t204 := global o
t205 := t204 []f t203
t206 := 0
t207 := cvf t206
t208 := t205 =f t207
bgnstmt 77
t209 := local 0
t210 := @i t209
t211 := global n
t212 := t211 []f t210
t213 := 0
t214 := cvf t213
t215 := t212 =f t214
br B35
label L29
B27=L25
B28=L29
B34=L24
B29=L23
B35=L24
bgnstmt 81
t216 := local 3
t217 := global j_w
t218 := @i t217
t219 := global j_h
t220 := @i t219
t221 := t218 *i t220
t222 := t216 =i t221
bgnstmt 82
t223 := local 0
t224 := global j_w
t225 := @i t224
t226 := 1
t227 := t225 -i t226
t228 := t223 =i t227
label L30
t229 := local 0
t230 := @i t229
t231 := local 3
t232 := @i t231
t233 := t230 <i t232
bt t233 B36
br B37
label L31
t234 := local 0
t235 := global j_w
t236 := @i t235
t237 := @i t234
t238 := t237 +i t236
t239 := t234 =i t238
br B38
label L32
bgnstmt 84
t240 := local 2
t241 := @i t240
t242 := global o
t243 := t242 []f t241
t244 := @f t243
t245 := 0
t246 := cvf t245
t247 := t244 ==f t246
bt t247 B39
br B40
label L33
t248 := local 2
t249 := @i t248
t250 := global n
t251 := t250 []f t249
t252 := @f t251
t253 := 0
t254 := cvf t253
t255 := t252 ==f t254
bt t255 B41
br B42
B39=L33
label L34
bgnstmt 85
br B43
label L35
B41=L34
B40=L35
B42=L35
bgnstmt 86
t256 := local 0
t257 := @i t256
t258 := global o
t259 := t258 []f t257
t260 := 0
t261 := cvf t260
t262 := t259 =f t261
bgnstmt 87
t263 := local 0
t264 := @i t263
t265 := global n
t266 := t265 []f t264
t267 := 0
t268 := cvf t267
t269 := t266 =f t268
br B44
label L36
B36=L32
B37=L36
B43=L31
B38=L30
B44=L31
fend
func jacobi_compute
formal 4
formal 4
formal 4
formal 4
localloc 4
localloc 4
localloc 4
localloc 4
localloc 8
localloc 8
localloc 8
bgnstmt 95
t270 := local 2
t271 := 0
t272 := t270 =i t271
bgnstmt 96
t273 := local 6
t274 := 0
t275 := cvf t274
t276 := t273 =f t275
bgnstmt 99
t277 := local 4
t278 := 1
t279 := cvf t278
t280 := t277 =f t279
bgnstmt 100
t281 := local 4
t282 := 4
t283 := cvf t282
t284 := @f t281
t285 := t284 /f t283
t286 := t281 =f t285
bgnstmt 103
t287 := local 1
t288 := param 1
t289 := @i t288
t290 := t287 =i t289
label L37
t291 := local 1
t292 := @i t291
t293 := param 1
t294 := @i t293
t295 := param 3
t296 := @i t295
t297 := t294 +i t296
t298 := t292 <i t297
bt t298 B45
br B46
label L38
t299 := local 1
t300 := 1
t301 := @i t299
t302 := t301 +i t300
t303 := t299 =i t302
br B47
label L39
bgnstmt 104
t304 := local 0
t305 := param 0
t306 := @i t305
t307 := t304 =i t306
label L40
t308 := local 0
t309 := @i t308
t310 := param 0
t311 := @i t310
t312 := param 2
t313 := @i t312
t314 := t311 +i t313
t315 := t309 <i t314
bt t315 B48
br B49
label L41
t316 := local 0
t317 := 1
t318 := @i t316
t319 := t318 +i t317
t320 := t316 =i t319
br B50
label L42
bgnstmt 106
t321 := local 2
t322 := param 1
t323 := @i t322
t324 := global j_w
t325 := @i t324
t326 := t323 *i t325
t327 := param 0
t328 := @i t327
t329 := t326 +i t328
t330 := t321 =i t329
bgnstmt 109
t331 := local 2
t332 := @i t331
t333 := global n
t334 := t333 []f t332
t335 := local 4
t336 := @f t335
t337 := local 2
t338 := @i t337
t339 := global j_w
t340 := @i t339
t341 := t338 -i t340
t342 := global o
t343 := t342 []f t341
t344 := @f t343
t345 := local 2
t346 := @i t345
t347 := global j_w
t348 := @i t347
t349 := t346 +i t348
t350 := global o
t351 := t350 []f t349
t352 := @f t351
t353 := t344 +f t352
t354 := local 2
t355 := @i t354
t356 := 1
t357 := t355 -i t356
t358 := global o
t359 := t358 []f t357
t360 := @f t359
t361 := t353 +f t360
t362 := local 2
t363 := @i t362
t364 := 1
t365 := t363 +i t364
t366 := global o
t367 := t366 []f t365
t368 := @f t367
t369 := t361 +f t368
t370 := t336 *f t369
t371 := t334 =f t370
bgnstmt 114
t372 := local 5
t373 := local 2
t374 := @i t373
t375 := global n
t376 := t375 []f t374
t377 := @f t376
t378 := local 2
t379 := @i t378
t380 := global o
t381 := t380 []f t379
t382 := @f t381
t383 := t377 -f t382
t384 := t372 =f t383
bgnstmt 115
t385 := local 6
t386 := local 5
t387 := @f t386
t388 := local 5
t389 := @f t388
t390 := t387 *f t389
t391 := @f t385
t392 := t391 +f t390
t393 := t385 =f t392
br B51
label L43
B48=L42
B49=L43
B50=L40
B51=L41
br B52
label L44
B45=L39
B46=L44
B47=L37
B52=L38
bgnstmt 119
t394 := local 6
t395 := @f t394
retf t395
fend
func main
localloc 8
bgnstmt 126
t396 := global j_w
t397 := 10
t398 := t396 =i t397
bgnstmt 127
t399 := global j_h
t400 := global j_w
t401 := @i t400
t402 := t399 =i t401
bgnstmt 130
t403 := 0
t404 := 0
t405 := global j_w
t406 := @i t405
t407 := 2
t408 := t406 +i t407
t409 := global j_h
t410 := @i t409
t411 := 2
t412 := t410 +i t411
argi t403
argi t404
argi t408
argi t412
t413 := global jacobi_generate
t414 := fi t413 4
bgnstmt 131
t415 := local 0
t416 := 1
t417 := 1
t418 := global j_w
t419 := @i t418
t420 := global j_w
t421 := @i t420
argi t416
argi t417
argi t419
argi t421
t422 := global jacobi_compute
t423 := ff t422 4
t424 := t415 =f t423
fend
