//write a program which prints the first n Fibonacci numbers...

#include <stdio.h>
int main()
{
  int n, num1 = 0, num2 = 1, next, f;

  printf("Enter a number:\n");
  scanf("%d", &n);

  printf("Fibonacci series of %d:\n", n);

  for (f = 0; f < n; f++)
  {
    if (f <= 1)
      next = f;
    else
    {
      next = num1 + num2;
      num1 = num2;
      num2 = next;
    }
    printf("%d\n", next);
  }

  return 0;
}
