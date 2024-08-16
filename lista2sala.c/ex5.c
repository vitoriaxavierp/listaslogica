#include<stdio.h>

int main() {
    int n1, n2, n3;
    printf("Digite o valor de n1: ");
    scanf("%i", &n1);
    
    printf("Digite o valor de n2: ");
    scanf("%i", &n2);
    
    printf("Digite o valor de n3: ");
    scanf("%i", &n3);

    if (n1 <= n2 && n2 <= n3) {
        printf("Valores em ordem crescente: %i, %i, %i", n1, n2, n3);
    } else if (n1 <= n3 && n3 <= n2) {
        printf("Valores em ordem crescente: %i, %i, %i", n1, n3, n2);
    } else if (n2 <= n1 && n1 <= n3) {
        printf("Valores em ordem crescente: %i, %i, %i", n2, n1, n3);
    } else if (n2 <= n3 && n3 <= n1) {
        printf("Valores em ordem crescente: %i, %i, %i", n2, n3, n1);
    } else if (n3 <= n1 && n1 <= n2) {
        printf("Valores em ordem crescente: %i, %i, %i", n3, n1, n2);
    } else {
        printf("Valores em ordem crescente: %i, %i, %i", n3, n2, n1);
    }

    return 0;
}
