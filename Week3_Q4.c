#include <stdio.h>

void factorial(int *n, int *result) {

    *result = 1;
    for (int i = 1; i <= *n; i++) {
        *result *= i;
    }
}

int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(&n, &result);

    printf("Factorial of %d is %d\n", n, result);

    return 0;
}