#include<stdio.h>

int main (){
    int a, b, c;
    printf("Digite o primero valor:");
    scanf("%i", &a);
    printf("Digite o segundo valor:");
    scanf("%i", &b);
    printf("Digite o terceiro valor:");
    scanf("%i", &c);

    printf("Os valores divisíveis por 2 e 3 são:");

    if((a%2==0) && (a%3==0)){
        printf(" %i", a);
    }
    if((b%2==0) && (b%3==0)){
        printf(" %i", b);
    }
    if((c%2==0) && (c%3==0)){
        printf(" %i", c);
    }
    else{
        printf("Nenhum dos numeros é divisível poe 2 e 3 ao mesmo tempo.");
    }
}