#include <stdio.h>

char replaceOs(char original, char replacement){
    if (original == 'o' || original == 'O'){
        return replacement;
    }
    return original;
}
int Recorrer_Cadena_for()
{
//    char cadena[]= "Que miras bobo"; // Aquí alojaremos el valor leído
//    int indice= 0;
//    char actual;

    int numeros[] = {1,2,3,4,5,6,7,8,9,19};
    int maximo=0;
    int range = sizeof(numeros) / sizeof(numeros[0]);
    printf("Largo unitario '%d'\n", range);
    for (int i = 0; i < range; i++)
    {
        if(numeros[i] > maximo){
            maximo = numeros[i];
        }
    //printf("Tenemos el caracter '%c'\n", replaceOs(cadena[indice], ' '));
    printf("Tenemos el numero'%d'\n", numeros[i]);
    }
    printf("Tenemos el numero maximo '%d'\n", maximo);

    return 0;

}
