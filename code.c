#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  srand (time(0));
  int numero_secreto = rand () % 100;
  int numero_chutado, tentativas;
  int pontos = 1000;
  int novos_pontos;

  printf("Bem vindo ao nosso jogo de adivinhação!!.\n");

  for(tentativas = 1; ; tentativas++){
    printf("Qual o seu número?\n");
    scanf("%d", &numero_chutado);

    printf("\n");

    printf("Seu paplite fou %d e essa é a sua %dª tentativa.\n", numero_chutado, tentativas);
    
    if (numero_chutado < 1 || numero_chutado > 100){
      printf("O número secreto está entre 1 e 100, tente novamente.\n");
    }

    if(numero_chutado == numero_secreto){
      printf("Parabéns, você ganhou!!\n");
      break;
    } else if(numero_chutado < numero_secreto){
      printf("Seu chute foi menor do que o número secreto. Você consegue\n\n");
      pontos = pontos - abs(numero_chutado - numero_secreto);
    } else{
      printf("Seu número foi maior que o número secreto. não desanime!!\n\n");
      pontos = pontos - abs(numero_chutado - numero_secreto);
    }
    novos_pontos = pontos;
  }
  printf("O número secreto era %d e o número de tentativas foram %d.\n", numero_secreto, tentativas);
  printf("Sua pontuação foi %d pontos e...", novos_pontos);
    if(novos_pontos == 1000){
      printf("que legal!! Você acertou de primeira :D\n");
    } else if(novos_pontos >= 950 && novos_pontos < 1000){
      printf("pelo visto, você foi um ótimo estrategista, parabéns!\n");
    } else if(novos_pontos >= 875 && novos_pontos < 950){
      printf("olha só, uma ótima pontuação hein, parabéns!\n");
    } else{
      printf("você foi bem, parabéns!\n");
    } 
    
  return 0;
}
