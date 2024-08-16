#include <stdio.h>

int main() {
    float n, d;
    int n1, nf;
    
   printf("Digite sua nota:");
   scanf("%f", &n);
   printf("Digite o apenas o primeiro algarismo da nota (Ex:9):");
   scanf("%i", &n1);
   
   d = n - n1;
   
   if (d<=0.5){
   printf("Sua nota é: %i", n1);
   }
   
   else{
       nf = n1+1;
       printf("Sua nota é: %i", nf);
   }
   
    return 0;
}