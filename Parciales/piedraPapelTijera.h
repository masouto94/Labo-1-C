#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <map>


char* definirJuego(char jugador, char pc){
    switch (jugador){
    case 'I':
        if(pc == 'T'){
            return "GANASTE";
        }
        else if(pc == 'A'){
            return "PERDISTE";
        }
        else{
            return "EMPATE";
        }
        break;
    case 'A':
        if(pc == 'T'){
            return "PERDISTE";
        }
        else if(pc == 'A'){
            return "EMPATE";
        }
        else{
            return "GANASTE";
        }
        break;
    case 'T':
        if(pc == 'T'){
            return "EMPATE";
        }
        else if(pc == 'A'){
            return "GANASTE";
        }
        else{
            return "PERDISTE";
        }
        break;

    }
};
int PiedraPapelTijera(){
    int opcionComputadora;
    char opcionJugador;
    srand(time(NULL));
    std::map<char,char*> opciones = {{'I',"Piedra"},{'A',"Papel"},{'T', "Tijera"}};
    std::map<int,char> pcChoice = {{0,'I'},{1,'A'},{2,'T'}};
    for(int i=0; i < 3; i++){
        opcionComputadora = rand() % 3;
        do{
            printf("Ingrese su eleccion:\n");
            printf("I => Piedra\n");
            printf("A => Papel\n");
            printf("T => Tijera\n");
            scanf("%c",&opcionJugador);
        } while (opcionJugador != 'I' && opcionJugador != 'A' && opcionJugador != 'T');
        printf("Vos: %s ---- La maquina: %s\n", opciones[opcionJugador] , opciones[pcChoice[opcionComputadora]]);
        printf("Resultado %s\n\n", definirJuego(opcionJugador , pcChoice[opcionComputadora]));
    }

    return 0;
}
