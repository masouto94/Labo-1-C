/* Programa para obtener el promedio de calificaciones de una clase mediante una repetici�n controlada por centinela */
#include <stdio.h>

/* la funci�n main inicia la ejecuci�n del programa */
int whileLoopWithCentinel()
{
   int contador;     /* n�mero de calificaciones introducidas */
   int calificacion; /* valor de la calificaci�n */
   int total;        /* suma de las calificaciones */

   float promedio;   /* n�mero con punto decimal para el promedio */

   /* fase de inicializaci�n */
   total    = 0; /* inicializa el total */
   contador = 0; /* inicializa el contador del ciclo */

   /* fase de proceso */
   /* obtiene la primera calificaci�n del usuario */
   printf( "Introduzca la calificacion, -1 para terminar: " ); /* indicador para la entrada */
   scanf( "%d", &calificacion ); /* lee la calificaci�n del usuario */

   /* realiza el ciclo mientras no se introduzca el valor centinela */
   while ( calificacion != -1 ) {
      total = total + calificacion; /* suma calificaci�n a total */
      contador = contador + 1; /* incrementa el contador */

      /* obtiene la siguiente calificaci�n del usuario */
      printf( "Introduzca la calificacion, -1 para terminar: " ); /* indicador para la entrada */
      scanf("%d", &calificacion); /* lee la siguiente calificaci�n */
   } /* fin de while */

   /* fase de terminaci�n */
   /* si el usuario introduce al menos una calificaci�n */
   if ( contador != 0 ) {
 /* calcula el promedio de todas las calificaciones introducidas */
      promedio = ( float ) total / contador; /* evita la truncaci�n */

      /* despliega el promedio con dos d�gitos de precisi�n */
      printf( " El promedio de la clase es: %.2f\n", promedio );
   } /* fin de if*/
   else { /* si no se introduce calificaci�n alguna , despliega el mensaje */
      printf( "No se ingresaron calificaciones\n" );
   } /* fin de else */
getchar();
   return 0; /* indica que el programa termin� con exito */

} /* fin de la funci�n main */
