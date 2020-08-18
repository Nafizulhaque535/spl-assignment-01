//write a program that finds all the divisors of a number...

#include <stdio.h>
int main() {
	int x, i;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("All the divisor of %d are: ", x);

	// condition of a divisor value
	for(i = 1; i <= x; i++) {
		if((x%i) == 0){
			printf("%d", i);
			printf("\t");   // printing tab
		}
	}
	return 0;
}
