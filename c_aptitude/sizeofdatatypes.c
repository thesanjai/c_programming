#include <stdio.h>

int main() {
  int i;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;
  char c;
  char arr[10];
  char *cp;
  int *ip;
  float *fp;
  double *dp;
  void *vp;

  printf("Size of int: %zu bytes\n", sizeof(i));
  printf("Size of long: %zu bytes\n", sizeof(l));
  printf("Size of long long: %zu bytes\n", sizeof(ll));
  printf("Size of float: %zu bytes\n", sizeof(f));
  printf("Size of double: %zu bytes\n", sizeof(d));
  printf("Size of long double: %zu bytes\n", sizeof(ld));
  printf("Size of char: %zu bytes\n", sizeof(c));
  printf("Size of char array[10]: %zu bytes\n", sizeof(arr));
  printf("Size of char pointer: %zu bytes\n", sizeof(cp));
  printf("Size of int pointer: %zu bytes\n", sizeof(ip));
  printf("Size of float pointer: %zu bytes\n", sizeof(fp));
  printf("Size of double pointer: %zu bytes\n", sizeof(dp));
  printf("Size of void pointer: %zu bytes\n", sizeof(vp));

  printf("Address of int variable: %zu\n", &i);
  printf("Address of long variable: %zu\n", &l);
  printf("Address of long long variable: %zu\n", &ll);
  printf("Address of double variable: %zu\n", &ld);
  printf("Address of float variable: %zu\n", &f);
  printf("Address of char variable: %zu\n", &c);
  printf("Address of char array: %zu\n", arr);
  
  printf("Address of char pointer: %zu\n", &cp);
  printf("Address of int pointer: %zu\n", &ip);
  printf("Address of float pointer: %zu\n", &fp);
  printf("Address of double pointer: %zu\n", &dp);
  printf("Address of void pointer: %zu\n", &vp);


  return 0;
}