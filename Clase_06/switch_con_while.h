#include <stdio.h>
#include <iostream>
/* Programa que simula una calculadora*/
void solveProblem(char operation, int num1, int num2){
    int result;
    switch (operation) {
        case '+':
            result = num1 + num2 ;
            break;
        case '-':
            result = num1 - num2 ;
            break;
        case 'x':
            result = num1 * num2 ;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2 ;
            }
            else {
                printf("\n\t\tERROR!!! Division por cero");
             }
            break;
        default:
            printf("\n\n OPERADOR DESCONOCIDO");
        }

    if ((operation == '+')||(operation == '-')||(operation == '+')||(operation == 'x')||(operation == '/')){
        if ((num2==0)&& ( (operation=='/')||(operation == '%') )) {
            printf("\n No se puede imprimir el resultado. FIN \n"); }
        else {
            printf ("\n \t %d %c %d = %d\n ", num1, operation, num2, result); }
    }
}
int switchConWhile (){
    int num1,num2;
    char oper;
    printf("\n\ A continuacion se le pedirán dos numeros enteros \n");
    printf( " \n \tNumero 1:");
    std::cin >> num1;
    printf( " \n \tNumero 2:");
    std::cin >> num2;
    printf( "\n\ Seleccione una de las operaciones a realizar con los numeros \n");
    printf( " \n \tSuma (+) \n\t Resta (-) \n\t Multiplicacion (x) \n ");
    printf("\n\t Division entera (/)\n\t Resto de Division entera (%)");
    printf( " \n \tOperacion:\n");

//    std::cin >> oper;
    scanf("%c", &oper);
    printf("OPERADOR %c", oper);
    solveProblem(oper,num1,num2);
    return 0;
}
