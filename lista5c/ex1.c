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
    int A[12];

    for (int i = 0; i < 12; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    ordenarDecrescente(A, 12);

    printf("Matriz A ordenada em ordem decrescente: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
