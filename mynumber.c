#include <stdio.h>

int main(void)
{
  printf("Odd Number : ");
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 1)
    {
      printf("%d ", i);
    }
  }
  printf("\n");

  printf("Even Number : ");
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i);
    }
  }
  printf("\n");

  printf("Prime Number : ");
  for (int i = 2; i <= 100; i++)
  {
    int is_prime = 1;

    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        is_prime = 0;
        break;
      }
    }

    if (is_prime)
    {
      printf("%d ", i);
    }
  }

  return 0;
  printf("\n");
}