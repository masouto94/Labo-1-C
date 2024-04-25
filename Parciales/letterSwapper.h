#include <stdio.h>
#include <iostream>
#define MAX_LEN 100
char parseLetters(char nextLetter){
    if(nextLetter >='a' && nextLetter < 'z'){
        return nextLetter+1;
    }
    if (nextLetter == 'z'){
        return 'a';
    }
    if(nextLetter >='A' && nextLetter < 'Z'){
        return nextLetter+1;
    }
    if (nextLetter == 'Z'){
        return 'A';
    }
    else{
        return nextLetter;
    }
}
char* swapper(char* swapInput){
    char container[MAX_LEN];
    for(int i=0; swapInput[i] != '\0';i++){
        container[i] = parseLetters(swapInput[i]);
    }
    printf("La cadena invertida es\n");
    printf("%s", container);
    return container;
};
int LetterSwapper(){
    char cadenaASwappear[MAX_LEN];
    printf("Ingrese una cadena a procesar\n");
    gets(cadenaASwappear);
    swapper(cadenaASwappear);

    return 0;
}
