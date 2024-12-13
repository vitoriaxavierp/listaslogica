#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int A[6], B[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 6; i++) {
        B[i] = fatorial(A[i]);
    }

    printf("Matriz B: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
