#ifndef FUTEBOL_H
# define FUTEBOL_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct atributo {
  int forca;
  int velocidade;
  int resistencia;
  int vontade;
  int criatividade;
  int lider; // boleano
  int machucado; // boleanooo

} Atributo;

typedef struct jogador {
  int id;
  char nome[20];
  char sobre_nome[20];
  int idade;
  char time[20];
  float valor;
  int raridade;
  char  role[20];

  Atributo atributo;

} Jogadores;

int   tempo(int numero);
void  intro(void);
void  carregando(void);
void  fim(void);
int   idade(void);
int   status(void);
int   dinheiro(void);
int   boll(void);
void  criar_jogadores(Jogadores *jogador, int id);

#endif