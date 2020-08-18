//2 + 4 + 6 + 8... up to nth term
#include<stdio.h>
int main()
{
    int x=2,i,num;
    printf("Enter any number :");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
    printf(" %d ",x);
    x = x * 2;
    }
    return 0;
}
