/*
 * Author: Hannah White
 *
 * Title: proj09.driver.c
 *
 * Brief: Code that tests the assembly program which accepts 
 * a double value and classifies it appropriately, returning a string
 * to a pointer        
 */

#include "/user/cse320/Projects/project09.support.h"


int main()
{
  char B[85];
  char A[80];

  double x = 0.000;
  double y = 14.35;
  
  classify(x, B);
  classify(y, A);

  printf("%s", B);
  printf("%s", A);
}
