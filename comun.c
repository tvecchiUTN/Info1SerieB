#include <stdio.h>
#include <math.h>
#include "comun.h"

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
