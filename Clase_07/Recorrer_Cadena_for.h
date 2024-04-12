#include <stdio.h>

char replaceOs(char original, char replacement){
    if (original == 'o' || original == 'O'){
        return replacement;
    }
    return original;
}
int Recorrer_Cadena_for()
{
    char cadena[]= "Que miras bobo"; // Aquí alojaremos el valor leído
    int indice= 0;
    char actual;


    printf("Largo unitario '%d'\n", sizeof(cadena) / sizeof(cadena[0]));

    for (indice = 0; cadena[indice] != 0; indice++)
    {

    printf("Tenemos el caracter '%c'\n", replaceOs(cadena[indice], ' '));
    }
//    int arrayInts[5];
//    for (int i=0; i < 5; i++){
//        arrayInts[i] = 0;
//        printf("Indice %d es %d\n", i, arrayInts[i]);
//    }


    return 0;

}
