#include<stdio.h>
#include<math.h>

int main()
{
	float n, e;
	
    printf("Digite a base:");
    scanf("%f", &n);
    
    printf("Digite o expoente:");
    scanf("%f", &e);
    
    printf("%f", pow(n, e));
	
}
