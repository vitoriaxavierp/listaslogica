#include<stdio.h>

int main() {
    float c;
    printf("Digite o curso de 1 a 5:");
    scanf("%f", &c);

    if(c==1){
        printf("O curso é Engenharia");
    }
    else{
        if(c==2){
            printf("O curso é Edificações");
        }
        else{
            if(c==3){
                printf("O curso é Sis. Eletricos");
            }
            else{
                if(c==4){
                    printf("O curso é Turismo");
                }
                else{
                    if(c==5){
                        printf("O curso é DS");
                    }
                    else{
                        printf("O curso é inválido");
                    }
                }
            }
        }
    }

}