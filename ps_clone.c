#include <stdio.h>
#include <unistd.h>

int main()
{
    //cabecera
	printf("PROCESOS EN EJECUCION\n");
    printf("PROCESOS                      ID               PPID              TIME\n");
	printf("Proceso generico            %d               %d             alguna hora\n",getpid(),getppid());
    	
	return 0;
} 