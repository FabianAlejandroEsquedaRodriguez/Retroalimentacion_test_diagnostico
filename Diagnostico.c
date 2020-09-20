#include <stdlib.h>
#include "personajes.h"
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

void mostrar(int n, char cadena[]){
    printf("\n\nMostrar la cadena %i veces\n\n", n);
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }   
}

int main(){
        char op;
        char cadena[20]; int n;

        do{
                printf("1. Arreglo de enteros\n");
                printf("2. Mostrar cadena n veces\n");
                printf("3. Registrar personajes\n");
                printf("4. Mostrar personajes\n");
                printf("0. Salir\n");

                printf("\n\nElige una opcion: ");
                scanf("%c", &op);
                system("cls");

                fflush(stdin);

                switch (op)
                {
                case '1': arreglo_enteros(); printf("\n\n"); system("pause"); system("cls");
                    break;

                case '2': printf("Escribe una cadena de hasta 20 caracteres: ");
                            fflush(stdin);
                            fgets(cadena, sizeof(cadena), stdin); 
                         printf("N: "); scanf("%i", &n);
                        mostrar(n, cadena); printf("\n\n"); system("pause"); system("cls");
                    break;

                case '3': capturar_personajes();//La cual esta en el header "personajes.h"
                            printf("\n\n"); system("pause"); system("cls");
                    break;
                
                case '4': mostrar_personajes();//La cual esta en el header "personajes.h"
                            printf("\n\n"); system("pause"); system("cls");
                    break;
                    
                default:
                    break;
                }

        }while(op != '0');


    return 0;
}