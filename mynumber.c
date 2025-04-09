#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 1)
    {
      printf("Odd Number : %d\n", i);
    }
    else
    {
      printf("Even Number : %d\n", i);
    }
  }
}
