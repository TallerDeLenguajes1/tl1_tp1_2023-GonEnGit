#include <stdio.h>

int main(){

    int numero = 21;
    int *puntero = &numero;

    printf("\nHola Mundo!\n\n");
    printf("La direccion de memoria guardada en el puntero es %p\n\n",puntero);
    printf("La direccion de memoria de mi variable es %p\n\n",&numero);
    printf("La direccion de memoria del puntero es %p\n\n",&puntero);
    printf("La variable ocupa %d bytes de memoria\n\n",sizeof(numero));
    printf("El puntero contiene el numero %d\n\n",*puntero);

    return 0;
}