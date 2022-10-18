#include <stdio.h>
int main()
{
  int array[100] = {50, 20, 90, 10}, i, j, swap;

  for (i = 0; i < 4 - 1; i++)
  {
    for (j = 0; j < 4 - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        swap = array[j];
        array[j] = array[j + 1];
        array[j + 1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < 4; i++)
    printf("%d\n", array[i]);

  return 0;
}