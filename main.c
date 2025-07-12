#include <stdio.h>
#include "funciones.h"

int main()
{
    int numero = 0;
    scanf("%d", &numero);
/**
    printf("Es par? ");
    if(par(numero))
    {
        printf("si\n");
    }else{
        printf("no\n");
    }
**/

    printf("%d\n", cuadrado(numero));

    return 0;
}


