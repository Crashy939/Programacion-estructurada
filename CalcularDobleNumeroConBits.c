//Calcular el doble del número usando operadores de desplazamiento de bits (operadores binarios).
#include <stdio.h>
int main()
{
    int numero, resultado;
    printf("Pon un número: ");
    scanf("%i", &numero);
    resultado = numero << 1;
    printf("El doble del número es: %i\n", resultado);
    return 0;
}