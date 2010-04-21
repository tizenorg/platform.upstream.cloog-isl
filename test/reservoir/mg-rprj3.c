/* Generated from ../../../git/cloog/test/./reservoir/mg-rprj3.cloog by CLooG 0.14.0-136-gb91ef26 gmp bits in 0.40s. */
if ((M >= 2) && (N >= 3) && (O >= 3)) {
  if ((M >= 4) && (N >= 4)) {
    for (c2=2;c2<=O-1;c2++) {
      for (c6=2;c6<=M;c6++) {
        S1(c2,2,c6) ;
      }
      for (c4=3;c4<=N-1;c4++) {
        for (c6=2;c6<=M;c6++) {
          S2(c2,c4-1,c6) ;
        }
        S4(c2,c4-1,2) ;
        for (c6=2;c6<=M-2;c6++) {
          S3(c2,c4-1,c6) ;
          S5(c2,c4-1,c6) ;
          S4(c2,c4-1,c6+1) ;
        }
        S3(c2,c4-1,M-1) ;
        S5(c2,c4-1,M-1) ;
        for (c6=2;c6<=M;c6++) {
          S1(c2,c4,c6) ;
        }
      }
      for (c6=2;c6<=M;c6++) {
        S2(c2,N-1,c6) ;
      }
      S4(c2,N-1,2) ;
      for (c6=2;c6<=M-2;c6++) {
        S3(c2,N-1,c6) ;
        S5(c2,N-1,c6) ;
        S4(c2,N-1,c6+1) ;
      }
      S3(c2,N-1,M-1) ;
      S5(c2,N-1,M-1) ;
    }
  }
  if ((M == 3) && (N >= 4)) {
    for (c2=2;c2<=O-1;c2++) {
      for (c6=2;c6<=3;c6++) {
        S1(c2,2,c6) ;
      }
      for (c4=3;c4<=N-1;c4++) {
        for (c6=2;c6<=3;c6++) {
          S2(c2,c4-1,c6) ;
        }
        S4(c2,c4-1,2) ;
        S3(c2,c4-1,2) ;
        S5(c2,c4-1,2) ;
        for (c6=2;c6<=3;c6++) {
          S1(c2,c4,c6) ;
        }
      }
      for (c6=2;c6<=3;c6++) {
        S2(c2,N-1,c6) ;
      }
      S4(c2,N-1,2) ;
      S3(c2,N-1,2) ;
      S5(c2,N-1,2) ;
    }
  }
  if ((M >= 4) && (N == 3)) {
    for (c2=2;c2<=O-1;c2++) {
      for (c6=2;c6<=M;c6++) {
        S1(c2,2,c6) ;
      }
      for (c6=2;c6<=M;c6++) {
        S2(c2,2,c6) ;
      }
      S4(c2,2,2) ;
      for (c6=2;c6<=M-2;c6++) {
        S3(c2,2,c6) ;
        S5(c2,2,c6) ;
        S4(c2,2,c6+1) ;
      }
      S3(c2,2,M-1) ;
      S5(c2,2,M-1) ;
    }
  }
  if ((M == 3) && (N == 3)) {
    for (c2=2;c2<=O-1;c2++) {
      for (c6=2;c6<=3;c6++) {
        S1(c2,2,c6) ;
      }
      for (c6=2;c6<=3;c6++) {
        S2(c2,2,c6) ;
      }
      S4(c2,2,2) ;
      S3(c2,2,2) ;
      S5(c2,2,2) ;
    }
  }
  if ((M == 2) && (N >= 4)) {
    for (c2=2;c2<=O-1;c2++) {
      S1(c2,2,2) ;
      for (c4=3;c4<=N-1;c4++) {
        S2(c2,c4-1,2) ;
        S1(c2,c4,2) ;
      }
      S2(c2,N-1,2) ;
    }
  }
  if ((M == 2) && (N == 3)) {
    for (c2=2;c2<=O-1;c2++) {
      S1(c2,2,2) ;
      S2(c2,2,2) ;
    }
  }
}