// 2 + 4 + 6 + ... up to nth term

#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);

    //condition
    for ( i = 1 ; i <= n ; i++ )
       {
            i = i+1;
          if(n!=i)
            printf("%d +",i);   //up to nth term
          else
            printf("%d ",i);
          sum = sum + i;
       }
       printf(" = %d",sum);
       return 0;
    }
