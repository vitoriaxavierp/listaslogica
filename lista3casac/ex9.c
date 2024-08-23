#include <stdio.h>

int main() {
	int n;
	n = 1;
	do{
    	if(n%2==0){
        	printf("O valor é par: %i \n", n);
    	}
    	else{
        	printf("O valor é ímpar: %i \n", n);
    	}
	n=n+1;
	}while(n<=20);

	return 0;
}
