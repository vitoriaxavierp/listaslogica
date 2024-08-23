#include<stdio.h>
#include<math.h>

int main()
{
	float n, a, m;
	
	a=1;
	n=3;
	m=1;
	
	printf("%f \n", a);
	
	while(m<=15){
	    printf("%f \n", pow(n, m));
	    m=m+1;
	}
}
