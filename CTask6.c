#include <stdio.h>

int main() {
    int i, sum = 0, oddSum = 0, n;

    printf("Enter the range of number(1-20): ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        if(i % 2 == 0)
            sum = sum + i;
    }

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0)
            oddSum = oddSum + i;
    }

    printf("The sum of even number from 1 to %d: %d\n", n, sum);
    printf("The sum of odd number from 1 to %d: %d\n", n, oddSum);

    return 0;
}

