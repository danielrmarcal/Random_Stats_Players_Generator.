#include "main.h"

//Funções usadas

int quantidade(int max) {
    return rand() % max;
}

int id(){
    return rand() % 1000;
}

int status() {
    return rand() % 101;
}

int talvez() {
   return rand() % 2;

}

int idade() {
    return rand() % 30 + 16;
}

float valor() {
    return rand() % 1000000;
}

