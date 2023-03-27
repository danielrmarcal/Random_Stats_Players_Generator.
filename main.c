#include "futebol.h"

int main(void) {
    intro();
    srand(time(NULL));

    Jogadores jogadores[1000];

  /* FILE *trabalho;
  trabalho = fopen("jogadores.csv", "r");

  if (trabalho == NULL) {

    printf("Algo deu errado :D\n");
    exit(0);
  }

  fclose(trabalho); */

  int fd;
  fd = open("futebol.csv", O_RDWR | O_CREAT, 0644);

  for (int i = 0; i < 1000; i++)
  {
    criar_jogadores(&jogadores[i], i);
  }

  for (int i = 0; i < 1000; i++)
  {
    // bota algo aqui
  }    
}