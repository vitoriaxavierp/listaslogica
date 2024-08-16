#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, r, d, x1, x2;
    printf("digite o valor do primeiro valor:");
    scanf("%i", &a);
    printf("digite o valor do segundo valor:");
    scanf("%i", &b);
    printf("digite o valor do terceiro valor:");
    scanf("%i", &c);

    d = b * b - 4 * a * c;
    r =pow(d, 0.5);

    if (d>=0){
    x1 = (-(b)+(r))/(2*a);
    x2 = (-(b)-(r))/(2*a);
    printf("Os valores são: %i, %i", x1, x2);
   }
    else{
        printf("Não foi possível calcular");
    }
    return 0;
}