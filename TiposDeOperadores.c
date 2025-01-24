#include <stdio.h>
#include <string.h>

void DoblarNumero(int a)
{
    int resultado;
    resultado = a << 1;
    printf("El doble del número es: %i\n", resultado);
}
void SacarRaizAproximada()
{ //Método de Newton: y = (x + a / x) / 2
    double y = 0.0; //Valor aproximado
    double a = 0.0; //Valor del usuario
    double x = 0.0; //Valor aproximado del usuario
    double error = 0.0; //Error
    double e = 0.00001; //El programa va a terminar cuando el error sea igual o menor a este número.
    int i; //Contador
    printf("Introduce un número: ");
    scanf("%lf", &a);
    printf("Introduce una aproximación: ");
    scanf("%lf", &x);
    getchar();

    do
    {
        y = (x + a / x) / 2;
        i++;
        error = y - x;
        x = y;
    }
    while(e < error);
    printf("La raíz es: %lf\n", y);
}
int DeterminarSiNumeroEsPar(int a)
{
    if(a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void NumeroAlCuadrado(int a)
{
    int resultado = (a << 2) + (a << 0);
    printf("El cuadrado del número es: %i\n", resultado);
}

int main()
{  
    char repetir[50];
    int numero, opcion;
    do
    {
        printf("¿Qué desea hacer?\n1- Calcular el doble de un número\n2- Calcular la raíz cuadrada aproximada de un número\n3- Verificar si un número es par o impar\n4- Calcular el cuadrado de un número\n");
        scanf("%i", &opcion);
        switch(opcion)
        {
            case 1:
                printf("Pon un número: ");
                scanf("%i", &numero);
                getchar();  // Esto lee el salto de línea pendiente
                DoblarNumero(numero);
                break;
            case 2:
                SacarRaizAproximada();
                break;
            case 3:
                int r;
                printf("Introduce un número: ");
                scanf("%i", &numero);
                getchar();
                r = DeterminarSiNumeroEsPar(numero);
                if(r == 1)
                {
                    printf("El número es par.\n");
                }
                else
                {
                    printf("El número es impar.\n");
                }
                break;
            case 4:
                printf("Introduce un número: ");
                scanf("%i", &numero);
                getchar();
                NumeroAlCuadrado(numero);
                break;
            default:
            printf("Lo siento, pero debe elegir entre uno y cuatro, intente nuevamente por favor.\n");
        }

        printf("¿Desea repetir? (S/s para sí, cualquier otra tecla para no): ");
        fgets(repetir, sizeof(repetir), stdin);
        repetir[strcspn(repetir, "\n")] = 0; // Eliminar el salto de línea

    }
    while((strcmp(repetir, "S") == 0) || (strcmp(repetir, "s") == 0));

    return 0;
}
