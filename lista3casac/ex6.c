#include <stdio.h>

int main() {
	int n;
	for(n=0; n<=20; n=n+1){
    	if(n%2==0){
        	printf("O valor é par: %i \n", n);
    	}
    	else{
        	printf("O valor é ímpar: %i \n", n);
    	}
	}
	return 0;
}
