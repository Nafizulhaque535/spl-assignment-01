//1 - 2 + 3 - 4... up to nth term
#include <stdio.h>
int main()
{
    int n, i, even=0, odd=0;
    printf("Enter the last term:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i%2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("sum = %d\n", odd-even);
    return 0;
}
