//testing prime or not....

#include <stdio.h>
int main()
{
    int n, i, p = 1;

    // Take an input
    printf("Enter a number: \n");

    scanf("%d", &n);

    for (i = 2; i <= sqrt(n); i++) {

        // prime number condition
        if (n % i == 0) {
            p = 0;
            break;
        }
    }

    if (p == 1) {
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
    }

    return 0;
}
