#include <stdio.h>

void factorial(void) {
    int n;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorials do not exist for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop from 1 to n to calculate the product
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    //return 0;
}
