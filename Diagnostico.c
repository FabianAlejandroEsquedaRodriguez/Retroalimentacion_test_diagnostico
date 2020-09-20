#include <stdlib.h>
#include <stdio.h>

//Funciones
void arreglo_enteros(){
    int enteros[5];
    int suma = 0;
    float promedio;

    printf("Introduce numeros enteros al arreglo\n\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("Posicion [%i]: ", i);
        scanf("%i", &enteros[i]);
    }
    printf("\n\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("[%i] ", enteros[i]);
        //Suma iterativa
        suma += enteros[i];
    }
    printf("\n\nLa suma es: %i", suma);
    printf("\nEl promedio es: %.2f", promedio = suma/5);
}

int main(){
        char op;

        do{
                printf("1. Arreglo de enteros\n");
                printf("2. Mostrar cadena n veces\n");
                printf("3. Ragistrar personajes\n");
                printf("0. Salir\n");

                printf("\n\nElige una opcion: ");
                scanf("%c", &op);
                system("cls");

                fflush(stdin);

                switch (op)
                {
                case '1': arreglo_enteros(); printf("\n\n"); system("pause"); system("cls");
                    break;

                case '2':
                    break;

                case '3':
                    break;
                
                default:
                    break;
                }

        }while(op != '0');


    return 0;
}