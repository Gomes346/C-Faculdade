int main(void)
{
  int nLin = 5, nCol = 5;
  int matx[nLin][nCol];
  for (int i = 0; i < nLin; i++)
  {
    for (int j = 0; j < nCol; j++)
    {
      printf("Digite o valor da linha %d coluna%d: ", i, j);
      scanf("%d", &matx[i][j]);
    }
  }
  for (int i = 0; i < nLin; i++)
  {
    for (int j = 0; j < nCol; j++)
    {
      printf("%d ", matx[i][j]);
    }
    printf("\n");
  }
  printf("---------\n");
  for (int i = 0; i < nLin; i++)
  {
    for (int j = 0; j < nCol; j++)
    {
      printf("%d ", matx[j][i]);
    }
    printf("\n");
  }

  return 0;
}