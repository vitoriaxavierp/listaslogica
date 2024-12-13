#include <stdio.h>

int main() {
    int A[8], B[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * A[i];
    }

    printf("Matriz B: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
