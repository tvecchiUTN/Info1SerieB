#include <stdio.h>
#include <time.h>

int retraso(int tiempo);

int main(void)
{
    int tiempo = 0;
    tiempo = retraso(60);
    if(tiempo)
    {
        printf("Han pasado 10 segundos\n");
    }
    return 0;
}

int retraso(int tiempo)
{
    time_t inicial;
    inicial = time(NULL);
    long int final = inicial + tiempo;
    while(inicial < final){
        inicial = time(NULL);
    }
    return 1;
}
