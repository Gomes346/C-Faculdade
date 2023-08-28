#include <stdio.h>
int main(int argc, char const *argv[])
{
  float media, n1, n2, n3;
  printf("Infome um numero: ");
  scanf("%f", &n1);
  printf("Infome um numero: ");
  scanf("%f", &n2);
  printf("Infome um numero: ");
  scanf("%f", &n3);
  media = (n1 + n2 + n3) / 3;
  printf("Media aritimetica desses numeros: %.2f", media);
  return 0;
}
