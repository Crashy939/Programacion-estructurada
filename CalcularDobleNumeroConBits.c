#include <stdio.h>
#include <string.h>

void DoblarNumero(int a)
{
    int resultado;
    resultado = a << 1;
    printf("El doble del número es: %i\n", resultado);
}

int main()
{   
    char repetir[3];
    int numero;

    do
    {
        printf("Pon un número: ");
        scanf("%i", &numero);

        // Consumir el salto de línea sobrante después de scanf
        getchar();  // Esto lee el salto de línea pendiente

        DoblarNumero(numero);
        printf("¿Desea repetir? (S/s para sí, cualquier otra tecla para no): ");
        fgets(repetir, sizeof(repetir), stdin);
        repetir[strcspn(repetir, "\n")] = 0; // Eliminar el salto de línea

    } while((strcmp(repetir, "S") == 0) || (strcmp(repetir, "s") == 0));

    return 0;
}
