#include<stdio.h>

int doWhileLoop(){

    int edad;
    float promedio_edad;
    int contador_asistentes=0;
    int acumulador_edad=0;
     //Inicializo la variable de control (edad) antes de comenzar el ciclo.

    do{
//        int contador_asistentes=0;
//        int acumulador_edad=0;
        printf("Para ingresar una edad del asistente\nPara finalizar ingrese un valor igual %c menor a cero\n",162);
        scanf("%d", &edad);

        contador_asistentes++;
        acumulador_edad += edad;

    } while (edad > 0);
        printf("Asistentes %d", contador_asistentes);
        printf("Edad acumulada %d", acumulador_edad);


    //contador_asistentes--;
    //printf("contador_asistentes = %d\n",contador_asistentes);


    if (contador_asistentes > 0) {
        promedio_edad = (float)acumulador_edad  /    contador_asistentes;
        printf("El promedio de edades es %.2f\n", promedio_edad);
        }
    else printf("No hubo asistentes a la clase hoy\n");

return 0;
}

