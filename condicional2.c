#include <stdio.h>
int main(int argc, char const *argv[])
{
  int numero;
  printf("Informe um numero inteiro: ");
  scanf("%d", &numero);
  if (numero % 2 == 0)
  {
    printf("Esse numero é par!");
  }
  else
  {
    printf("Esse numero é impar!");
  }

  return 0;
}
