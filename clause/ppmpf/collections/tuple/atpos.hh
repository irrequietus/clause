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

#ifndef CLAUSE_PPMPF_COLLECTIONS_TUPLE_ATPOS_HH
#define CLAUSE_PPMPF_COLLECTIONS_TUPLE_ATPOS_HH

#ifndef CLAUSE_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH
#error ppmpf: <clause/ppmpf/collections/tuple/functions.hh> must precede.
#endif

#define PPMPF_TUP_A00(z,x0,...) \
        PPMPF_TUP_JOIN(z,(x0)),__VA_ARGS__
#define PPMPF_TUP_A01(z,x0,x1,...) \
        PPMPF_TUP_JOIN(z,(x0,x1)),__VA_ARGS__
#define PPMPF_TUP_A02(z,x0,x1,x2,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2)),__VA_ARGS__
#define PPMPF_TUP_A03(z,x0,x1,x2,x3,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3)),__VA_ARGS__
#define PPMPF_TUP_A04(z,x0,x1,x2,x3,x4,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3,x4)),__VA_ARGS__
#define PPMPF_TUP_A05(z,x0,x1,x2,x3,x4,x5,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3,x4,x5)),__VA_ARGS__
#define PPMPF_TUP_A06(z,x0,x1,x2,x3,x4,x5,x6,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3,x4,x5,x6)),__VA_ARGS__
#define PPMPF_TUP_A07(z,x0,x1,x2,x3,x4,x5,x6,x7,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3,x4,x5,x6,x7)),__VA_ARGS__
#define PPMPF_TUP_A08(z,x0,x1,x2,x3,x4,x5,x6,x7,x8,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3,x4,x5,x6,x7,x8)),__VA_ARGS__
#define PPMPF_TUP_A09(z,x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,...) \
        PPMPF_TUP_JOIN(z,(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9)),__VA_ARGS__

#define PPMPF_TUP_A11( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A12( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 ) ) \
    , __VA_ARGS__


#define PPMPF_TUP_A13( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 ) ) \
    , __VA_ARGS__


