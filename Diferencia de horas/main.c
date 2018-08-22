#include <stdio.h>
#include <stdlib.h>

int difenrenciaHoras(int a, int b)
{
    int devolver;
    devolver = a - b;
    if(devolver < 0){
        devolver = devolver * -1;
        return devolver;
    }
    else{
        return devolver;
    }
}

int main()
{
    int Hora1, Hora2, D;
    printf("Ingrese dos horas en formato HHMMss\n");
    printf("Ingrese primera hora : ");
    scanf("%i", &Hora1);
    printf("Ingrese segunda hora : ");
    scanf("%i", &Hora2);

    if((Hora1 && Hora2) <= 240000){
        D = difenrenciaHoras(Hora1, Hora2);
        printf("La diferencia es : %i hora:%i minuto: %i segundos", (D/10000), (D%10000)/100, (D%10000)%100);
    }
    else{
        printf("Los valores de la hora no pueden ser mayores a 24:00:00");
    }

    return 0;
}
