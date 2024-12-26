#include <stdio.h>

void big() {
    int num1 = 20, num2 = 30, num3 = 10;
    int largest;

    if (num1 > num2 && num1 > num3) {
        largest = num1;
    } else if (num2 > num1 && num2 > num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    printf("The largest number is: %d\n", largest);

   // return 0;
}
