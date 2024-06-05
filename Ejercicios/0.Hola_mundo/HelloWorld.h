#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <array>
#include <vector>
#include <map>


int HelloWorld(){
    srand(time(NULL));
    class SecretCode{
      public:
        char* one;
        char* two;
        char* three;
        char* four;
        std::array<char*,4> code;

        std::array<char*,4> comparar(std::array<char*,4> inputUsuario){
            std::array<char*,4> answer = {"NULL","NULL","NULL","NULL"};
            for(int i=0; i < 4; i++){
                if(inputUsuario[i] == code[i]){
                    answer[i] = "redPeg";
                    continue;
                }
                for(int code_index = 0; code_index < 4; code_index++){
                    if(inputUsuario[i] == code[code_index]){
                        answer[i] = "yellowPeg";
                        break;
                    }
                }
             }
            return answer;
          }
        SecretCode(){
            char* colours[7] = {"red","green","blue","yellow", "pink", "white","black"};
            one = colours[rand() % 7];
            two = colours[rand() % 7];
            three = colours[rand() % 7];
            four = colours[rand() % 7];
            code = {one,two,three,four};
          }
        SecretCode(char* color1, char* color2, char* color3, char* color4){
            one = color1;
            two = color2;
            three = color3;
            four = color4;
            code = {one,two,three,four};

          }
      };
      SecretCode codigo = SecretCode("red","green","blue","yellow");
      std::array<char*,4> inputUser = {"red","blue","black","pink"};
      for(int i=0; i<4; i++){
      printf("Posicion %d el usuario puso %s y el codigo es %s => %s\n",i+1,inputUser[i],codigo.code[i],codigo.comparar(inputUser)[i]);
      };

class RGBColor{

    public:
        int red;
        int green;
        int blue;

        RGBColor();
        RGBColor(int redValue, int greenValue, int blueValue){
        red = redValue;
        green = greenValue;
        blue = blueValue;
        }
        //Funciones que retornan el color en rgb
        static RGBColor Yellow(){
            return RGBColor(255, 235, 59);
        }
        static RGBColor White(){
           return RGBColor(250, 250, 250);
        }
        static RGBColor Orange(){
           return RGBColor(245, 127, 23);
        }
        static RGBColor Green(){
           return RGBColor(0, 77, 64);
        }
        static RGBColor Blue(){
           return RGBColor(74, 20, 140);
        }
        static RGBColor Red(){
           return RGBColor(183, 28, 28);
        }
        void show(){
            printf("red: %d, green: %d, blue: %d\n", red,green, blue);
            return;
        }
    };


    RGBColor color = RGBColor::Green();
    color.show();

    return 0;
}

