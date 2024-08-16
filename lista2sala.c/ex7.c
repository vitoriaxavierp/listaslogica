#include<stdio.h>

int main (){
    int a;
    printf("Digite o valor:");
    scanf("%i", &a);

    if (a>0){
        printf("O valor é: %i", a);
    }
    else{
        printf("O valor é: %i", a*-1);
    }
}