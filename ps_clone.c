#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main()
{
    // obtener el tiempo actual
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    // cabecera
    printf("PROCESOS EN EJECUCION\n");
    printf("PROCESOS                      ID               PPID              TIME\n");
    fork();
    fork();
    fork();
    printf("Proceso generico            %d               %d            %s\n", getpid(), getppid(),asctime (timeinfo));

    return 0;
}