#include <stdio.h>

int main() {
    float n, nc, d;
   printf("Digite o número:");
   scanf("%f", &n);
   
   printf("Digite o número chave:");
   scanf("%f", &nc);
   
   d=n-nc;
   
   if (d>0){
       printf("A diferença é: %f", d);
   }
   else{
       printf("A diferença é: %f", d*-1);
   }
    return 0;
}