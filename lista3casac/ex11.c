#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite a tabuada: ");
    scanf("%i", &a);
    
    b=1;
    
    while(b<=10){
        printf("%i \n", a*b);
        b = b+1;
    }

    return 0;
}
