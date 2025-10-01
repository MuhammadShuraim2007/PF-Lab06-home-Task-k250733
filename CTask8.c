#include <stdio.h>

int main() {
    int n, i, base, power = 1;

    printf("Enter the number: ");
    scanf("%d", &base);

    printf("Enter the number upto which exponents is multiplied: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        power *= base;
    }

    printf("%d", power);
    return 0;
}
