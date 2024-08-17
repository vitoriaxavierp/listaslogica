#include <stdio.h>

int main() {
    float n, nc, d, d1;
   printf("Digite o número:");
   scanf("%f", &n);
   
   printf("Digite o número chave:");
   scanf("%f", &nc);
   
   d=n-nc;
   
   if (d>0){
       printf("A diferença é: %f", d);
   }
   else{
    d1 = d*-1;
       printf("A diferença é: %f", d1);
   }
    return 0;
}