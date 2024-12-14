#include <stdio.h>

void ordenarCrescente(float arr[], int tamanho) {
    float temp;
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

int pesquisar(float arr[], int tamanho, float valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    float notas[40];

    for (int i = 0; i < 40; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    ordenarCrescente(notas, 40);

    printf("Notas em ordem crescente: ");
    for (int i = 0; i < 40; i++) {
        printf("%.2f ", notas[i]);
    }

    float valor;
    printf("\nDigite a nota que deseja pesquisar: ");
    scanf("%f", &valor);

    int indice = pesquisar(notas, 40, valor);
    if (indice != -1) {
        printf("Nota encontrada na posição %d.\n", indice);
    } else {
        printf("Nota não encontrada.\n");
    }

    return 0;
}
