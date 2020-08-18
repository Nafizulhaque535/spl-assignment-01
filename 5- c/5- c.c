//1/1 + 1/2 + 1/3 + ....+1/n

#include <stdio.h>
int main()
{
    int num, i, sum=0;
    printf("Input a number: ");
    scanf("%d",&num);
    printf("1 + ");     //initial value

    //condition
    for(i=2; i<=num-1; i++)
        printf(" 1/%d +",i);

    for(i=1;i<=num;i++)
        sum = sum + i;

    printf(" 1/%d",num);
    printf("\nSum = 1/%d",sum + 1 / num);
    return 0;
}
