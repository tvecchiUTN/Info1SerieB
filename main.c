#include <stdio.h>
#include <math.h>
#include "funciones.h"
#include "comun.h"

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;

    printf("Primero: ");
    scanf("%d", &numero1);
    printf("Segundo: ");
    scanf("%d", &numero2);
    printf("Tercero: ");
    scanf("%d", &numero3);


    int paridad = par(numero1);
    int inparidad = impar(numero1);
    int fRango = rango(numero1);
    int fDivisible = divisible(numero1, numero2);
    int fCuadrado = cuadrado(numero1);
    int cubo = cuboEnte(numero1);
    int areaRec = areaRecta(numero1, numero2);
    int areaCirc = circulo(numero1);
    int circun = circunferencia(numero1);
    int pot = potencia(numero1, numero2);
    int inRange = dentroRango(numero1, numero2, numero3);
    int xy = cuadrante(numero1, numero2);
    int may = mayor(numero1, numero2, numero3);
    int hip = hipotenusa(numero1, numero2);
    int tria = triangulo(numero1, numero2);

    printf("El valor es: %d\n", paridad);
    printf("El valor es: %d\n", inparidad);
    printf("El valor es: %d\n", fRango);
    printf("El valor es: %d\n", fDivisible);
    printf("El valor es: %d\n", fCuadrado);
    printf("El valor es: %d\n", cubo);
    printf("El valor es: %d\n", areaRec);
    printf("El valor es: %d\n", areaCirc);
    printf("El valor es: %d\n", circun);
    printf("El valor es: %d\n", pot);

    printf("El valor es: %d\n", inRange);
    printf("El valor es: %d\n", xy);
    printf("El valor es: %d\n", may);
    printf("El valor es: %d\n", hip);
    printf("El valor es: %d\n", tria);

    return 0;
}


