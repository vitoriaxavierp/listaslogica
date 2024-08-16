#include<stdio.h>

int main(){
    float n, n2, n3, m;
    n = printf("Digite a primeira nota:");
    scanf("%f", &n);

    n2 = printf("Digite a segunda nota:");
    scanf("%f", &n2);

    n3 = printf("Digite a terceira nota:");
    scanf("%f", &n3);

    m = (n+n2+n3)/3;

    if(m>=6.0) {
        printf("Você foi aprovado!", "%.2f", m);
    }
    else{
        printf("Você foi reprovado!", "%.2f", m);
    }

    return (0);
}