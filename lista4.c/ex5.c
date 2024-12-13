#include <stdio.h>

int main() {
    int A[20], B[30], C[50];

    for (int i = 0; i < 20; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 30; i++) {
        printf("Digite o elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 20; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < 30; i++) {
        C[i + 20] = B[i];
    }


    printf("Matriz C: ");
    for (int i = 0; i < 50; i++) {
        printf("%d ", C[i]);
    }
    return 0;
}
