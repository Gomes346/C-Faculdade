#include <stdio.h>
int main(int argc, char const *argv[])
{
  float n1, n2, n3, n4, media;
  printf("Informe um numero: ");
  scanf("%f", &n1);
  printf("Informe outro numero: ");
  scanf("%f", &n2);
  printf("Informe outro numero: ");
  scanf("%f", &n3);
  printf("Informe outro numero: ");
  scanf("%f", &n4);
  media = ((n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4)) / (1 + 2 + 3 + 4);
  printf("Media ponderada: %.2f", media);
  return 0;
}
