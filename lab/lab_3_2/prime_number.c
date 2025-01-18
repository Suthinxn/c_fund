#include <stdio.h>

int main() {
    int n;
    printf("Enter a number (n > 1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter a number greater than 1.\n");
        return 0;
    }

    printf("Prime numbers less than or equal to %d are:\n", n);
    for (int num = 2; num <= n; num++) {
        int isPrime = 1; 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\t", num);
        }
    }
    printf("\n");
    return 0;
}
