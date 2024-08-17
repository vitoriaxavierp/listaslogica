#include <stdio.h>

int main() {
    int n;
   printf("Digite o número:");
   scanf("%i", &n);
   
   if (n%2==0){
       printf("O número é par","%i", n);
   }
   else{
       printf("O número é ímpar","%i", n);
   }
    return 0;
}