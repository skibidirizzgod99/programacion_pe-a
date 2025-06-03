//Diego Armando Castilleja ISC
//Perimetro o Area de un circulo
#include <cstdio>

int main() 
{
    double radio;
    char opcion;

    printf("ingresa el radio: ");
    scanf("%lf", &radio);

    printf("ingresa 'a' para area o 'p' para perimetro: ");
    scanf(" %c", &opcion);  

    if (opcion == 'a' || opcion == 'A') {
        printf("Area: %.4f\n", 3.1416 * radio * radio);
    } else if (opcion == 'p' || opcion == 'P') {
        printf("Perimetro: %.4f\n", 2 * 3.1416 * radio);
    } else {
        printf("opcion no valida.\n");
    }

    return 0;
}
