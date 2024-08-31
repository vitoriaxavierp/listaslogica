#include <stdio.h>

int main() {
    char n[50];
    float sa, ns;
    float pa = 0.0;

    printf("Digite o nome do funcionário: ");
    scanf("%49s", n);
    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &sa);

    if (sa >= 0 && sa <= 400) {
        pa = 15;
    } else if (sa > 400 && sa <= 700) {
        pa = 12;
    } else if (sa > 700 && sa <= 1000) {
        pa = 10;
    } else if (sa > 1000 && sa <= 1800) {
        pa = 7;
    } else if (sa > 1800 && sa <= 2500) {
        pa = 4;
    } else if (sa > 2500) {
        pa = 0;
    }

    ns = sa + (sa * pa / 100);

    printf("\nNome do funcionário: %s\n", n);
    printf("Percentual de aumento: %.2f%%\n", pa);
    printf("Salário atual: R$ %.2f\n", sa);
    printf("Novo salário: R$ %.2f\n", ns);

    return 0;
}
