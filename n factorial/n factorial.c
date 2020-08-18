#include <stdio.h>
int main(){
  int i, num, f = 1;

  printf("Enter a number : ");
  scanf("%d", &num);

  for(i=1; i<=num; i++)
      f=f * i;

      // print the factorial value
  printf("The Factorial of %d is: %d\n", num, f);
  return 0;
}
