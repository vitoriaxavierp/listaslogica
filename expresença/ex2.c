#include <stdio.h>

int main() {
    float valor, s = 0, media;
    int total_elementos = 0;
    float maior = 0, menor = 0;
    int f1c = 0, f2c = 0, f3c = 0, f4c = 0, f5c = 0;
    float f1t = 0, f2t = 0, f3t = 0, f4t = 0, f5t = 0;
    int tp = 0, ti = 0;
    char continuar;

    do {

        printf("Digite um valor: ");
        scanf("%f", &valor);

        s += valor;
        total_elementos++;

        if (total_elementos == 1) {
            maior = menor = valor;
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }

        if (valor < 0) {
            f1c++;
            f1t += valor;
        } else if (valor >= 0 && valor < 15) {
            f2c++;
            f2t += valor;
        } else if (valor >= 15 && valor < 100) {
            f3c++;
            f3t += valor;
        } else if (valor >= 100 && valor < 1000) {
            f5c++;
            f5t += valor;
        } else if (valor >= 1000) {
            f4c++;
            f4t += valor;
        }

        if ((int)valor % 2 == 0) {
            tp++;
        } else {
            ti++;
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    if (total_elementos > 0) {
        media = s / total_elementos;
    } else {
        media = 0;
    }

    printf("\nResultados:\n");
    printf("1. Média aritmética: %.2f\n", media);
    printf("2. Maior elemento: %.2f\n", maior);
    printf("3. Menor elemento: %.2f\n", menor);
    printf("4. Contagem de elementos por faixa:\n");
    printf("   Faixa 1 (Elementos < 0): %d (Total: %.2f)\n", f1c, f1t);
    printf("   Faixa 2 (Elementos >=0 e < 15): %d (Total: %.2f)\n", f2c, f2t);
    printf("   Faixa 3 (Elementos >=15 e < 100): %d (Total: %.2f)\n", f3c, f3t);
    printf("   Faixa 4 (Elementos >= 1000): %d (Total: %.2f)\n", f4c, f4t);
    printf("   Faixa 5 (Elementos >= 100 e < 1000): %d (Total: %.2f)\n", f5c, f5t);
    printf("5. Total de números pares: %d\n", tp);
    printf("6. Total de números ímpares: %d\n", ti);

    return 0;
}
