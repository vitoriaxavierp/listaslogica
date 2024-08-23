#include<stdio.h>

int main()
{
	int n;
	
	n=1;
	
	while(n<200){
	    if(n%4==0){
	        printf("%i \n", n);
	    }
	n = n+1;
	}
	return 0;
}
