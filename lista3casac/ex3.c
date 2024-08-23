#include<stdio.h>

int main()
{
    int n;
    n=1;
    
    while(n<=20){
   	 if (n%2==0) {
   		 printf("O número é par: %i \n", n);
   	 }
   	 else{
   	 	printf(" O número é ímpar: %i \n ", n);
   	 }
    n = n+1;
    }

    return 0;
}
