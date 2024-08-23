#include<stdio.h>
#include<math.h>

int main()
{
	int n, e, c;
	
	c=1;
    n=1;
    
    while(c<=500){
        if(n%2==0){
            printf("%i \n", n);
        }
    n=n+c;
    c=c+1;
    }
	
}
