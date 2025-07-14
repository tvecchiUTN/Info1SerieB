#include <stdio.h>
#include "comun.h"

// Funciones para determinar propiedades de números y realizar cálculos matemáticos
int positivo(int num)
{
    int ret = 0;

    if(num > 0)
    {
        ret = 1;
    }
    return ret;
}

int positivoCero(int num)
{
    int ret = 0;

    if(num >= 0)
    {
        ret = 1;
    }

    return ret;
}
