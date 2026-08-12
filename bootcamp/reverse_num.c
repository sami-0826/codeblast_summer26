#include <stdio.h>

int main() {
    long long n, digit, reverse = 0;

    scanf("%lld", &n);

    if (n == 0) {
        printf("0");
    } else {
        while (n > 0) {
            digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }

        printf("%lld", reverse);
    }

    return 0;
}
