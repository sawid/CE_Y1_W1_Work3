#include <stdio.h>

void YesP();

void NoP();

void YesP() {
    printf("Yes");
}

void NoP() {
    printf("No");
}

int main() {
    long long int n, i, flag = 0;
    scanf_s("%lld", &n);

    for (i = 2; i <= n / 2; ++i) {

        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1 || n <= 0) {
        NoP();
    }
    else {
        if (flag == 0)
            YesP();
        else
            NoP();
    }

    return 0;
}