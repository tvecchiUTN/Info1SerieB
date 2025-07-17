#include <stdio.h>
#include <math.h>
#include "funciones.h"
#include "comun.h"

#define M_PI 3.14159265358979323846
#define VERDADERO 1
#define FALSO 0
#define ERROR -1

//Ejercicio 1.a
int par(int num)
{
    int ret = 0;

    // Si el numero es par, el resto de dividirlo por 2 es 0
    if(num%2 == 0)
    {
        ret = 1;
    }

    return ret;
}

//Ejercicio 1.b
int impar(int num)
{
    int ret = 0;

    // Si el numero es impar, el resto de dividirlo por 2 es 1
    if(par(num) == 0){
        ret = 1;
    }

    return ret;
}

//Ejercicio 2
int rango(int num)
{
    int ret = 0;

    // Si el numero esta entre 100 y 500, devuelve 1
    // Si no, devuelve 0
    if(num >= 100 && num<= 500)
    {
        ret = 1;
    }

    return ret;
}

//Ejercicio 3
int divisible(int divPrim, int divSeg)
{
    int ret = 0;
    //Evalua si el segundo numero es divisible por el primero
    if(divSeg%divPrim == 0)
    {
        ret = 1;
    }

    return ret;
}

//Ejercicio 4
int cuadrado(int num)
{
    //Calcula el cuadrado de un numero
    int ret = num * num;

    return ret;
}

//Ejercicio 5.a
int cuboEnte(int num)
{
    //Calcula el cubo de un numero entero
    int ret = num * num * num;

    return ret;
}

//Ejercicio 5.b
float cuboFlota(float num)
{
    //Calcula el cubo de un numero flotante osea decimal
    float ret = num * num * num;

    return ret;
}

//Ejercicio 6
int areaRecta(int base, int altura)
{
    // Calcula el area de un rectangulo
    // Si alguno de los dos valores es negativo, devuelve -1
    int ret = base * altura;
    // Verifica que los valores sean positivos o cero
    if (!positivoCero(ret))
    {
        ret = -1;
    }

    return ret;
}

//Ejercicio 7.a
/*
int circulo(int radio)
{
    int ret = 0;

    ret = M_PI * radio * radio;

    return ret;
}
*/
//Ejercicio 7.b
int circulo(int radio)
{
    // Calcula el area de un circulo
    // Si el radio es negativo, devuelve -1
    int ret = -1;

    // Verifica que el radio sea positivo o cero
    // Si es positivo, calcula el area
    if(positivoCero(radio))
    {
        ret = M_PI * radio * radio;
    }


    return ret;
}

//Ejercicio 8
int circunferencia(int radio)
{
    int ret = -1;

    // Calcula la circunferencia de un circulo
    // Si el radio es negativo, devuelve -1
    if(positivo(radio))
    {
        int diametro = radio * 2;
        ret = M_PI * diametro;
    }
    return ret;
}

//Ejercicio 9
int potencia(int base, int exp)
{
    int ret = -1;
    int aux = 1;

    // Calcula la potencia de un numero

    if(positivo(exp))
    {
        for(int i = 0; i<exp; i++)
        {
            aux = aux * base;
        }
        ret = aux;
    }

    // Si la base es distinta de 0 y el exponente es 0, devuelve 1
    if((exp == 0) && (base != 0))
    {
        ret = 1;
    }

    return ret;
}


//Ejercicio 10
int dentroRango(int eval, int extInicial, int extFinal)
{
    int ret = 0;
    // Verifica si el numero esta dentro del rango
    // Si el numero es mayor que el extremo inicial y menor que el extremo final, devuelve 1
    // Si el extremo final es mayor que el extremo inicial, devuelve -1
    if( (eval > extInicial) && (eval < extFinal) )
    {
        ret = 1;
    }

    if(extFinal > extInicial)
    {
        ret = -1;
    }

    return ret;
}


//Ejercicio 11
int cuadrante(int x, int y)
{
    int ret;
    // Determina en que cuadrante se encuentra el punto (x, y)
    // Retorna 0 si el punto es el origen (0, 0)

    //Cuadrantes
    if((x==0) && (y==0))
    {
        ret = 0;
    }
    else if((x>0) && (y>0))
    {
        ret = 1;
    }
    else if((x>0) && (y<0))
    {
        ret = 2;
    }
    else if((x<0) && (y<0))
    {
        ret = 3;
    }
    else if((x<0) && (y>0))
    {
        ret = 4;
    }

    //Verifica si el punto esta en los ejes
    // Si el punto esta en el eje X o Y, retorna un valor especifico
    //Ejes
    if((x>0) && (y==0))
    {
        ret = 12;
    }
    else if((x==0) && (y<0))
    {
        ret = 23;
    }
    else if((x<0) && (y==0))
    {
        ret = 34;
    }
    else if((x==0) && (y>0))
    {
        ret = 41;
    }

    return ret;
}

//Ejercicio 12
int mayor(int num1, int num2, int num3)
{
    int ret = num3;

    // Determina el mayor de tres numeros
    // Si el primer numero es mayor que el segundo y el tercero, lo asigna como mayor
    // Si el segundo numero es mayor que el primero y el tercero, lo asigna como mayor
    // Si el tercero es mayor que los otros dos, lo asigna como mayor.

    //Dicho en otras palabras, busca que numero es mayor
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            ret = num1;
        }
    }else
    {
        if(num2 > num3)
        {
            ret = num2;
        }
    }

    return ret;
}

//Ejercicio 13
int hipotenusa(int base, int altura)
{
    // Calcula la hipotenusa de un triangulo rectangulo

    double aux = (double)cuadrado(base) + (double)cuadrado(altura);

    double ret = sqrt(aux);

    return (int) ret;
}

//Ejercicio 15
int triangulo(int base, int altura)
{
    // Calcula el area de un triangulo
    // Si alguno de los dos valores es negativo, devuelve -1
    int ret = -1;
    if(!positivo(base))
    {
        base = base * (-1);
    }else if(!positivo(altura))
    {
        altura = altura * (-1);
    }

    //Esto significa que si uno de los dos numeros es 0
    //NO se ejecuta la condicion
    if(base && altura)
    {
        ret = (base * altura) / 2;
    }

    return ret;
}
