#include <stdio.h>

int main() {
   float s, ht, nv, a, e, vh, ha, d;
   printf("Digite seu salário:");
   scanf("%f", &s);
   printf("Digite as horas trabalhadas:");
   scanf("%f", &ht);
   
   vh = s/160;
   ha = ht-160;
   e = ha*0.5*vh;
   
   if((s<800) && (ht>160)){
       printf("Seu salário é: %f", s+e);
   }
   else{
       if(s<800){
           printf("Seu salário é: %f", s);
       }
       else{
        if((800<=s<=1600) && (ht>160)){
            nv = s*0.95*0.92+e;
                printf("O salário é: %f", nv);
        }
        else{
            if(800<=s<=1600){
                nv = s*0.95*0.92;
                    printf("O salário é: %f", nv);
            }
            else{
                if((s>1600) && (ht>160)){
                    nv = s*0.85*0.93+e;
                        printf("O salário é: %f", nv);
                }
                else{
                    if(s>1600){
                        nv = s*0.85*0.93;
                            printf("O salário é: %f", nv);
                }
                }
            }
        }
       }
   }
   
   
    return 0;
}