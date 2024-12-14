#include <stdio.h>

int main() {
    int A[5][3], B[5][3], C[5][3];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matriz C (soma de A e B):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
