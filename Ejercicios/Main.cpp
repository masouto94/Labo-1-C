#include <stdio.h>
#include <iostream>
#include "1.Entrada_salida/Ejercicio_1.h"
#include "1.Entrada_salida/Ejercicio_2.h"
#include "1.Entrada_salida/Ejercicio_15.h"
#include "1.Entrada_salida/Ejercicio_16.h"
#include "1.Entrada_salida/Ejercicio_19.h"
#include "0.Hola_mundo/HelloWorld.h"
#include "0.Hola_mundo/PruebaParams.h"
int main(){
    int years;
    printf("Ingrese su edad en anios cumplidos\n");
    scanf("%d", &years);
    int yearsAsDays = Ejercicio_15(years);
    printf("%d anios son %d dias\n", years, yearsAsDays);
    float precioPorKg = 12.99;
    float cantidad = 2.5;
    float total = Ejercicio_16(precioPorKg,cantidad);
    printf("El precio por kilo es %.2f Compraste %.2f. El total es %.2f\n",precioPorKg,cantidad,total);
    float area = 40;
    double perimeter = Ejercicio_19(area);
    printf("El area es %.2f y el perimetro es %.2f\n", area,perimeter);
    return 0;
}
