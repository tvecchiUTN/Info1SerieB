#include <stdio.h>
#include <math.h>
#include "funciones.h"
#include "comun.h"

#define VERDADERO 1
#define FALSO 0
#define ERROR -1

//Ejercicio 1.a
int par(int num)
{
    int ret = 0;

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

    if(par(num) == 0){
        ret = 1;
    }

    return ret;
}

//Ejercicio 2
int rango(int num)
{
    int ret = 0;

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

    if(divSeg%divPrim == 0)
    {
        ret = 1;
    }

    return ret;
}

//Ejercicio 4
int cuadrado(int num)
{
    int ret = num * num;

    return ret;
}

//Ejercicio 5.a
int cuboEnte(int num)
{
    int ret = num * num * num;

    return ret;
}

//Ejercicio 5.b
float cuboFlota(float num)
{
    float ret = num * num * num;

    return ret;
}

//Ejercicio 6
int areaRecta(int base, int altura)
{
    int ret = base * altura;

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

    int ret = -1;

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

    if(positivo(exp))
    {
        for(int i = 0; i<exp; i++)
        {
            aux = aux * base;
        }
        ret = aux;
    }

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
    double aux = (double)cuadrado(base) + (double)cuadrado(altura);

    double ret = sqrt(aux);

    return (int) ret;
}

//Ejercicio 15
int triangulo(int base, int altura)
{
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
