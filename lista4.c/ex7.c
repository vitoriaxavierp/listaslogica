#include <stdio.h>

int main() {
    int A[10], B[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        B[i] = A[9 - i];
    }

    printf("Matriz B: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
