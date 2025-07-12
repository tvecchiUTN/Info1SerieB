#include <stdio.h>
#include "funciones.h"

int par(int num)
{
    int ret = 0;

    if(num%2 == 0)
    {
        ret = 1;
    }

    return ret;
}

int impar(int num)
{
    int ret = 0;

    if(par(num) == 0){
        ret = 1;
    }

    return ret;
}

int rango(int num)
{
    int ret = 0;

    if(num >= 100 && num<= 500)
    {
        ret = 1;
    }

    return ret;
}

int divisible(int divPrim, int divSeg)
{
    int ret = 0;

    if(divSeg%divPrim == 0)
    {
        ret = 1;
    }

    return ret;
}

int cuadrado(int num)
{
    int ret = num * num;

    return ret;
}
