#include<stdio.h>

int main() {
    float v, v2;
    printf("Digite o primeiro valor:");
    scanf("%f", &v);

    printf("Digite o segundo valor:");
    scanf("%f", &v2);

    if(v>v2){
        printf("A diferença é: %f", v-v2);
    }
    else{
        if(v2>v){
            printf("A diferença é: %f", v2-v);
        }
        else{
            printf("Os valores são iguais.");
        }
    }
    

}