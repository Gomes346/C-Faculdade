#include <stdio.h>
int main(int argc, char const *argv[])
{
  float n1, n2, n3, soma, produto;
  printf("Informe um numero: ");
  scanf("%f", &n1);
  printf("Informe mais um numero: ");
  scanf("%f", &n2);
  printf("Informe mais um numero: ");
  scanf("%f", &n3);
  soma = n1 + n2 + n3;
  produto = n1 * n2 * n3;
  printf("Soma dos numeros: %.2f\nProduto dos numeros: %.2f", soma, produto);

  return 0;
}
