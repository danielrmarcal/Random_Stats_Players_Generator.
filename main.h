#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Structs usadas

typedef struct jogadores {
    int id;
    char nome[50];
    char sobrenome[50];
    char time[50];
    int idade;
    char posicao[20];
    struct {
        int forca;
        int velocidade;
        int resistencia;
        int vontade;
        int criatividade;
        int lider;
        int machucado;
    } atributo;
    float valor;
} Jogadores;

int quantidade(int max);
int id();
int status();
int talvez();
int idade();
float valor();
