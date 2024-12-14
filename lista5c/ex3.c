#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

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
    int A[15], B[15];

    for (int i = 0; i < 15; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < 15; i++) {
        B[i] = fatorial(A[i]);
    }

    ordenarCrescente(B, 15);

    printf("Matriz B (fatorial de A) em ordem crescente: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
