#include<stdio.h>

int main(){
    float n, n2, m, ne, nv;
    n = printf("Digite a primeira nota:");
    scanf("%f", &n);

    n2 = printf("Digite a segunda nota:");
    scanf("%f", &n2);

    m = (n+n2)/2;

    if(m>=6.0) {
        printf("Você foi aprovado!", "%.2f", m);
    }
    else{
        ne = printf("Digite a nota do exame:");
        scanf("%f", &ne);

        nv = (ne+m)/2;

        if(ne>=5.0){
        printf("Você foi aprovado!", "%.2f", nv);
        }
        else{
            printf("Você foi reprovado!", "%.2f", nv);
        }
    }

    return (0);
}