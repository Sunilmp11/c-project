#include <stdio.h>

int main() {
    int num = 12345; // Example number
    int reverse = 0;

    printf("Original number: %d\n", num);

    while (num != 0) {
        int digit = num % 10;      // Extract the last digit
        reverse = reverse * 10 + digit; // Build the reversed number
        num /= 10;                 // Remove the last digit
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}

