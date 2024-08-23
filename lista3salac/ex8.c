#include<stdio.h>
#include<math.h>

int main()
{
	int n, c, x, armazenar, salvar;
	
	n=1;
	c=0;
	x=0;
	armazenar=0;
	salvar=0;
    
    printf("%i %i \n", x, n);
    
    while(c<=15){
        armazenar=x+n;
        printf("%i \n", armazenar);
        
        x = n;
        n=armazenar;
        c=c+1;
    }
}
