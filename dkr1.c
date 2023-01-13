

//Gandzuk Dmytro RE-22 DKR1 - Variant 5

#include <stdio.h>

double degree(int x, int n); //function for raising a number to a power

int main() {
    int a, N;
    double sum = 0, S;

    do {
        printf("\nEnter values a: ");
        scanf("%d", &a);
    } while (a < 0);

    do {
        printf("\nEnter values N: ");
        scanf("%d", &N);
    } while (N < 1);

    for (int i = 1; i <= N; i++) {
        sum = sum + degree(-1, (i - 1)) * (degree(a, i) / (a + i));
    }

    S = 1 + sum;
    printf("\nS = %f", S);
}

double degree(int x, int n) {
    double out = x;
    if (n == 0) { return 1; }
    else {
        for (int i = 1; i < n; i++) { out = out * x; }
        return out;
    }
}