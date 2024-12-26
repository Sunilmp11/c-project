#include <stdio.h>

void fact() {
    int num = 3;
    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", num, factorial);

  //  return 0;
}
