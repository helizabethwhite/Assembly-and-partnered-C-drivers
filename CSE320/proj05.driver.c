#include <stdio.h>
#include "/user/cse320/lib/bitlib.h"

/* Name: proj05.driver.c
 *
 * Author : Hannah White
 *
 * Brief: code that tests implementation of conversion module
 */

int convert(const char[], int, int*);

char A[] = "177";
int B = 8;
int C;
int D;

char E[] = " -3A";
int F = 16;
int G;
int H;

char I[] = "5A";
int J = 10;
int K;
int L;

char M[] = "F007E";
int N = 10;
int O;
int P;

char Q[] = "-20";
int R = 12;
int S;
int T;

char U[] = "101011";
int V = 2;
int W;
int X;

char Y[] = "5";

char Z[] = "2A#";
int z = 11;

char a[] = "1024";
int b = 10;
int c;
int d;

int main()
{
  // should return 1
  D = convert(&A[0], B, &C);
  printf("Value: %s base %d\n", A, B);
  printf("Flag: %d Internal representation: %s\n\n",D, bit32(C));

  // should return 1
  H = convert(&E[0], F, &G);
  printf("Value: %s base %d\n", E, F);
  printf("Flag: %d Internal representation: %s\n\n",H, bit32(G));
 
  // should return 1
  L = convert(&I[0], J, &K);
  printf("Value: %s base %d\n", I, J);
  printf("Flag: %d Internal representation: %s\n\n",L, bit32(K));

  // should return 0
  P = convert(&M[0], N, &O);
  printf("Value: %s base %d\n", M, N);
  printf("Flag: %d Internal representation: %s\n\n",P, bit32(O));

  // should return 1
  T = convert(&Q[0], R, &S);
  printf("Value: %s base %d\n", Q, R);
  printf("Flag: %d Internal representation: %s\n\n",T, bit32(S));

  // should return 1
  X = convert(&Z[0], z, &W);
  printf("Value: %s base %d\n", Z, z);
  printf("Flag: %d Internal representation: %s\n\n",X, bit32(W));

  // should return 1
  d = convert(&a[0], b, &c);
  printf("Value: %s base %d\n", a, b);
  printf("Flag: %d Internal representation: %s\n\n",d, bit32(c));



}
