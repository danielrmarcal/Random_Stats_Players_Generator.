#include "futebol.h"

void intro(void) {
    printf("******** JOGO DO FUTEBOL *******\n\n");
}

void carregando(void) {
    printf("... IMPRIMINDO DADOS ...\n");
}

void fim(void) {
    printf("\nFIM DO PROGRAMA\n");
}

void criar_jogadores(Jogadores *jogador, int id){
    char *nomes[10] = {"Enzo", "Douglas", "Fabricio", "Daniel", "Paulo", "Pedrão", "Gabriel", "Lucas", "Thiago", "Bruno"};

    char *sobre_nomes[10] = {"Silva", "Andrade", "Ferreira", "Mangueira", "Carvalho", "Pexeira", "Pereira", "Oliveira", "Rezende", "De tal"};

    char *time[10] = {"Botafogo", "Mengão", "Vasco", "Fluminense", "Fabricio team", "Corinthians", "Cruzeiro", "Fortaleza", "Palmeiras", "São Paulo"};

    char *role[4] = {"Atacante", "Goleiro", "Defesa", "Meio"};

    jogador->id = id;
    strcpy(jogador->nome, nomes[tempo(10)]);
    strcpy(jogador->sobre_nome, sobre_nomes[tempo(10)]);
    strcpy(jogador->time, time[tempo(10)]);
    jogador->idade = idade();
    strcpy(jogador->role, role[tempo(4)]);
    jogador->atributo.forca = status();
    jogador->atributo.velocidade = status();
    jogador->atributo.resistencia = status();    
    jogador->atributo.vontade = status();
    jogador->atributo.criatividade = status();
    jogador->atributo.lider = boll();
    jogador->atributo.machucado = boll();
    jogador->valor = dinheiro();
}

int tempo(int numero) {
  return(rand()%numero);
}

int idade(void){
    return (16 + rand() % 20);
}

int status(void){
    return (rand()%100 + 1);
}

int dinheiro(void){
  return (rand()%100000000 + 40000);
}

 int boll(void){
  return (rand() % 2);
}