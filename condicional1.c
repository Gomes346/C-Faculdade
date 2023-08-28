#include <stdio.h>
int main(int argc, char const *argv[])
{
  float n1, n2;
  printf("Informe um numero: ");
  scanf("%f", &n1);
  printf("Informe outro numero: ");
  scanf("%f", &n2);
  if (n1 > n2)
  {
    printf("O maior numero é o %.2f", n1);
  }
  else
  {
    printf("O maior numero é o %.2f", n2);
  }

  return 0;
}
