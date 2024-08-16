#include<stdio.h>

int main (){
    int a, b;
    printf("Digite o primero valor:");
    scanf("%i", &a);
    printf("Digite o segundo valor:");
    scanf("%i", &b);

    printf("Os valores divisíveis por 4 e 5 são:");

    if((a%4==0) || (a%5==0)){
        printf(" %i", a);
    }
    if((b%4==0) || (b%5==0)){
        printf(" %i", b);
    }
    else{
        printf("Nenhum dos numeros é divisível por 4 ou 5.");
    }
}