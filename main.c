#include "main.h"


int main() {
    srand(time(NULL));

    FILE *arquivo;
    arquivo = fopen("jogadores.csv", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    char *nomes[50] = {"Joao", "Pedro", "Lucas", "Marcos", "Douglas", "Daniel", "Mauro", "Mauricio", "Fabricio", "Rafael", "Ygor", "Gabriel", "Felipe", "Thiago", "Victor", "Matheus", "Paulo", "Carlos", "Alfredo", "Gustavo", "Arthur", "Bernado", "Guilherme", "Davi", "Joelson"};

    char *sobrenomes[50] = {"Silva", "Santos", "Oliveira", "Souza", "Pereira", "Lima", "Fernandes", "Ribeiro", "Fragoso", "Rezende", "Silva", "Reis", "Carvalho", "Silveira", "Matos", "Barbosa", "Muzy", "Joestar"};

    char *times[20] = {"Botafogo", "Flamengo", "Fluminense", "Vasco", "Cruzeiro", "Sao Paulo", "Corinthias", "Palmeiras", "Gremio", "Sport Club", "Atletico Mineiro", "Santos", "Bahia", "Fortaleza"};

    char *posicoes[4] = {"Atacante", "Goleiro", "Defesa", "Meio"};

    fprintf(arquivo, "ID; Nome; Sobrenome; Time; Idade; Posicao; Forca; Velocidade; Resistencia; Vontade; Criatividade; Lider; Machucado; Valor\n");

    Jogadores jogador;


   for (int i = 0; i < 1000; i++) {
        
        jogador.id = id();
        strcpy(jogador.nome, nomes[quantidade(20)]);
        strcpy(jogador.sobrenome, sobrenomes[quantidade(15)]);
        strcpy(jogador.time, times[quantidade(10)]);
        jogador.idade = idade();
        strcpy(jogador.posicao, posicoes[quantidade(4)]);
        jogador.atributo.forca = status();
        jogador.atributo.velocidade = status();
        jogador.atributo.resistencia = status();
        jogador.atributo.vontade = status();
        jogador.atributo.criatividade = status();
        jogador.atributo.lider = talvez();
        jogador.atributo.machucado = talvez();
        jogador.valor = valor();

        fprintf(arquivo, "%d;%s;%s;%s;%d;%s;%d;%d;%d;%d;%d;%d;%d;%.2f;\n", jogador.id,jogador.nome, jogador.sobrenome, jogador.time, jogador.idade, jogador.posicao, jogador.atributo.forca, jogador.atributo.velocidade, jogador.atributo.resistencia, jogador.atributo.vontade, jogador.atributo.criatividade, jogador.atributo.lider, jogador.atributo.machucado, jogador.valor, jogador.atributo.lider);

    }


    printf("Dados inseridos com sucesso!\n");
}
