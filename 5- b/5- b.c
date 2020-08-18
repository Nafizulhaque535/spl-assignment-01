//1^2 + 2^2 + 3^2 +....+n^2

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the n value of the series: ");
    scanf("%d", &n);

    sum = (n * (n + 1) * (2 * n + 1 )) / 6;
    printf("Sum of the series : ");

    for (i = 1; i <= n; i++)
    {
        if (i != n)
            printf("%d^2 + ", i);   //add the square
        else
            printf("%d^2 = %d ", i, sum);   //add the square
    }
    return 0;
}
