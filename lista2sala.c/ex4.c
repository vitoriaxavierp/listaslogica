#include<stdio.h>

int main (){
    float a, b, c;
    printf("Digite o primerio lado:");
    scanf("%f", &a);
    printf("Digite o segundoo lado:");
    scanf("%f", &b);
    printf("Digite o terceiro lado:");
    scanf("%f", &c);

    if((a<(b+c)) && (b<(c+a)) && (c<(a+b))){
        if((a==b) && (b==c) && (c==a)){
            printf("O triângulo é equilátero");
        }
        else{
            if( a==b || b==c || c==a){
                printf("O triângulo é isóceles");
            }
            else{
                printf("O triângulo é escaleno");
            }
        }
    }
    else{
        printf("Não é triângulo");
    }
}