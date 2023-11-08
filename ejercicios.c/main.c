#include <stdio.h>

int main(){
    int a,b;
    int suma, resta , mult;
    float division;

    printf("Ingrese el 1er valor: ");
    scanf("%d",&a);

    printf("Ingrese el 2do valor: ");
    scanf("%d", &b);

    suma=(a+b);
    resta=(a-b);
    mult=(a*b);
    division=(a/b);

    printf("El resultado de la suma es: %d\n",suma);
    printf("El resultado de la resta es: %d\n",resta);
    printf("El resultado de la multipliacion es: %d\n",mult);
    printf("El resultado de la division es: %f\n",division);

    return 0;
}