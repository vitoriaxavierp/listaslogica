#include<stdio.h>

int main()
{
	int n;
	printf("Digite um numero menor ou igual a 50: ");
	scanf("%i", &n);
    
	while(n<=250){
        	printf("%i ", n);
	n = n*3;
	}

	return 0;
}
