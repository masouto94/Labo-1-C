#include <stdio.h>


int Get_Cadena()
{
    char cadena[6]; // Aquí alojaremos el valor leído
    int indice= 0;

    printf("Escribe tu nombre:\n");
//    gets(cadena);
    char letra='_';
    scanf("%c",&letra);
    printf("Tu nombre es es: %d\n", letra);


    printf("For \n");

    printf("Largo '%d'\n", sizeof(cadena));
    for (indice = 0; indice < sizeof(cadena); indice++)
    {
    char actual = cadena[indice];
    printf("Tenemos el caracter '%c'\n", actual);
    }

    /*
    printf("While \n");
    //printf("'\\0' : %d\n", '\0');
    indice= 0;

    while (cadena[indice] != '\0')
    {
      char actual = cadena[indice];
      printf("Tenemos el caracter '%c'\n", actual);
      indice++;
    }

    */

    return 0;

}



