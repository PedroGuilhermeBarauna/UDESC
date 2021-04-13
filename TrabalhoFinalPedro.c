#include <stdio.h>
#include <stdlib.h>

int main(void) {
  srand(time(NULL));
  int secreto = rand() % 100 + 1;
  int acertou = 0;
  int tentativa = 0;
  int ntentativas = 0;
  int opcao = 0;
  int vezesJogadas = 0;
  int tentativa1;
  int tentativa2;
  int tentativa3;
  int tentativa4;
  int tentativa5;
  int sair = 0;

  printf("É com imenso prazer que lhe dou as boas vindas aos trabalho final do pedro!");



  while (sair == 0){
    printf("\n1. Novo Jogo\n2. Ver ultimos 5 jogos\n3. Limpar histórico\n4. Sair");
    scanf("%d", &opcao);

    while(opcao < 1 || opcao > 4){
      printf("A opção não é válida!\n");

      printf("\n1. Novo Jogo\n2. Ver ultimos 5 jogos\n3. Limpar histórico\n4. Sair");
      scanf("%d", &opcao);
    }



    if (opcao == 1){
      printf("Tente adivinhar um número de 1 a 100:");
      while (acertou == 0){
        scanf("%d", &tentativa);
        if (tentativa > secreto){
          printf("Muito alto! Tente um valor mais baixo:");
          ntentativas++;
        }
        if (tentativa < secreto){
          printf("Muito baixo! Tente um valor mais alto:");
          ntentativas++;
        }
        if (tentativa == secreto){
          vezesJogadas++;
          ntentativas++;
          printf("Parabéns! Você acertou em %d Tentavivas tentativas!", ntentativas);
          acertou = 1;
          if (vezesJogadas < 6){
              switch (vezesJogadas){
              case 1:
              tentativa1 = ntentativas;
              break;

              case 2:
              tentativa2 = ntentativas;
              break;

              case 3:
              tentativa3 = ntentativas;
              break;

              case 4:
              tentativa4 = ntentativas;
              break;

              case 5:
              tentativa5 = ntentativas;
              break;
            }
          }
        }
      }
      acertou = 0;
    }

    if(opcao == 2){
      switch (vezesJogadas){
      case 0:
      printf("Ainda não foi jogado nenhuma vez!");
      break;

      case 1:
      printf("Jogo 1: %d tentativas", tentativa1);
      break;

      case 2:
      printf("Jogo 1: %d tentativas", tentativa1);
      printf("\nJogo 2: %d tentativas", tentativa2);
      break;

      case 3:
      printf("Jogo 1: %d tentativas", tentativa1);
      printf("\nJogo 2: %d tentativas", tentativa2);
      printf("\nJogo 3: %d tentativas", tentativa3);
      break;

      case 4:
      printf("Jogo 1: %d tentativas", tentativa1);
      printf("\nJogo 2: %d tentativas", tentativa2);
      printf("\nJogo 3: %d tentativas", tentativa3);
      printf("\nJogo 4: %d tentativas", tentativa4);
      break;

      case 5:
      printf("Jogo 1: %d tentativas", tentativa1);
      printf("\nJogo 2: %d tentativas", tentativa2);
      printf("\nJogo 3: %d tentativas", tentativa3);
      printf("\nJogo 4: %d tentativas", tentativa4);
      printf("\nJogo 5: %d tentativas", tentativa5);
      break;
      }
    }
    if (opcao == 3){
      switch (vezesJogadas){
        case 0:
        printf("Ainda não foi jogado nenhuma vez, a memória já está limpa !");
        break;

        case 1:
        vezesJogadas = 0;
        tentativa1 = 0;
        printf("Memória limpa com sucesso !");
        break;

        case 2:
        vezesJogadas = 0;
        tentativa1 = 0;
        tentativa2 = 0;
        printf("Memória limpa com sucesso !");
        break;

        case 3:
        vezesJogadas = 0;
        tentativa1 = 0;
        tentativa2 = 0;
        tentativa3 = 0;
        printf("Memória limpa com sucesso !");
        break;

        case 4:
        vezesJogadas = 0;
        tentativa1 = 0;
        tentativa2 = 0;
        tentativa3 = 0;
        tentativa4 = 0;
        printf("Memória limpa com sucesso !");
        break;

        case 5:
        vezesJogadas = 0;
        tentativa1 = 0;
        tentativa2 = 0;
        tentativa3 = 0;
        tentativa4 = 0;
        tentativa5 = 0;
        printf("Memória limpa com sucesso !");
        break;
      }
    }
    if (opcao == 4){
    return 0;
    }
  }
}