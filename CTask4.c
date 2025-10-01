#include <stdio.h>

int main() {
    int n, i;
    int f = 0, s = 1, next;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", f);
        } else if (i == 1) {
            printf("%d ", s);
        } else {
            next = f + s;
            printf("%d ", next);
            f = s;
            s = next;
        }
    }

    return 0;
}
