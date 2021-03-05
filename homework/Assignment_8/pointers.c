/*  Jakob Harrell
    CSC 250
*/

#include <stdio.h>

//proto
void max(int *a, int *b, int *c, int *d, int *result);
void min(int *a, int *b, int *c, int *d, int *result);
void mul(int *a, int *b, int *c, int *d, int *result);


//main
int main (void) {
  //variables
  int n1, n2, n3, n4;
  int maxd, mind, muld;

  //main
  printf("Enter the 4 numbers: ");
  scanf(" %d %d %d %d", &n1, &n2, &n3, &n4);

  max(&n1, &n2, &n3, &n4, &maxd);
  min(&n1, &n2, &n3, &n4, &mind);
  mul(&n1, &n2, &n3, &n4, &muld);

  printf("The max is %d. The min is %d. (a * b * c) / d = %d\n", maxd, mind, muld);

  return 0;
}

//finds the max value of a,b,c,d and stores the largest value in result.
void max(int *a, int *b, int *c, int *d, int *result){
  int t[4];
  t[0] = *a;
  t[1] = *b;
  t[2] = *c;
  t[3] = *d;
  int temp = t[0];
  for (int i = 0; i < 4; i++) {
    if (t[i] > temp){
      temp = t[i];
    }
  }
  *result = temp;
}

//finds the min value of a,b,c,d and stores the largest value in result.
void min(int *a, int *b, int *c, int *d, int *result){
  int t[4];
  t[0] = *a;
  t[1] = *b;
  t[2] = *c;
  t[3] = *d;
  int temp = t[0];
  for (int i = 0; i < 4; i++) {
    if (t[i] < temp){
      temp = t[i];
    }
  }
  *result = temp;
}

//multiplies a * b * c and divides by d. Stores that value in result.
void mul(int *a, int *b, int *c, int *d, int *result){
  *result = ((*a * *b * *c) / *d);
}
