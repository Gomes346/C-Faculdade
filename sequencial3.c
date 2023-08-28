#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  int A = 4, B = 5, C = 1;
  float a, b, c, d, e;
  a = B * A - pow(B, 2) / 4 * C;
  b = (A * B) / pow(3, 2);
  c = (((B + C) / 2 * A + 10) * 3 * B) - 6;
  d = 7 * 10 - 50 % 3 * 4 + 9;
  e = (7 * (10 - 5) % 3) * 4 + 9;
  printf("a= %f \n", a);
  printf("b= %f \n", b);
  printf("c= %f \n", c);
  printf("d= %f \n", d);
  printf("e= %f \n", e);
  return 0;
}
