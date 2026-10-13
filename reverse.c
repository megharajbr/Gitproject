#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop runs until the number becomes 0
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reverse = reverse * 10 + remainder; // Append it to the reversed number
        num /= 10;                     // Remove the last digit from original number
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}

