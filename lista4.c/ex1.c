#include <stdio.h>

int main() {
    int A[5], B[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++) {
        B[i] = A[i] * 3;
    }

    printf("Matriz B: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
