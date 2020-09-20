#include <stdlib.h>
#include <stdio.h>


int main(){
        char op;

        do{
                printf("1. Arreglo de enteros\n");
                printf("2. Mostrar cadena n veces\n");
                printf("3. Ragistrar personajes\n");
                printf("0. Salir\n");

                printf("\n\nElige una opcion: ");
                scanf("%c", &op);

                fflush(stdin);

                switch (op)
                {
                case '1':
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