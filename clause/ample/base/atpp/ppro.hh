/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
 *
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 *
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 *
 */

#ifndef CLAUSE_AMPLE_BASE_ATPP_PPRO_HH_
#define CLAUSE_AMPLE_BASE_ATPP_PPRO_HH_

#define ATPP_AXDX01(f,n,...) \
    f(0x##n##0,__VA_ARGS__)

/* 2^1 = 2 */
#define ATPP_AXDX02(f,n,...)\
    f(0x##n##0,__VA_ARGS__), f(0x##n##1,__VA_ARGS__)

/* 2^2 = 2 */
#define ATPP_AXDX04(f,n,...) \
        f(0x##n##0,__VA_ARGS__), f(0x##n##1,__VA_ARGS__) \
      , f(0x##n##2,__VA_ARGS__), f(0x##n##3,__VA_ARGS__)

/* 2^3 = 8 */
#define ATPP_AXDX08(f,n,...) \
        f(0x##n##0,__VA_ARGS__), f(0x##n##1,__VA_ARGS__) \
      , f(0x##n##2,__VA_ARGS__), f(0x##n##3,__VA_ARGS__) \
      , f(0x##n##4,__VA_ARGS__), f(0x##n##5,__VA_ARGS__) \
      , f(0x##n##6,__VA_ARGS__), f(0x##n##7,__VA_ARGS__)

/* 2^4 = 16 */
#define ATPP_AXDX10(f,n,...) \
        f(0x##n##0,__VA_ARGS__), f(0x##n##1,__VA_ARGS__) \
      , f(0x##n##2,__VA_ARGS__), f(0x##n##3,__VA_ARGS__) \
      , f(0x##n##4,__VA_ARGS__), f(0x##n##5,__VA_ARGS__) \
      , f(0x##n##6,__VA_ARGS__), f(0x##n##7,__VA_ARGS__) \
      , f(0x##n##8,__VA_ARGS__), f(0x##n##9,__VA_ARGS__) \
      , f(0x##n##A,__VA_ARGS__), f(0x##n##B,__VA_ARGS__) \
      , f(0x##n##C,__VA_ARGS__), f(0x##n##D,__VA_ARGS__) \
      , f(0x##n##E,__VA_ARGS__), f(0x##n##F,__VA_ARGS__)

/* 2^5 = 32 */
#define ATPP_AXDX20(f,n,...) \
        ATPP_AXDX10(f,n##0,__VA_ARGS__),ATPP_AXDX10(f,n##1,__VA_ARGS__)

/* 2^6 = 64 */
#define ATPP_AXDX40(f,n,...) \
        ATPP_AXDX10(f,n##0,__VA_ARGS__), ATPP_AXDX10(f,n##1,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##2,__VA_ARGS__), ATPP_AXDX10(f,n##3,__VA_ARGS__)

/* 2^7 = 128 */
#define ATPP_AXDX80(f,n,...) \
        ATPP_AXDX10(f,n##0,__VA_ARGS__), ATPP_AXDX10(f,n##1,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##2,__VA_ARGS__), ATPP_AXDX10(f,n##3,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##4,__VA_ARGS__), ATPP_AXDX10(f,n##5,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##6,__VA_ARGS__), ATPP_AXDX10(f,n##7,__VA_ARGS__)

/* 2^8 = 256 */
#define ATPP_AXDX100(f,n,...) \
        ATPP_AXDX10(f,n##0,__VA_ARGS__), ATPP_AXDX10(f,n##1,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##2,__VA_ARGS__), ATPP_AXDX10(f,n##3,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##4,__VA_ARGS__), ATPP_AXDX10(f,n##5,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##6,__VA_ARGS__), ATPP_AXDX10(f,n##7,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##8,__VA_ARGS__), ATPP_AXDX10(f,n##9,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##A,__VA_ARGS__), ATPP_AXDX10(f,n##B,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##C,__VA_ARGS__), ATPP_AXDX10(f,n##D,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##E,__VA_ARGS__), ATPP_AXDX10(f,n##F,__VA_ARGS__)

/* 2^9 = 512 */
#define ATPP_AXDX200(f,n,...) \
        ATPP_AXDX100(f,n##0,__VA_ARGS__), ATPP_AXDX100(f,n##1,__VA_ARGS__)

/* 2^10 = 1024 */
#define ATPP_AXDX400(f,n,...) \
        ATPP_AXDX100(f,n##0,__VA_ARGS__), ATPP_AXDX100(f,n##1,__VA_ARGS__) \
      , ATPP_AXDX100(f,n##2,__VA_ARGS__), ATPP_AXDX80(f,n##3,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##38,__VA_ARGS__), ATPP_AXDX10(f,n##39,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##3A,__VA_ARGS__), ATPP_AXDX10(f,n##3B,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##3C,__VA_ARGS__), ATPP_AXDX10(f,n##3D,__VA_ARGS__) \
      , ATPP_AXDX10(f,n##3E,__VA_ARGS__), ATPP_AXDX10(f,n##3F,__VA_ARGS__)

#define ATPP__ATPP_DPTH1 0,
#define ATPP__ATPP_DPTH2 1,
#define ATPP__ATPP_DPTH3 2,
#define ATPP__ATPP_DPTH4 3,
#define ATPP__ATPP_DPTH5 4,
#define ATPP__ATPP_DPTH6 5,
#define ATPP__ATPP_DPTH7 6,
#define ATPP__ATPP_DPTH8 7,
#define ATPP__ATPP_DPTH9 8,
#define ATPP__ATPP_DPTH10 9,
#define ATPP__ATPP_DPTH11 10,
#define ATPP__ATPP_DPTH12 11,
#define ATPP__ATPP_DPTH13 12,
#define ATPP__ATPP_DPTH14 13,
#define ATPP__ATPP_DPTH15 14,
#define ATPP__ATPP_DPTH16 15,
#define ATPP__ATPP_DPTH17 16,
#define ATPP__ATPP_DPTH18 17,
#define ATPP__ATPP_DPTH19 18,
#define ATPP__ATPP_DPTH20 19,
#define ATPP__ATPP_DPTH21 20,
#define ATPP__ATPP_DPTH22 21,
#define ATPP__ATPP_DPTH23 22,
#define ATPP__ATPP_DPTH24 23,
#define ATPP__ATPP_DPTH25 24,
#define ATPP__ATPP_DPTH26 25,
#define ATPP__ATPP_DPTH27 26,
#define ATPP__ATPP_DPTH28 27,
#define ATPP__ATPP_DPTH29 28,
#define ATPP__ATPP_DPTH30 29,
#define ATPP__ATPP_DPTH31 30,
#define ATPP__ATPP_DPTH32 31,
#define ATPP__ATPP_DPTH33 32,
#define ATPP__ATPP_DPTH34 33,
#define ATPP__ATPP_DPTH35 34,
#define ATPP__ATPP_DPTH36 35,
#define ATPP__ATPP_DPTH37 36,
#define ATPP__ATPP_DPTH38 37,
#define ATPP__ATPP_DPTH39 38,
#define ATPP__ATPP_DPTH40 39,
#define ATPP__ATPP_DPTH41 40,
#define ATPP__ATPP_DPTH42 41,
#define ATPP__ATPP_DPTH43 42,
#define ATPP__ATPP_DPTH44 43,
#define ATPP__ATPP_DPTH45 44,
#define ATPP__ATPP_DPTH46 45,
#define ATPP__ATPP_DPTH47 46,
#define ATPP__ATPP_DPTH48 47,
#define ATPP__ATPP_DPTH49 48,
#define ATPP__ATPP_DPTH50 49,
#define ATPP__ATPP_DPTH51 50,
#define ATPP__ATPP_DPTH52 51,
#define ATPP__ATPP_DPTH53 52,
#define ATPP__ATPP_DPTH54 53,
#define ATPP__ATPP_DPTH55 54,
#define ATPP__ATPP_DPTH56 55,
#define ATPP__ATPP_DPTH57 56,
#define ATPP__ATPP_DPTH58 57,
#define ATPP__ATPP_DPTH59 58,
#define ATPP__ATPP_DPTH60 59,
#define ATPP__ATPP_DPTH61 60,
#define ATPP__ATPP_DPTH62 61,
#define ATPP__ATPP_DPTH63 62,
#define ATPP__ATPP_DPTH64 63,
#define ATPP__ATPP_DPTH65 64,
#define ATPP__ATPP_DPTH66 65,
#define ATPP__ATPP_DPTH67 66,
#define ATPP__ATPP_DPTH68 67,
#define ATPP__ATPP_DPTH69 68,
#define ATPP__ATPP_DPTH70 69,
#define ATPP__ATPP_DPTH71 70,
#define ATPP__ATPP_DPTH72 71,
#define ATPP__ATPP_DPTH73 72,
#define ATPP__ATPP_DPTH74 73,
#define ATPP__ATPP_DPTH75 74,
#define ATPP__ATPP_DPTH76 75,
#define ATPP__ATPP_DPTH77 76,
#define ATPP__ATPP_DPTH78 77,
#define ATPP__ATPP_DPTH79 78,
#define ATPP__ATPP_DPTH80 79,
#define ATPP__ATPP_DPTH81 80,
#define ATPP__ATPP_DPTH82 81,
#define ATPP__ATPP_DPTH83 82,
#define ATPP__ATPP_DPTH84 83,
#define ATPP__ATPP_DPTH85 84,
#define ATPP__ATPP_DPTH86 85,
#define ATPP__ATPP_DPTH87 86,
#define ATPP__ATPP_DPTH88 87,
#define ATPP__ATPP_DPTH89 88,
#define ATPP__ATPP_DPTH90 89,
#define ATPP__ATPP_DPTH91 90,
#define ATPP__ATPP_DPTH92 91,
#define ATPP__ATPP_DPTH93 92,
#define ATPP__ATPP_DPTH94 93,
#define ATPP__ATPP_DPTH95 94,
#define ATPP__ATPP_DPTH96 95,
#define ATPP__ATPP_DPTH97 96,
#define ATPP__ATPP_DPTH98 97,
#define ATPP__ATPP_DPTH99 98,
#define ATPP__ATPP_DPTH100 99,
#define ATPP__ATPP_DPTH101 100,
#define ATPP__ATPP_DPTH102 101,
#define ATPP__ATPP_DPTH103 102,
#define ATPP__ATPP_DPTH104 103,
#define ATPP__ATPP_DPTH105 104,
#define ATPP__ATPP_DPTH106 105,
#define ATPP__ATPP_DPTH107 106,
#define ATPP__ATPP_DPTH108 107,
#define ATPP__ATPP_DPTH109 108,
#define ATPP__ATPP_DPTH110 109,
#define ATPP__ATPP_DPTH111 110,
#define ATPP__ATPP_DPTH112 111,
#define ATPP__ATPP_DPTH113 112,
#define ATPP__ATPP_DPTH114 113,
#define ATPP__ATPP_DPTH115 114,
#define ATPP__ATPP_DPTH116 115,
#define ATPP__ATPP_DPTH117 116,
#define ATPP__ATPP_DPTH118 117,
#define ATPP__ATPP_DPTH119 118,
#define ATPP__ATPP_DPTH120 119,
#define ATPP__ATPP_DPTH121 120,
#define ATPP__ATPP_DPTH122 121,
#define ATPP__ATPP_DPTH123 122,
#define ATPP__ATPP_DPTH124 123,
#define ATPP__ATPP_DPTH125 124,
#define ATPP__ATPP_DPTH126 125,
#define ATPP__ATPP_DPTH127 126,
#define ATPP__ATPP_DPTH128 127,
#define ATPP__ATPP_DPTH129 128,
#define ATPP__ATPP_DPTH130 129,
#define ATPP__ATPP_DPTH131 130,
#define ATPP__ATPP_DPTH132 131,
#define ATPP__ATPP_DPTH133 132,
#define ATPP__ATPP_DPTH134 133,
#define ATPP__ATPP_DPTH135 134,
#define ATPP__ATPP_DPTH136 135,
#define ATPP__ATPP_DPTH137 136,
#define ATPP__ATPP_DPTH138 137,
#define ATPP__ATPP_DPTH139 138,
#define ATPP__ATPP_DPTH140 139,
#define ATPP__ATPP_DPTH141 140,
#define ATPP__ATPP_DPTH142 141,
#define ATPP__ATPP_DPTH143 142,
#define ATPP__ATPP_DPTH144 143,
#define ATPP__ATPP_DPTH145 144,
#define ATPP__ATPP_DPTH146 145,
#define ATPP__ATPP_DPTH147 146,
#define ATPP__ATPP_DPTH148 147,
#define ATPP__ATPP_DPTH149 148,
#define ATPP__ATPP_DPTH150 149,
#define ATPP__ATPP_DPTH151 150,
#define ATPP__ATPP_DPTH152 151,
#define ATPP__ATPP_DPTH153 152,
#define ATPP__ATPP_DPTH154 153,
#define ATPP__ATPP_DPTH155 154,
#define ATPP__ATPP_DPTH156 155,
#define ATPP__ATPP_DPTH157 156,
#define ATPP__ATPP_DPTH158 157,
#define ATPP__ATPP_DPTH159 158,
#define ATPP__ATPP_DPTH160 159,
#define ATPP__ATPP_DPTH161 160,
#define ATPP__ATPP_DPTH162 161,
#define ATPP__ATPP_DPTH163 162,
#define ATPP__ATPP_DPTH164 163,
#define ATPP__ATPP_DPTH165 164,
#define ATPP__ATPP_DPTH166 165,
#define ATPP__ATPP_DPTH167 166,
#define ATPP__ATPP_DPTH168 167,
#define ATPP__ATPP_DPTH169 168,
#define ATPP__ATPP_DPTH170 169,
#define ATPP__ATPP_DPTH171 170,
#define ATPP__ATPP_DPTH172 171,
#define ATPP__ATPP_DPTH173 172,
#define ATPP__ATPP_DPTH174 173,
#define ATPP__ATPP_DPTH175 174,
#define ATPP__ATPP_DPTH176 175,
#define ATPP__ATPP_DPTH177 176,
#define ATPP__ATPP_DPTH178 177,
#define ATPP__ATPP_DPTH179 178,
#define ATPP__ATPP_DPTH180 179,
#define ATPP__ATPP_DPTH181 180,
#define ATPP__ATPP_DPTH182 181,
#define ATPP__ATPP_DPTH183 182,
#define ATPP__ATPP_DPTH184 183,
#define ATPP__ATPP_DPTH185 184,
#define ATPP__ATPP_DPTH186 185,
#define ATPP__ATPP_DPTH187 186,
#define ATPP__ATPP_DPTH188 187,
#define ATPP__ATPP_DPTH189 188,
#define ATPP__ATPP_DPTH190 189,
#define ATPP__ATPP_DPTH191 190,
#define ATPP__ATPP_DPTH192 191,
#define ATPP__ATPP_DPTH193 192,
#define ATPP__ATPP_DPTH194 193,
#define ATPP__ATPP_DPTH195 194,
#define ATPP__ATPP_DPTH196 195,
#define ATPP__ATPP_DPTH197 196,
#define ATPP__ATPP_DPTH198 197,
#define ATPP__ATPP_DPTH199 198,
#define ATPP__ATPP_DPTH200 199,
#define ATPP__ATPP_DPTH201 200,
#define ATPP__ATPP_DPTH202 201,
#define ATPP__ATPP_DPTH203 202,
#define ATPP__ATPP_DPTH204 203,
#define ATPP__ATPP_DPTH205 204,
#define ATPP__ATPP_DPTH206 205,
#define ATPP__ATPP_DPTH207 206,
#define ATPP__ATPP_DPTH208 207,
#define ATPP__ATPP_DPTH209 208,
#define ATPP__ATPP_DPTH210 209,
#define ATPP__ATPP_DPTH211 210,
#define ATPP__ATPP_DPTH212 211,
#define ATPP__ATPP_DPTH213 212,
#define ATPP__ATPP_DPTH214 213,
#define ATPP__ATPP_DPTH215 214,
#define ATPP__ATPP_DPTH216 215,
#define ATPP__ATPP_DPTH217 216,
#define ATPP__ATPP_DPTH218 217,
#define ATPP__ATPP_DPTH219 218,
#define ATPP__ATPP_DPTH220 219,
#define ATPP__ATPP_DPTH221 220,
#define ATPP__ATPP_DPTH222 221,
#define ATPP__ATPP_DPTH223 222,
#define ATPP__ATPP_DPTH224 223,
#define ATPP__ATPP_DPTH225 224,
#define ATPP__ATPP_DPTH226 225,
#define ATPP__ATPP_DPTH227 226,
#define ATPP__ATPP_DPTH228 227,
#define ATPP__ATPP_DPTH229 228,
#define ATPP__ATPP_DPTH230 229,
#define ATPP__ATPP_DPTH231 230,
#define ATPP__ATPP_DPTH232 231,
#define ATPP__ATPP_DPTH233 232,
#define ATPP__ATPP_DPTH234 233,
#define ATPP__ATPP_DPTH235 234,
#define ATPP__ATPP_DPTH236 235,
#define ATPP__ATPP_DPTH237 236,
#define ATPP__ATPP_DPTH238 237,
#define ATPP__ATPP_DPTH239 238,
#define ATPP__ATPP_DPTH240 239,
#define ATPP__ATPP_DPTH241 240,
#define ATPP__ATPP_DPTH242 241,
#define ATPP__ATPP_DPTH243 242,
#define ATPP__ATPP_DPTH244 243,
#define ATPP__ATPP_DPTH245 244,
#define ATPP__ATPP_DPTH246 245,
#define ATPP__ATPP_DPTH247 246,
#define ATPP__ATPP_DPTH248 247,
#define ATPP__ATPP_DPTH249 248,
#define ATPP__ATPP_DPTH250 249,
#define ATPP__ATPP_DPTH251 250,
#define ATPP__ATPP_DPTH252 251,
#define ATPP__ATPP_DPTH253 252,
#define ATPP__ATPP_DPTH254 253,
#define ATPP__ATPP_DPTH255 254,
#define ATPP__ATPP_DPTH256 255,

#define ATPP_DPTH1(...) ATPP_DPTH2 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH2(...) ATPP_DPTH3 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH3(...) ATPP_DPTH4 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH4(...) ATPP_DPTH5 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH5(...) ATPP_DPTH6 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH6(...) ATPP_DPTH7 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH7(...) ATPP_DPTH8 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH8(...) ATPP_DPTH9 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH9(...) ATPP_DPTH10 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH10(...) ATPP_DPTH11 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH11(...) ATPP_DPTH12 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH12(...) ATPP_DPTH13 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH13(...) ATPP_DPTH14 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH14(...) ATPP_DPTH15 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH15(...) ATPP_DPTH16 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH16(...) ATPP_DPTH17 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH17(...) ATPP_DPTH18 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH18(...) ATPP_DPTH19 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH19(...) ATPP_DPTH20 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH20(...) ATPP_DPTH21 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH21(...) ATPP_DPTH22 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH22(...) ATPP_DPTH23 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH23(...) ATPP_DPTH24 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH24(...) ATPP_DPTH25 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH25(...) ATPP_DPTH26 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH26(...) ATPP_DPTH27 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH27(...) ATPP_DPTH28 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH28(...) ATPP_DPTH29 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH29(...) ATPP_DPTH30 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH30(...) ATPP_DPTH31 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH31(...) ATPP_DPTH32 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH32(...) ATPP_DPTH33 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH33(...) ATPP_DPTH34 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH34(...) ATPP_DPTH35 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH35(...) ATPP_DPTH36 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH36(...) ATPP_DPTH37 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH37(...) ATPP_DPTH38 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH38(...) ATPP_DPTH39 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH39(...) ATPP_DPTH40 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH40(...) ATPP_DPTH41 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH41(...) ATPP_DPTH42 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH42(...) ATPP_DPTH43 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH43(...) ATPP_DPTH44 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH44(...) ATPP_DPTH45 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH45(...) ATPP_DPTH46 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH46(...) ATPP_DPTH47 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH47(...) ATPP_DPTH48 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH48(...) ATPP_DPTH49 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH49(...) ATPP_DPTH50 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH50(...) ATPP_DPTH51 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH51(...) ATPP_DPTH52 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH52(...) ATPP_DPTH53 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH53(...) ATPP_DPTH54 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH54(...) ATPP_DPTH55 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH55(...) ATPP_DPTH56 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH56(...) ATPP_DPTH57 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH57(...) ATPP_DPTH58 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH58(...) ATPP_DPTH59 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH59(...) ATPP_DPTH60 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH60(...) ATPP_DPTH61 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH61(...) ATPP_DPTH62 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH62(...) ATPP_DPTH63 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH63(...) ATPP_DPTH64 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH64(...) ATPP_DPTH65 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH65(...) ATPP_DPTH66 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH66(...) ATPP_DPTH67 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH67(...) ATPP_DPTH68 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH68(...) ATPP_DPTH69 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH69(...) ATPP_DPTH70 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH70(...) ATPP_DPTH71 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH71(...) ATPP_DPTH72 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH72(...) ATPP_DPTH73 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH73(...) ATPP_DPTH74 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH74(...) ATPP_DPTH75 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH75(...) ATPP_DPTH76 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH76(...) ATPP_DPTH77 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH77(...) ATPP_DPTH78 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH78(...) ATPP_DPTH79 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH79(...) ATPP_DPTH80 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH80(...) ATPP_DPTH81 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH81(...) ATPP_DPTH82 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH82(...) ATPP_DPTH83 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH83(...) ATPP_DPTH84 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH84(...) ATPP_DPTH85 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH85(...) ATPP_DPTH86 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH86(...) ATPP_DPTH87 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH87(...) ATPP_DPTH88 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH88(...) ATPP_DPTH89 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH89(...) ATPP_DPTH90 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH90(...) ATPP_DPTH91 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH91(...) ATPP_DPTH92 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH92(...) ATPP_DPTH93 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH93(...) ATPP_DPTH94 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH94(...) ATPP_DPTH95 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH95(...) ATPP_DPTH96 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH96(...) ATPP_DPTH97 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH97(...) ATPP_DPTH98 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH98(...) ATPP_DPTH99 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH99(...) ATPP_DPTH100 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH100(...) ATPP_DPTH101 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH101(...) ATPP_DPTH102 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH102(...) ATPP_DPTH103 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH103(...) ATPP_DPTH104 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH104(...) ATPP_DPTH105 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH105(...) ATPP_DPTH106 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH106(...) ATPP_DPTH107 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH107(...) ATPP_DPTH108 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH108(...) ATPP_DPTH109 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH109(...) ATPP_DPTH110 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH110(...) ATPP_DPTH111 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH111(...) ATPP_DPTH112 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH112(...) ATPP_DPTH113 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH113(...) ATPP_DPTH114 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH114(...) ATPP_DPTH115 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH115(...) ATPP_DPTH116 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH116(...) ATPP_DPTH117 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH117(...) ATPP_DPTH118 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH118(...) ATPP_DPTH119 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH119(...) ATPP_DPTH120 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH120(...) ATPP_DPTH121 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH121(...) ATPP_DPTH122 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH122(...) ATPP_DPTH123 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH123(...) ATPP_DPTH124 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH124(...) ATPP_DPTH125 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH125(...) ATPP_DPTH126 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH126(...) ATPP_DPTH127 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH127(...) ATPP_DPTH128 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH128(...) ATPP_DPTH129 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH129(...) ATPP_DPTH130 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH130(...) ATPP_DPTH131 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH131(...) ATPP_DPTH132 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH132(...) ATPP_DPTH133 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH133(...) ATPP_DPTH134 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH134(...) ATPP_DPTH135 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH135(...) ATPP_DPTH136 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH136(...) ATPP_DPTH137 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH137(...) ATPP_DPTH138 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH138(...) ATPP_DPTH139 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH139(...) ATPP_DPTH140 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH140(...) ATPP_DPTH141 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH141(...) ATPP_DPTH142 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH142(...) ATPP_DPTH143 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH143(...) ATPP_DPTH144 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH144(...) ATPP_DPTH145 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH145(...) ATPP_DPTH146 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH146(...) ATPP_DPTH147 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH147(...) ATPP_DPTH148 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH148(...) ATPP_DPTH149 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH149(...) ATPP_DPTH150 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH150(...) ATPP_DPTH151 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH151(...) ATPP_DPTH152 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH152(...) ATPP_DPTH153 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH153(...) ATPP_DPTH154 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH154(...) ATPP_DPTH155 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH155(...) ATPP_DPTH156 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH156(...) ATPP_DPTH157 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH157(...) ATPP_DPTH158 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH158(...) ATPP_DPTH159 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH159(...) ATPP_DPTH160 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH160(...) ATPP_DPTH161 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH161(...) ATPP_DPTH162 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH162(...) ATPP_DPTH163 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH163(...) ATPP_DPTH164 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH164(...) ATPP_DPTH165 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH165(...) ATPP_DPTH166 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH166(...) ATPP_DPTH167 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH167(...) ATPP_DPTH168 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH168(...) ATPP_DPTH169 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH169(...) ATPP_DPTH170 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH170(...) ATPP_DPTH171 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH171(...) ATPP_DPTH172 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH172(...) ATPP_DPTH173 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH173(...) ATPP_DPTH174 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH174(...) ATPP_DPTH175 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH175(...) ATPP_DPTH176 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH176(...) ATPP_DPTH177 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH177(...) ATPP_DPTH178 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH178(...) ATPP_DPTH179 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH179(...) ATPP_DPTH180 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH180(...) ATPP_DPTH181 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH181(...) ATPP_DPTH182 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH182(...) ATPP_DPTH183 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH183(...) ATPP_DPTH184 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH184(...) ATPP_DPTH185 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH185(...) ATPP_DPTH186 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH186(...) ATPP_DPTH187 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH187(...) ATPP_DPTH188 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH188(...) ATPP_DPTH189 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH189(...) ATPP_DPTH190 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH190(...) ATPP_DPTH191 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH191(...) ATPP_DPTH192 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH192(...) ATPP_DPTH193 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH193(...) ATPP_DPTH194 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH194(...) ATPP_DPTH195 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH195(...) ATPP_DPTH196 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH196(...) ATPP_DPTH197 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH197(...) ATPP_DPTH198 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH198(...) ATPP_DPTH199 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH199(...) ATPP_DPTH200 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH200(...) ATPP_DPTH201 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH201(...) ATPP_DPTH202 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH202(...) ATPP_DPTH203 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH203(...) ATPP_DPTH204 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH204(...) ATPP_DPTH205 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH205(...) ATPP_DPTH206 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH206(...) ATPP_DPTH207 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH207(...) ATPP_DPTH208 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH208(...) ATPP_DPTH209 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH209(...) ATPP_DPTH210 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH210(...) ATPP_DPTH211 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH211(...) ATPP_DPTH212 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH212(...) ATPP_DPTH213 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH213(...) ATPP_DPTH214 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH214(...) ATPP_DPTH215 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH215(...) ATPP_DPTH216 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH216(...) ATPP_DPTH217 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH217(...) ATPP_DPTH218 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH218(...) ATPP_DPTH219 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH219(...) ATPP_DPTH220 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH220(...) ATPP_DPTH221 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH221(...) ATPP_DPTH222 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH222(...) ATPP_DPTH223 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH223(...) ATPP_DPTH224 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH224(...) ATPP_DPTH225 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH225(...) ATPP_DPTH226 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH226(...) ATPP_DPTH227 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH227(...) ATPP_DPTH228 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH228(...) ATPP_DPTH229 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH229(...) ATPP_DPTH230 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH230(...) ATPP_DPTH231 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH231(...) ATPP_DPTH232 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH232(...) ATPP_DPTH233 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH233(...) ATPP_DPTH234 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH234(...) ATPP_DPTH235 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH235(...) ATPP_DPTH236 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH236(...) ATPP_DPTH237 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH237(...) ATPP_DPTH238 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH238(...) ATPP_DPTH239 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH239(...) ATPP_DPTH240 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH240(...) ATPP_DPTH241 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH241(...) ATPP_DPTH242 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH242(...) ATPP_DPTH243 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH243(...) ATPP_DPTH244 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH244(...) ATPP_DPTH245 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH245(...) ATPP_DPTH246 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH246(...) ATPP_DPTH247 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH247(...) ATPP_DPTH248 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH248(...) ATPP_DPTH249 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH249(...) ATPP_DPTH250 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH250(...) ATPP_DPTH251 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH251(...) ATPP_DPTH252 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH252(...) ATPP_DPTH253 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH253(...) ATPP_DPTH254 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH254(...) ATPP_DPTH255 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH255(...) ATPP_DPTH256 __VA_ARGS__,( __VA_ARGS__ )
#define ATPP_DPTH256(...) ATPP_DPTH257 __VA_ARGS__,( __VA_ARGS__ )

#define ATPP___(...) clause::ample::atpp<__VA_ARGS__>

#define ATPP_PAR0(...) ATPP___(__VA_ARGS__)
#define ATPP_PAR1(...) (ATPP_PAR0 __VA_ARGS__)
#define ATPP_PAR2(...) (ATPP_PAR1 __VA_ARGS__)
#define ATPP_PAR3(...) (ATPP_PAR2 __VA_ARGS__)
#define ATPP_PAR4(...) (ATPP_PAR3 __VA_ARGS__)
#define ATPP_PAR5(...) (ATPP_PAR4 __VA_ARGS__)
#define ATPP_PAR6(...) (ATPP_PAR5 __VA_ARGS__)
#define ATPP_PAR7(...) (ATPP_PAR6 __VA_ARGS__)
#define ATPP_PAR8(...) (ATPP_PAR7 __VA_ARGS__)
#define ATPP_PAR9(...) (ATPP_PAR8 __VA_ARGS__)
#define ATPP_PAR10(...) (ATPP_PAR9 __VA_ARGS__)
#define ATPP_PAR11(...) (ATPP_PAR10 __VA_ARGS__)
#define ATPP_PAR12(...) (ATPP_PAR11 __VA_ARGS__)
#define ATPP_PAR13(...) (ATPP_PAR12 __VA_ARGS__)
#define ATPP_PAR14(...) (ATPP_PAR13 __VA_ARGS__)
#define ATPP_PAR15(...) (ATPP_PAR14 __VA_ARGS__)
#define ATPP_PAR16(...) (ATPP_PAR15 __VA_ARGS__)
#define ATPP_PAR17(...) (ATPP_PAR16 __VA_ARGS__)
#define ATPP_PAR18(...) (ATPP_PAR17 __VA_ARGS__)
#define ATPP_PAR19(...) (ATPP_PAR18 __VA_ARGS__)
#define ATPP_PAR20(...) (ATPP_PAR19 __VA_ARGS__)
#define ATPP_PAR21(...) (ATPP_PAR20 __VA_ARGS__)
#define ATPP_PAR22(...) (ATPP_PAR21 __VA_ARGS__)
#define ATPP_PAR23(...) (ATPP_PAR22 __VA_ARGS__)
#define ATPP_PAR24(...) (ATPP_PAR23 __VA_ARGS__)
#define ATPP_PAR25(...) (ATPP_PAR24 __VA_ARGS__)
#define ATPP_PAR26(...) (ATPP_PAR25 __VA_ARGS__)
#define ATPP_PAR27(...) (ATPP_PAR26 __VA_ARGS__)
#define ATPP_PAR28(...) (ATPP_PAR27 __VA_ARGS__)
#define ATPP_PAR29(...) (ATPP_PAR28 __VA_ARGS__)
#define ATPP_PAR30(...) (ATPP_PAR29 __VA_ARGS__)
#define ATPP_PAR31(...) (ATPP_PAR30 __VA_ARGS__)
#define ATPP_PAR32(...) (ATPP_PAR31 __VA_ARGS__)
#define ATPP_PAR33(...) (ATPP_PAR32 __VA_ARGS__)
#define ATPP_PAR34(...) (ATPP_PAR33 __VA_ARGS__)
#define ATPP_PAR35(...) (ATPP_PAR34 __VA_ARGS__)
#define ATPP_PAR36(...) (ATPP_PAR35 __VA_ARGS__)
#define ATPP_PAR37(...) (ATPP_PAR36 __VA_ARGS__)
#define ATPP_PAR38(...) (ATPP_PAR37 __VA_ARGS__)
#define ATPP_PAR39(...) (ATPP_PAR38 __VA_ARGS__)
#define ATPP_PAR40(...) (ATPP_PAR39 __VA_ARGS__)
#define ATPP_PAR41(...) (ATPP_PAR40 __VA_ARGS__)
#define ATPP_PAR42(...) (ATPP_PAR41 __VA_ARGS__)
#define ATPP_PAR43(...) (ATPP_PAR42 __VA_ARGS__)
#define ATPP_PAR44(...) (ATPP_PAR43 __VA_ARGS__)
#define ATPP_PAR45(...) (ATPP_PAR44 __VA_ARGS__)
#define ATPP_PAR46(...) (ATPP_PAR45 __VA_ARGS__)
#define ATPP_PAR47(...) (ATPP_PAR46 __VA_ARGS__)
#define ATPP_PAR48(...) (ATPP_PAR47 __VA_ARGS__)
#define ATPP_PAR49(...) (ATPP_PAR48 __VA_ARGS__)
#define ATPP_PAR50(...) (ATPP_PAR49 __VA_ARGS__)
#define ATPP_PAR51(...) (ATPP_PAR50 __VA_ARGS__)
#define ATPP_PAR52(...) (ATPP_PAR51 __VA_ARGS__)
#define ATPP_PAR53(...) (ATPP_PAR52 __VA_ARGS__)
#define ATPP_PAR54(...) (ATPP_PAR53 __VA_ARGS__)
#define ATPP_PAR55(...) (ATPP_PAR54 __VA_ARGS__)
#define ATPP_PAR56(...) (ATPP_PAR55 __VA_ARGS__)
#define ATPP_PAR57(...) (ATPP_PAR56 __VA_ARGS__)
#define ATPP_PAR58(...) (ATPP_PAR57 __VA_ARGS__)
#define ATPP_PAR59(...) (ATPP_PAR58 __VA_ARGS__)
#define ATPP_PAR60(...) (ATPP_PAR59 __VA_ARGS__)
#define ATPP_PAR61(...) (ATPP_PAR60 __VA_ARGS__)
#define ATPP_PAR62(...) (ATPP_PAR61 __VA_ARGS__)
#define ATPP_PAR63(...) (ATPP_PAR62 __VA_ARGS__)
#define ATPP_PAR64(...) (ATPP_PAR63 __VA_ARGS__)
#define ATPP_PAR65(...) (ATPP_PAR64 __VA_ARGS__)
#define ATPP_PAR66(...) (ATPP_PAR65 __VA_ARGS__)
#define ATPP_PAR67(...) (ATPP_PAR66 __VA_ARGS__)
#define ATPP_PAR68(...) (ATPP_PAR67 __VA_ARGS__)
#define ATPP_PAR69(...) (ATPP_PAR68 __VA_ARGS__)
#define ATPP_PAR70(...) (ATPP_PAR69 __VA_ARGS__)
#define ATPP_PAR71(...) (ATPP_PAR70 __VA_ARGS__)
#define ATPP_PAR72(...) (ATPP_PAR71 __VA_ARGS__)
#define ATPP_PAR73(...) (ATPP_PAR72 __VA_ARGS__)
#define ATPP_PAR74(...) (ATPP_PAR73 __VA_ARGS__)
#define ATPP_PAR75(...) (ATPP_PAR74 __VA_ARGS__)
#define ATPP_PAR76(...) (ATPP_PAR75 __VA_ARGS__)
#define ATPP_PAR77(...) (ATPP_PAR76 __VA_ARGS__)
#define ATPP_PAR78(...) (ATPP_PAR77 __VA_ARGS__)
#define ATPP_PAR79(...) (ATPP_PAR78 __VA_ARGS__)
#define ATPP_PAR80(...) (ATPP_PAR79 __VA_ARGS__)
#define ATPP_PAR81(...) (ATPP_PAR80 __VA_ARGS__)
#define ATPP_PAR82(...) (ATPP_PAR81 __VA_ARGS__)
#define ATPP_PAR83(...) (ATPP_PAR82 __VA_ARGS__)
#define ATPP_PAR84(...) (ATPP_PAR83 __VA_ARGS__)
#define ATPP_PAR85(...) (ATPP_PAR84 __VA_ARGS__)
#define ATPP_PAR86(...) (ATPP_PAR85 __VA_ARGS__)
#define ATPP_PAR87(...) (ATPP_PAR86 __VA_ARGS__)
#define ATPP_PAR88(...) (ATPP_PAR87 __VA_ARGS__)
#define ATPP_PAR89(...) (ATPP_PAR88 __VA_ARGS__)
#define ATPP_PAR90(...) (ATPP_PAR89 __VA_ARGS__)
#define ATPP_PAR91(...) (ATPP_PAR90 __VA_ARGS__)
#define ATPP_PAR92(...) (ATPP_PAR91 __VA_ARGS__)
#define ATPP_PAR93(...) (ATPP_PAR92 __VA_ARGS__)
#define ATPP_PAR94(...) (ATPP_PAR93 __VA_ARGS__)
#define ATPP_PAR95(...) (ATPP_PAR94 __VA_ARGS__)
#define ATPP_PAR96(...) (ATPP_PAR95 __VA_ARGS__)
#define ATPP_PAR97(...) (ATPP_PAR96 __VA_ARGS__)
#define ATPP_PAR98(...) (ATPP_PAR97 __VA_ARGS__)
#define ATPP_PAR99(...) (ATPP_PAR98 __VA_ARGS__)
#define ATPP_PAR100(...) (ATPP_PAR99 __VA_ARGS__)
#define ATPP_PAR101(...) (ATPP_PAR100 __VA_ARGS__)
#define ATPP_PAR102(...) (ATPP_PAR101 __VA_ARGS__)
#define ATPP_PAR103(...) (ATPP_PAR102 __VA_ARGS__)
#define ATPP_PAR104(...) (ATPP_PAR103 __VA_ARGS__)
#define ATPP_PAR105(...) (ATPP_PAR104 __VA_ARGS__)
#define ATPP_PAR106(...) (ATPP_PAR105 __VA_ARGS__)
#define ATPP_PAR107(...) (ATPP_PAR106 __VA_ARGS__)
#define ATPP_PAR108(...) (ATPP_PAR107 __VA_ARGS__)
#define ATPP_PAR109(...) (ATPP_PAR108 __VA_ARGS__)
#define ATPP_PAR110(...) (ATPP_PAR109 __VA_ARGS__)
#define ATPP_PAR111(...) (ATPP_PAR110 __VA_ARGS__)
#define ATPP_PAR112(...) (ATPP_PAR111 __VA_ARGS__)
#define ATPP_PAR113(...) (ATPP_PAR112 __VA_ARGS__)
#define ATPP_PAR114(...) (ATPP_PAR113 __VA_ARGS__)
#define ATPP_PAR115(...) (ATPP_PAR114 __VA_ARGS__)
#define ATPP_PAR116(...) (ATPP_PAR115 __VA_ARGS__)
#define ATPP_PAR117(...) (ATPP_PAR116 __VA_ARGS__)
#define ATPP_PAR118(...) (ATPP_PAR117 __VA_ARGS__)
#define ATPP_PAR119(...) (ATPP_PAR118 __VA_ARGS__)
#define ATPP_PAR120(...) (ATPP_PAR119 __VA_ARGS__)
#define ATPP_PAR121(...) (ATPP_PAR120 __VA_ARGS__)
#define ATPP_PAR122(...) (ATPP_PAR121 __VA_ARGS__)
#define ATPP_PAR123(...) (ATPP_PAR122 __VA_ARGS__)
#define ATPP_PAR124(...) (ATPP_PAR123 __VA_ARGS__)
#define ATPP_PAR125(...) (ATPP_PAR124 __VA_ARGS__)
#define ATPP_PAR126(...) (ATPP_PAR125 __VA_ARGS__)
#define ATPP_PAR127(...) (ATPP_PAR126 __VA_ARGS__)
#define ATPP_PAR128(...) (ATPP_PAR127 __VA_ARGS__)
#define ATPP_PAR129(...) (ATPP_PAR128 __VA_ARGS__)
#define ATPP_PAR130(...) (ATPP_PAR129 __VA_ARGS__)
#define ATPP_PAR131(...) (ATPP_PAR130 __VA_ARGS__)
#define ATPP_PAR132(...) (ATPP_PAR131 __VA_ARGS__)
#define ATPP_PAR133(...) (ATPP_PAR132 __VA_ARGS__)
#define ATPP_PAR134(...) (ATPP_PAR133 __VA_ARGS__)
#define ATPP_PAR135(...) (ATPP_PAR134 __VA_ARGS__)
#define ATPP_PAR136(...) (ATPP_PAR135 __VA_ARGS__)
#define ATPP_PAR137(...) (ATPP_PAR136 __VA_ARGS__)
#define ATPP_PAR138(...) (ATPP_PAR137 __VA_ARGS__)
#define ATPP_PAR139(...) (ATPP_PAR138 __VA_ARGS__)
#define ATPP_PAR140(...) (ATPP_PAR139 __VA_ARGS__)
#define ATPP_PAR141(...) (ATPP_PAR140 __VA_ARGS__)
#define ATPP_PAR142(...) (ATPP_PAR141 __VA_ARGS__)
#define ATPP_PAR143(...) (ATPP_PAR142 __VA_ARGS__)
#define ATPP_PAR144(...) (ATPP_PAR143 __VA_ARGS__)
#define ATPP_PAR145(...) (ATPP_PAR144 __VA_ARGS__)
#define ATPP_PAR146(...) (ATPP_PAR145 __VA_ARGS__)
#define ATPP_PAR147(...) (ATPP_PAR146 __VA_ARGS__)
#define ATPP_PAR148(...) (ATPP_PAR147 __VA_ARGS__)
#define ATPP_PAR149(...) (ATPP_PAR148 __VA_ARGS__)
#define ATPP_PAR150(...) (ATPP_PAR149 __VA_ARGS__)
#define ATPP_PAR151(...) (ATPP_PAR150 __VA_ARGS__)
#define ATPP_PAR152(...) (ATPP_PAR151 __VA_ARGS__)
#define ATPP_PAR153(...) (ATPP_PAR152 __VA_ARGS__)
#define ATPP_PAR154(...) (ATPP_PAR153 __VA_ARGS__)
#define ATPP_PAR155(...) (ATPP_PAR154 __VA_ARGS__)
#define ATPP_PAR156(...) (ATPP_PAR155 __VA_ARGS__)
#define ATPP_PAR157(...) (ATPP_PAR156 __VA_ARGS__)
#define ATPP_PAR158(...) (ATPP_PAR157 __VA_ARGS__)
#define ATPP_PAR159(...) (ATPP_PAR158 __VA_ARGS__)
#define ATPP_PAR160(...) (ATPP_PAR159 __VA_ARGS__)
#define ATPP_PAR161(...) (ATPP_PAR160 __VA_ARGS__)
#define ATPP_PAR162(...) (ATPP_PAR161 __VA_ARGS__)
#define ATPP_PAR163(...) (ATPP_PAR162 __VA_ARGS__)
#define ATPP_PAR164(...) (ATPP_PAR163 __VA_ARGS__)
#define ATPP_PAR165(...) (ATPP_PAR164 __VA_ARGS__)
#define ATPP_PAR166(...) (ATPP_PAR165 __VA_ARGS__)
#define ATPP_PAR167(...) (ATPP_PAR166 __VA_ARGS__)
#define ATPP_PAR168(...) (ATPP_PAR167 __VA_ARGS__)
#define ATPP_PAR169(...) (ATPP_PAR168 __VA_ARGS__)
#define ATPP_PAR170(...) (ATPP_PAR169 __VA_ARGS__)
#define ATPP_PAR171(...) (ATPP_PAR170 __VA_ARGS__)
#define ATPP_PAR172(...) (ATPP_PAR171 __VA_ARGS__)
#define ATPP_PAR173(...) (ATPP_PAR172 __VA_ARGS__)
#define ATPP_PAR174(...) (ATPP_PAR173 __VA_ARGS__)
#define ATPP_PAR175(...) (ATPP_PAR174 __VA_ARGS__)
#define ATPP_PAR176(...) (ATPP_PAR175 __VA_ARGS__)
#define ATPP_PAR177(...) (ATPP_PAR176 __VA_ARGS__)
#define ATPP_PAR178(...) (ATPP_PAR177 __VA_ARGS__)
#define ATPP_PAR179(...) (ATPP_PAR178 __VA_ARGS__)
#define ATPP_PAR180(...) (ATPP_PAR179 __VA_ARGS__)
#define ATPP_PAR181(...) (ATPP_PAR180 __VA_ARGS__)
#define ATPP_PAR182(...) (ATPP_PAR181 __VA_ARGS__)
#define ATPP_PAR183(...) (ATPP_PAR182 __VA_ARGS__)
#define ATPP_PAR184(...) (ATPP_PAR183 __VA_ARGS__)
#define ATPP_PAR185(...) (ATPP_PAR184 __VA_ARGS__)
#define ATPP_PAR186(...) (ATPP_PAR185 __VA_ARGS__)
#define ATPP_PAR187(...) (ATPP_PAR186 __VA_ARGS__)
#define ATPP_PAR188(...) (ATPP_PAR187 __VA_ARGS__)
#define ATPP_PAR189(...) (ATPP_PAR188 __VA_ARGS__)
#define ATPP_PAR190(...) (ATPP_PAR189 __VA_ARGS__)
#define ATPP_PAR191(...) (ATPP_PAR190 __VA_ARGS__)
#define ATPP_PAR192(...) (ATPP_PAR191 __VA_ARGS__)
#define ATPP_PAR193(...) (ATPP_PAR192 __VA_ARGS__)
#define ATPP_PAR194(...) (ATPP_PAR193 __VA_ARGS__)
#define ATPP_PAR195(...) (ATPP_PAR194 __VA_ARGS__)
#define ATPP_PAR196(...) (ATPP_PAR195 __VA_ARGS__)
#define ATPP_PAR197(...) (ATPP_PAR196 __VA_ARGS__)
#define ATPP_PAR198(...) (ATPP_PAR197 __VA_ARGS__)
#define ATPP_PAR199(...) (ATPP_PAR198 __VA_ARGS__)
#define ATPP_PAR200(...) (ATPP_PAR199 __VA_ARGS__)
#define ATPP_PAR201(...) (ATPP_PAR200 __VA_ARGS__)
#define ATPP_PAR202(...) (ATPP_PAR201 __VA_ARGS__)
#define ATPP_PAR203(...) (ATPP_PAR202 __VA_ARGS__)
#define ATPP_PAR204(...) (ATPP_PAR203 __VA_ARGS__)
#define ATPP_PAR205(...) (ATPP_PAR204 __VA_ARGS__)
#define ATPP_PAR206(...) (ATPP_PAR205 __VA_ARGS__)
#define ATPP_PAR207(...) (ATPP_PAR206 __VA_ARGS__)
#define ATPP_PAR208(...) (ATPP_PAR207 __VA_ARGS__)
#define ATPP_PAR209(...) (ATPP_PAR208 __VA_ARGS__)
#define ATPP_PAR210(...) (ATPP_PAR209 __VA_ARGS__)
#define ATPP_PAR211(...) (ATPP_PAR210 __VA_ARGS__)
#define ATPP_PAR212(...) (ATPP_PAR211 __VA_ARGS__)
#define ATPP_PAR213(...) (ATPP_PAR212 __VA_ARGS__)
#define ATPP_PAR214(...) (ATPP_PAR213 __VA_ARGS__)
#define ATPP_PAR215(...) (ATPP_PAR214 __VA_ARGS__)
#define ATPP_PAR216(...) (ATPP_PAR215 __VA_ARGS__)
#define ATPP_PAR217(...) (ATPP_PAR216 __VA_ARGS__)
#define ATPP_PAR218(...) (ATPP_PAR217 __VA_ARGS__)
#define ATPP_PAR219(...) (ATPP_PAR218 __VA_ARGS__)
#define ATPP_PAR220(...) (ATPP_PAR219 __VA_ARGS__)
#define ATPP_PAR221(...) (ATPP_PAR220 __VA_ARGS__)
#define ATPP_PAR222(...) (ATPP_PAR221 __VA_ARGS__)
#define ATPP_PAR223(...) (ATPP_PAR222 __VA_ARGS__)
#define ATPP_PAR224(...) (ATPP_PAR223 __VA_ARGS__)
#define ATPP_PAR225(...) (ATPP_PAR224 __VA_ARGS__)
#define ATPP_PAR226(...) (ATPP_PAR225 __VA_ARGS__)
#define ATPP_PAR227(...) (ATPP_PAR226 __VA_ARGS__)
#define ATPP_PAR228(...) (ATPP_PAR227 __VA_ARGS__)
#define ATPP_PAR229(...) (ATPP_PAR228 __VA_ARGS__)
#define ATPP_PAR230(...) (ATPP_PAR229 __VA_ARGS__)
#define ATPP_PAR231(...) (ATPP_PAR230 __VA_ARGS__)
#define ATPP_PAR232(...) (ATPP_PAR231 __VA_ARGS__)
#define ATPP_PAR233(...) (ATPP_PAR232 __VA_ARGS__)
#define ATPP_PAR234(...) (ATPP_PAR233 __VA_ARGS__)
#define ATPP_PAR235(...) (ATPP_PAR234 __VA_ARGS__)
#define ATPP_PAR236(...) (ATPP_PAR235 __VA_ARGS__)
#define ATPP_PAR237(...) (ATPP_PAR236 __VA_ARGS__)
#define ATPP_PAR238(...) (ATPP_PAR237 __VA_ARGS__)
#define ATPP_PAR239(...) (ATPP_PAR238 __VA_ARGS__)
#define ATPP_PAR240(...) (ATPP_PAR239 __VA_ARGS__)
#define ATPP_PAR241(...) (ATPP_PAR240 __VA_ARGS__)
#define ATPP_PAR242(...) (ATPP_PAR241 __VA_ARGS__)
#define ATPP_PAR243(...) (ATPP_PAR242 __VA_ARGS__)
#define ATPP_PAR244(...) (ATPP_PAR243 __VA_ARGS__)
#define ATPP_PAR245(...) (ATPP_PAR244 __VA_ARGS__)
#define ATPP_PAR246(...) (ATPP_PAR245 __VA_ARGS__)
#define ATPP_PAR247(...) (ATPP_PAR246 __VA_ARGS__)
#define ATPP_PAR248(...) (ATPP_PAR247 __VA_ARGS__)
#define ATPP_PAR249(...) (ATPP_PAR248 __VA_ARGS__)
#define ATPP_PAR250(...) (ATPP_PAR249 __VA_ARGS__)
#define ATPP_PAR251(...) (ATPP_PAR250 __VA_ARGS__)
#define ATPP_PAR252(...) (ATPP_PAR251 __VA_ARGS__)
#define ATPP_PAR253(...) (ATPP_PAR252 __VA_ARGS__)
#define ATPP_PAR254(...) (ATPP_PAR253 __VA_ARGS__)
#define ATPP_PAR255(...) (ATPP_PAR254 __VA_ARGS__)
#define ATPP_PAR256(...) (ATPP_PAR255 __VA_ARGS__)

#define ATPP_STEP(...) ATPP_STEP1(ATPP_DPTH1 __VA_ARGS__) (__VA_ARGS__)
#define ATPP_STEP1(...) ATPP_STEP2(__VA_ARGS__)
#define ATPP_STEP2(...) ATPP_STEP3(ATPP__ ## __VA_ARGS__)
#define ATPP_STEP3(...) ATPP_STEP4(__VA_ARGS__)
#define ATPP_STEP4(a,...) ATPP_PAR##a

#endif /* CLAUSE_AMPLE_BASE_ATPP_PPRO_HH */
