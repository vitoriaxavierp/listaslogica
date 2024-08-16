#include<stdio.h>

int main() {
    float m;
    printf("Digite o número do mês de 1 a 12:");
    scanf("%f", &m);

    if(m==1){
        printf("O mês é Janeiro");
    }
    else{
        if(m==2){
            printf("O mês é Fevereiro");
        }
        else{
            if(m==3){
                printf("O mês é Março");
            }
            else{
                if(m==4){
                    printf("O mês é Abril");
                }
                else{
                    if(m==5){
                        printf("O mês é Maio");
                    }
                    else{
                        if(m==6){
                            printf("O mês é Junho");
                        }
                        else{
                            if(m==7){
                                printf("O mês é Julho");
                            }
                            else{
                                if(m==8){
                                    printf("O mês é Agosto");
                                }
                                else{
                                    if(m==9){
                                        printf("O mês é Setembro");
                                    }
                                    else{
                                        if(m==10){
                                            printf("O mês é Outubro");
                                        }
                                        else{
                                            if(m==11){
                                                printf("O mês é Novembro");
                                            }
                                            else{
                                                if(m==12){
                                                    printf("O mês é Dezembro");
                                                }
                                                else{
                                                    printf("O número é inválido");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}