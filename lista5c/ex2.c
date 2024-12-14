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

int pesquisar(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[8], B[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }


    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * 5;
    }


    ordenarCrescente(B, 8);

    printf("Matriz B em ordem crescente: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }

    int valor;
    printf("\nDigite o valor a ser pesquisado na matriz B: ");
    scanf("%d", &valor);

    int indice = pesquisar(B, 8, valor);
    if (indice != -1) {
        printf("Valor encontrado na posição %d.\n", indice);
    } else {
        printf("Valor não encontrado.\n");
    }

    return 0;
}
