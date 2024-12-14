#include <stdio.h>

int pesquisar(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[30], B[30];
    
    for (int i = 0; i < 30; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 30; i++) {
        B[i] = A[i] * A[i] * A[i];
    }

    printf("Matriz B (cubos de A): ");
    for (int i = 0; i < 30; i++) {
        printf("%d ", B[i]);
    }

    int valor;
    printf("\nDigite um valor para pesquisar na matriz B: ");
    scanf("%d", &valor);

    int indice = pesquisar(B, 30, valor);
    if (indice != -1) {
        printf("Valor encontrado na posição %d.\n", indice);
    } else {
        printf("Valor não encontrado.\n");
    }

    return 0;
}
