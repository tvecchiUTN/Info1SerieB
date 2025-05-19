#include <stdio.h>
#include <time.h>

int retraso(int tiempo);

int main(void)
{
    int tiempo = 0;

    tiempo = retraso(10);

    if(tiempo)
    {
        printf("Han pasado 10 segundos");
    }
    return 0;
}

int retraso(int tiempo)
{
    int ret;
    time_t inicial;

    inicial = time(NULL);
    long int final = inicial + tiempo;

    printf("Inicio");

    printf("Tiempo: %ld", final);

    ret = 1;

    printf("Final");

    return ret;
}