#define PPMPF_TUP_A14( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, \
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 \
      , e0,e1,e2,e3,e4,e5,e6,e7,e8,e9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A15( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, \
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9, \
    f0,f1,f2,f3,f4,f5,f6,f7,f8,f9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 \
      , e0,e1,e2,e3,e4,e5,e6,e7,e8,e9 \
      , f0,f1,f2,f3,f4,f5,f6,f7,f8,f9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A16( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, \
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9, \
    f0,f1,f2,f3,f4,f5,f6,f7,f8,f9, \
    g0,g1,g2,g3,g4,g5,g6,g7,g8,g9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 \
      , e0,e1,e2,e3,e4,e5,e6,e7,e8,e9 \
      , f0,f1,f2,f3,f4,f5,f6,f7,f8,f9 \
      , g0,g1,g2,g3,g4,g5,g6,g7,g8,g9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A17( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, \
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9, \
    f0,f1,f2,f3,f4,f5,f6,f7,f8,f9, \
    g0,g1,g2,g3,g4,g5,g6,g7,g8,g9, \
    h0,h1,h2,h3,h4,h5,h6,h7,h8,h9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 \
      , e0,e1,e2,e3,e4,e5,e6,e7,e8,e9 \
      , f0,f1,f2,f3,f4,f5,f6,f7,f8,f9 \
      , g0,g1,g2,g3,g4,g5,g6,g7,g8,g9 \
      , h0,h1,h2,h3,h4,h5,h6,h7,h8,h9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A18( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, \
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9, \
    f0,f1,f2,f3,f4,f5,f6,f7,f8,f9, \
    g0,g1,g2,g3,g4,g5,g6,g7,g8,g9, \
    h0,h1,h2,h3,h4,h5,h6,h7,h8,h9, \
    i0,i1,i2,i3,i4,i5,i6,i7,i8,i9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 \
      , e0,e1,e2,e3,e4,e5,e6,e7,e8,e9 \
      , f0,f1,f2,f3,f4,f5,f6,f7,f8,f9 \
      , g0,g1,g2,g3,g4,g5,g6,g7,g8,g9 \
      , h0,h1,h2,h3,h4,h5,h6,h7,h8,h9 \
      , i0,i1,i2,i3,i4,i5,i6,i7,i8,i9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A19( \
    z, \
    a0,a1,a2,a3,a4,a5,a6,a7,a8,a9, \
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9, \
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9, \
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9, \
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9, \
    f0,f1,f2,f3,f4,f5,f6,f7,f8,f9, \
    g0,g1,g2,g3,g4,g5,g6,g7,g8,g9, \
    h0,h1,h2,h3,h4,h5,h6,h7,h8,h9, \
    i0,i1,i2,i3,i4,i5,i6,i7,i8,i9, \
    j0,j1,j2,j3,j4,j5,j6,j7,j8,j9, ... ) \
    PPMPF_TUP_JOIN( z ,\
      ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 \
      , b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 \
      , c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 \
      , d0,d1,d2,d3,d4,d5,d6,d7,d8,d9 \
      , e0,e1,e2,e3,e4,e5,e6,e7,e8,e9 \
      , f0,f1,f2,f3,f4,f5,f6,f7,f8,f9 \
      , g0,g1,g2,g3,g4,g5,g6,g7,g8,g9 \
      , h0,h1,h2,h3,h4,h5,h6,h7,h8,h9 \
      , i0,i1,i2,i3,i4,i5,i6,i7,i8,i9 \
      , j0,j1,j2,j3,j4,j5,j6,j7,j8,j9 ) ) \
    , __VA_ARGS__

#define PPMPF_TUP_A1Z(...) __VA_ARGS__
#define PPMPF_TUP_A2Z(...) __VA_ARGS__
#define PPMPF_TUP_A3Z(...) __VA_ARGS__
#define PPMPF_TUP_A10(...) PPMPF_TUP_A09(__VA_ARGS__)
#define PPMPF_TUP_A20(...) PPMPF_TUP_A19(__VA_ARGS__)
#define PPMPF_TUP_A30(...) PPMPF_TUP_A3X(__VA_ARGS__)

#define PPMPF_TUP_A3X( \
  z, \
  a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,\
  b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,\
  c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,\
  d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,\
  e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,\
  f0,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,\
  g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11,g12,g13,g14,g15,g16,g17,g18,g19,\
  h0,h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h13,h14,h15,h16,h17,h18,h19,\
  i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,\
  j0,j1,j2,j3,j4,j5,j6,j7,j8,j9,j10,j11,j12,j13,j14,j15,j16,j17,j18,j19,\
  k0,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,\
  l0,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15,l16,l17,l18,l19,\
  m0,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,m17,m18,m19,\
  n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,\
  o0,o1,o2,o3,o4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16,o17,o18,o19,\
  p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,\
  q0,q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18,q19,\
  r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14,r15,r16,r17,r18,r19,\
  s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,\
  t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,\
  u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15,u16,u17,u18,u19,\
  w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19,\
  x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,\
  y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15,y16,y17,y18,y19,\
  z0,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10,z11,z12,z13,z14,z15,z16,z17,z18,z19,\
  A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,\
  B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,\
  C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,C17,C18,C19,\
  D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15,D16,D17,D18,D19,\
  E0,E1,E2,E3,E4,E5,E6,E7,E8,E9,E10,E11,E12,E13,E14,E15,E16,E17,E18,E19,\
  F0,F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11,F12,F13,F14,F15,F16,F17,F18,F19,\
  G0,G1,G2,G3,G4,G5,G6,G7,G8,G9,G10,G11,G12,G13,G14,G15,G16,G17,G18,G19,\
  H0,H1,H2,H3,H4,H5,H6,H7,H8,H9,H10,H11,H12,H13,H14,H15,H16,H17,H18,H19,\
  I0,I1,I2,I3,I4,I5,I6,I7,I8,I9,I10,I11,I12,I13,I14,I15,I16,I17,I18,I19,\
  J0,J1,J2,J3,J4,J5,J6,J7,J8,J9,J10,J11,J12,J13,J14,J15,J16,J17,J18,J19,\
  K0,K1,K2,K3,K4,K5,K6,K7,K8,K9,K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,\
  L0,L1,L2,L3,L4,L5,L6,L7,L8,L9,L10,L11,L12,L13,L14,L15,L16,L17,L18,L19,\
  M0,M1,M2,M3,M4,M5,M6,M7,M8,M9,M10,M11,M12,M13,M14,M15,M16,M17,M18,M19,\
  N0,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12,N13,N14,N15,N16,N17,N18,N19,\
  O0,O1,O2,O3,O4,O5,O6,O7,O8,O9,O10,O11,O12,O13,O14,O15,O16,O17,O18,O19,\
  P0,P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13,P14,P15,P16,P17,P18,P19,\
  Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9,Q10,Q11,Q12,Q13,Q14,Q15,Q16,Q17,Q18,Q19,\
  R0,R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12,R13,R14,R15,R16,R17,R18,R19,\
  S0,S1,S2,S3,S4,S5,S6,S7,S8,S9,S10,S11,S12,S13,S14,S15,S16,S17,S18,S19,\
  T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,\
  U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,\
  W0,W1,W2,W3,W4,W5,W6,W7,W8,W9,W10,W11,W12,W13,W14,W15,W16,W17,W18,W19,\
  X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,\
  Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Y8,Y9,Y10,Y11,Y12,Y13,Y14,Y15,Y16,Y17,Y18,Y19,\
  Z0,Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,\
  ... ) \
  PPMPF_TUP_JOIN( z, \
  ( a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,\
    b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,\
    c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,\
    d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,\
    e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,\
    f0,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,\
    g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11,g12,g13,g14,g15,g16,g17,g18,g19,\
    h0,h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h13,h14,h15,h16,h17,h18,h19,\
    i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,\
    j0,j1,j2,j3,j4,j5,j6,j7,j8,j9,j10,j11,j12,j13,j14,j15,j16,j17,j18,j19,\
    k0,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,\
    l0,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15,l16,l17,l18,l19,\
    m0,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,m17,m18,m19,\
    n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,\
    o0,o1,o2,o3,o4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16,o17,o18,o19,\
    p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,\
    q0,q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18,q19,\
    r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14,r15,r16,r17,r18,r19,\
    s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,\
    t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,\
    u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15,u16,u17,u18,u19,\
    w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19,\
    x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,\
    y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15,y16,y17,y18,y19,\
    z0,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10,z11,z12,z13,z14,z15,z16,z17,z18,z19,\
    A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,\
    B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,\
    C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,C17,C18,C19,\
    D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15,D16,D17,D18,D19,\
    E0,E1,E2,E3,E4,E5,E6,E7,E8,E9,E10,E11,E12,E13,E14,E15,E16,E17,E18,E19,\
    F0,F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11,F12,F13,F14,F15,F16,F17,F18,F19,\
    G0,G1,G2,G3,G4,G5,G6,G7,G8,G9,G10,G11,G12,G13,G14,G15,G16,G17,G18,G19,\
    H0,H1,H2,H3,H4,H5,H6,H7,H8,H9,H10,H11,H12,H13,H14,H15,H16,H17,H18,H19,\
    I0,I1,I2,I3,I4,I5,I6,I7,I8,I9,I10,I11,I12,I13,I14,I15,I16,I17,I18,I19,\
    J0,J1,J2,J3,J4,J5,J6,J7,J8,J9,J10,J11,J12,J13,J14,J15,J16,J17,J18,J19,\
    K0,K1,K2,K3,K4,K5,K6,K7,K8,K9,K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,\
    L0,L1,L2,L3,L4,L5,L6,L7,L8,L9,L10,L11,L12,L13,L14,L15,L16,L17,L18,L19,\
    M0,M1,M2,M3,M4,M5,M6,M7,M8,M9,M10,M11,M12,M13,M14,M15,M16,M17,M18,M19,\
    N0,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12,N13,N14,N15,N16,N17,N18,N19,\
    O0,O1,O2,O3,O4,O5,O6,O7,O8,O9,O10,O11,O12,O13,O14,O15,O16,O17,O18,O19,\
    P0,P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13,P14,P15,P16,P17,P18,P19,\
    Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9,Q10,Q11,Q12,Q13,Q14,Q15,Q16,Q17,Q18,Q19,\
    R0,R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12,R13,R14,R15,R16,R17,R18,R19,\
    S0,S1,S2,S3,S4,S5,S6,S7,S8,S9,S10,S11,S12,S13,S14,S15,S16,S17,S18,S19,\
    T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,\
    U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,\
    W0,W1,W2,W3,W4,W5,W6,W7,W8,W9,W10,W11,W12,W13,W14,W15,W16,W17,W18,W19,\
    X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,\
    Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Y8,Y9,Y10,Y11,Y12,Y13,Y14,Y15,Y16,Y17,Y18,Y19,\
    Z0,Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19 ) ) \
  , __VA_ARGS__

#define PPMPF_TUP_A21(...) \
        PPMPF_TUP_A20(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A22(...) \
        PPMPF_TUP_A21(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A23(...) \
        PPMPF_TUP_A22(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A24(...) \
        PPMPF_TUP_A23(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A25(...) \
        PPMPF_TUP_A24(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A26(...) \
        PPMPF_TUP_A25(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A27(...) \
        PPMPF_TUP_A26(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A28(...) \
        PPMPF_TUP_A27(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A29(...) \
        PPMPF_TUP_A28(PPMPF_TUP_A19(__VA_ARGS__))
#define PPMPF_TUP_A31(...) \
        PPMPF_TUP_A30(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A32(...) \
        PPMPF_TUP_A31(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A33(...) \
        PPMPF_TUP_A32(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A34(...) \
        PPMPF_TUP_A33(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A35(...) \
        PPMPF_TUP_A34(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A36(...) \
        PPMPF_TUP_A35(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A37(...) \
        PPMPF_TUP_A36(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A38(...) \
        PPMPF_TUP_A37(PPMPF_TUP_A3X(__VA_ARGS__))
#define PPMPF_TUP_A39(...) \
        PPMPF_TUP_A38(PPMPF_TUP_A3X(__VA_ARGS__))

#endif /* CLAUSE_PPMPF_COLLECTIONS_TUPLE_ATPOS_HH */
