//Este algoritmo recebera como entrada o codigo numerico de participacao e a nota obtida para cada participante de uma competicao 
//     e devera selecionar o codigo e a nota do participante com a melhor nota e o que entregou em primeiro da lista.
//     Alexandre Pedroso Fernandes
//     maio de 2011}

include <stdio.h>
include<stdlib.h>

int main(int c, char g[])
{
             int codigoParticipante;  /* variavel para armazenar o codigo do participante*/
             int notaParticipante;    /* variavel para armazenar a nota do participante*/
             int codigoVencedor;      /* variavel para armazenar o codigo do vencedor*/
             int notaVencedor;        /* variavel para armazenar o codigo do vencedor*/
             char tecla;              /* variavel para armazenar o caracter que determinar[a a parada do loop*/

             // Rotina para inclusao dos dados dos participantes e selecao da maior nota e codigo do vencedor do concurso
             
             printf("Campeonato de programador de computador.\n\n\n");
             codigoVencedor = 0;
             printf("Inserir os dados de um novo participante?\n\n");
             printf("Tecle S ou s para continuar: ");
             scanf("%c", &tecla);
             printf("\n");

             // Testa se existe ao menos um participante, senao encerra programa
             
             if (tecla =='S'||tecla =='s') 
             {
                    notaVencedor=0;
                    while(tecla=='S'||tecla=='s')
                    {
                          
                          // Leitura do codigo e nota de cada participante
                          
                          printf("Digite o codigo do participante: ");
                          scanf("%d", &codigoParticipante);
                          printf("Digite a nota   do participante: ");
                          scanf("%d", &notaParticipante);
                          fflush(stdin);
                          printf("\n");
                          
                          // Verifica se nota do novo participante e maior
                          
                          if(notaVencedor<notaParticipante)
                          {
                                codigoVencedor=codigoParticipante;
                                notaVencedor=notaParticipante;
                          }

                          // Testa a inclusao de novo participante
                           
                          printf("Tecle S ou s para continuar: ");
                          scanf("%c", &tecla);
                          printf("\n");
                    }
             }
             
             // Exibe resultado com o codigo e nota do vencedor do concurso
             
             printf("Exibe codigo do vencedor: %d.\n", codigoVencedor);             
             printf("Exibe nota do vencedor  : %d.\n\n", notaVencedor);
             
             // Finalizcao do programa
                        
             system("PAUSE");
             return(0);             
}
