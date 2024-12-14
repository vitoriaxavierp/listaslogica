#include <stdio.h>

void ordenarDecrescente(int arr[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

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
        C[20 + i] = B[i];
    }

    ordenarDecrescente(C, 50);

    printf("Matriz C em ordem decrescente: ");
    for (int i = 0; i < 50; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
