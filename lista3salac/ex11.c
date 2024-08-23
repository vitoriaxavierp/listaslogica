#include <stdio.h>
#include <limits.h>

int main() {
    int a, b, c, d, e, maior, menor;

    printf("Digite o primeiro valor:");
    scanf("%i", &a);
    
    printf("Digite o segundo valor:");
    scanf("%i", &b);
    
    printf("Digite o terceiro valor:");
    scanf("%i", &c);
    
    printf("Digite o quarto valor:");
    scanf("%i", &d);
    
    printf("Digite o quinto valor:");
    scanf("%i", &e);

    maior = menor = a;

    if(b > maior) {
        maior = b;
    }
    if(b < menor) {
        menor = b;
    }

    if(c > maior) {
        maior = c;
    }
    if(c < menor) {
        menor = c;
    }

    if(d > maior) {
        maior = d;
    }
    if(d < menor) {
        menor = d;
    }

    if(e > maior) {
        maior = e;
    }
    if(e < menor) {
        menor = e;
    }

    printf("O maior valor é: %i\n", maior);
    printf("O menor valor é: %i\n", menor);

    return 0;
}
