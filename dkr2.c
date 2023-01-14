
//Gandzuk Dmytro RE-22 DKR2 - Variant 5

#include <stdio.h>
#include <stdlib.h>

#define n 2 //matrix size NxN

void print_matrix(int a[n][n], int N);
void sort_matrix(int b[n][n], int N);

int main() {
    int a[n][n], b[n][n];
    // считываем количество чисел n

    // формируем массив n чисел
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j]=a[i][j];
        }
    }

    printf("\nMatrix A:\n");
    print_matrix(a,n);
    printf("\n==========================\n\n");
    printf("Matrix B:\n");
    sort_matrix(b,n);
    return 0;
}

void print_matrix(int a[n][n], int N){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void sort_matrix(int b[n][n], int N){
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) {
            for (int k = i + 1; k < N; ++k) {
                if (b[i][j] > b[k][j]) {
                    int tmp = b[i][j];
                    b[i][j] = b[k][j];
                    b[k][j] = tmp;
                }
            }
        }
    }
    print_matrix(b,N);
}