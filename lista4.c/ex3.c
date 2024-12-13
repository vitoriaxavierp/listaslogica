#include <stdio.h>

int main() {
    int A[5], B[5], C[5];

    // Ler os elementos da matriz A e B
    for (int i = 0; i < 5; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Subtrair elementos e preencher a matriz C
    for (int i = 0; i < 5; i++) {
        C[i] = A[i] - B[i];
    }

    // Exibir a matriz C
    printf("Matriz C: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }
    return 0;
}
