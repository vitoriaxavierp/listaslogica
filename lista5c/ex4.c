#include <stdio.h>

void ordenarCrescente(int arr[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int A[12], B[12], C[12];

    for (int i = 0; i < 12; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 12; i++) {
        printf("Digite o elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    ordenarCrescente(A, 12);
    ordenarCrescente(B, 12);

    for (int i = 0; i < 12; i++) {
        C[i] = A[i] + B[i];
    }

    ordenarCrescente(C, 12);

    printf("Matriz C (soma de A e B) em ordem crescente: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
