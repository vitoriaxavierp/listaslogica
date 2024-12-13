#include <stdio.h>

int main() {
    int A[5], B[5], C[10];

    for (int i = 0; i < 5; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        C[i] = A[i];
        C[i + 5] = B[i];
    }

    printf("Matriz C: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    return 0;
}
