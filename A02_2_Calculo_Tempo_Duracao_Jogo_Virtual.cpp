// Este algoritmo permite calcular o tempo de duracao de uma partida em um torneio de jogos virtuais
//	   Alexandre Pedroso Fernandes
//	   Maio de 2011
	
include <stdio.h>
include <stdlib.h>

int main(int argc, char argv[])
{
 	int	horaInicio;           // variavel para registro da hora inical do jogo
 	int	minInicio;            // variavel para registro do minuto inical do jogo
 	int	horaFim;              // variavel para registro da hora final do jogo
 	int	minFim;               // variavel para registro do minuto final do jogo
 	int	tempoInicio;          // variavel para armazenar o tempo inicial da partida convertido em minutos
 	int	tempoFim;             // variavel para armazenar o tempo final da partida convertido em minutos
 	int	tempoJogo;            // variavel para armazenar o tempo total da partida em minutos
 	int	horaTotal;            // variavel para armazenar e exibir a duracao em horas da partida
  	int	minTotal;             // variavel para armazenar e exibir a duracao em minutos da partida
    int validaHora;           // variavel para validar horario de inicio e fim informados na entrada
  
  /* entrada de dados dos horarios iniciais e finais dos jogos */
  
  printf("Troneio de Jogos Virtuais.\n\n\n");
  printf("Digite a hora de inicio do jogo    : ");
  scanf("%d", &horaInicio);
  printf("Digite os minutos iniciais do jogo : ");
  scanf("%d", &minInicio);
  printf("\n\n");
  printf("Digite a hora de final do jogo     : ");
  scanf("%d", &horaFim);
  printf("Digite os minutos finais do jogo   : ");
  scanf("%d", &minFim);
  printf("\n\n");
  
  /* Consistencia e validacao dos horarios informados */

  validaHora=((horaInicio>-1) && (horaInicio<24) && (minInicio>-1) && (minInicio<60) && (horaFim>-1) && (horaFim<24) && (minFim>-1) && (minFim<60)); 
  if(validaHora==0)
  {
    horaTotal=99;
    minTotal=99;
  }
  else
  {
    /* Conversao do tempo de Inicio e Fim do jogo para minutos*/
  
    tempoInicio=(horaInicio*60)+minInicio;
    tempoFim=(horaFim*60)+minFim;

    /* calculo do tempo de duracao do jogo e verificacao se o tempo excedeu 2 horas*/

    if (tempoInicio>tempoFim)
    {
      tempoJogo=(1440-tempoInicio)+tempoFim;
      horaTotal=tempoJogo/60; /* conversao do tempo para hora total do jogo atraves da divisao por 60*/
      minTotal=tempoJogo%60;  /* resto divisao por 60 sao os minutos totais de jogo */
    }
    else 
    {
      tempoJogo=abs(tempoFim-tempoInicio);
      horaTotal=tempoJogo/60; /* conversao do tempo para hora total do jogo atraves da divisao por 60*/
      minTotal=tempoJogo%60;  /* resto divisao por 60 sao os minutos totais de jogo */
    }
    if (tempoJogo>=120)
    {
      horaTotal=99;
      minTotal=99;
    }
  }

  /* Exibicao do tempo de duracao do jogo*/

  printf("%d", horaTotal);
  printf("h%d", minTotal);
  printf("min\n");
  printf("\n\n");

  // finalizacao do programa principal 
  
  system("PAUSE");  
  return 0;
}
