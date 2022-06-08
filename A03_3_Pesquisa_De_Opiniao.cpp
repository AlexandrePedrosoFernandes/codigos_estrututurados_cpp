// Este algoritmo gera resultado estatistico de uma pesquisa de opiniao sobre o 
//      lancamento de um novo suco em possoveis embalagens
//      Alexandre Pedroso Feranades
//      maio 2011

include<stdio.h>
include<stdlib.h>

int main(int argc, char *argv[])
{
    
   // Declaracao das variaveis para pesquisa de opiniao

   int gostouResposta;         /* variavel para acumular a opiniao positiva sobre o sabor do suco*/
   int gostouSim;              /* variavel para acumular a opiniao positiva sobre o sabor do suco*/
   int gostouNao;              /* variavel para acumular a opiniao negativa sobre o sabor do suco*/
   int gostouOutro;            /* variavel para acumular a outra opiniao sobre o sabor do suco*/
   int gostouTotal;            /* variavel para acumular todas as opinioes sobre o sabor do suco*/
   float gostouPorcentoSim;    /* variavel para acumular a procentagem das opinioes positivas sobre o sabor do suco*/
   float gostouPorcentoNao;    /* variavel para acumular a procentagem das opinioes positivas sobre o sabor do suco*/
   float gostouPorcentoOutro;  /* variavel para acumular a procentagem das opinioes positivas sobre o sabor do suco*/
   int embalagem;              /* variavel para acumular a opiniao sobre a primeira embalagem do suco*/
   int embalagem1;             /* variavel para acumular a opiniao sobre a primeira embalagem do suco*/
   int embalagem2;             /* variavel para acumular a opiniao sobre a segunda embalagem do suco*/
   int embalagem3;             /* variavel para acumular a opiniao sobre a terceira embalagem do suco*/
   int embalagemOutra;         /* variavel para acumular outra opiniao sobre a embalagem do suco*/
   int nota;                   /* variavel para acumular a nota total atribuida ao sabor do suco*/
   int notaTotal;              /* variavel para acumular a nota total atribuida ao sabor do suco*/
   float notaMedia;            /* variavel para acumular a nota media atribuida ao sabor do suco*/
   int notaNao;                /* variavel para acumular a nota total atribuida das opinioes negativas o sabor do suco*/
   float mediaNao;             /* variavel para acumular a nota media atribuida das opinioes negativas o sabor do suco*/
    
   // Zera contadores da pesquisa de opiniao
   
   printf("Pesquisa de Opiniao.\n\n\n");
   gostouResposta=0;
   gostouSim=0;
   gostouNao=0;
   gostouOutro=0;
   gostouTotal=0;
   gostouPorcentoSim=0;
   gostouPorcentoNao=0;
   gostouPorcentoOutro=0;
   nota=0;
   notaTotal=0;
   notaNao=0;
   embalagem1=0;
   embalagem2=0;
   embalagem3=0;
   embalagemOutra=0;   

   // Inicio da pesquisa
   
   while(gostouResposta!=4)
   {
                 
      // Leitura da opiniao se gostaram ou nao do suco
                          
      printf("Gostou do Produto?\n");
      printf("[Tecle (1) SIM , (2) Nao , (3) Outra e (4) Encerrar]: ");
      scanf("%d", &gostouResposta);

      // Validacao das opinioes sobre sabor do suco

      while(gostouResposta!=1 && gostouResposta!=2 && gostouResposta!=3 && gostouResposta!=4)
      {
            printf("Opcao Invalida\n");
            printf("[Tecle (1) SIM , (2) Nao , (3) Outra e (4) Encerrar]: ");
            scanf("%d", &gostouResposta);
      }

      // Totalizacao das respostas obtidas na pesquisa sobre a aprovacao do suco

      if(gostouResposta!=4)
      {
            if(gostouResposta==1)
            {
                  gostouSim=gostouSim+1;
                  gostouTotal=gostouTotal+1;

                  // Leitura da nota atribuida ao suco

                  printf("Que Nota daria ao Produto?\n");
                  printf("[Nota de 1 a 10]: ");
                  scanf("%d", &nota);

                  // Validacao da nota atribuida ao suco e somataria das notas

                  while(nota!=0 && nota!=1 && nota!=2 && nota!=3 && nota!=4 && nota!=5 && nota!=6 && nota!=7 && nota!=8 && nota!=9 && nota!=10)
                  {
                        printf("Nota Invalida\n ");
                        printf("[Nota de 1 a 10]: ");
                        scanf("%d", &nota);
                  }
                  notaTotal=nota+notaTotal;
            }
            if(gostouResposta==2)
            {
                  gostouNao=gostouNao+1;
                  gostouTotal=gostouTotal+1;

                  // Leitura da nota atribuida ao suco

                  printf("Que Nota daria ao Produto?\n ");
                  printf("[Nota de 1 a 10]: ");
                  scanf("%d", &nota);

                  // Validacao da nota atribuida ao suco e somatoria das notas

                  while(nota!=0 && nota!=1 && nota!=2 && nota!=3 && nota!=4 && nota!=5 && nota!=6 && nota!=7 && nota!=8 && nota!=9 && nota!=10)
                  {
                        printf("Nota Invalida\n");
                        printf("[Nota de 1 a 10]: ");
                        scanf("%d", &nota);
                  }
                  notaTotal=nota+notaTotal;
                  notaNao=nota+notaNao;
            }
            if(gostouResposta==3)
            {
                  gostouOutro=gostouOutro+1;
                  gostouTotal=gostouTotal+1;

                  // Leitura da nota atribuida ao suco

                  printf("Que Nota daria ao Produto?\n");
                  printf("[Nota de 1 a 10]: ");
                  scanf("%d", &nota);

                  // Validacao da nota atribuida ao suco e somatoria das notas

                  while(nota!=0 && nota!=1 && nota!=2 && nota!=3 && nota!=4 && nota!=5 && nota!=6 && nota!=7 && nota!=8 && nota!=9 && nota!=10)
                  {
                        printf("Nota Invalida\n");
                        printf("[Nota de 1 a 10]: ");
                        scanf("%d", &nota);
                  }
                  notaTotal=nota+notaTotal;
            }

            // Leitura da preferencia das embalagens apresentadas

            printf("Gostou de qual das embalagens?\n");
            printf("[Tecle (1) Embalagem 1, (2) Embalagem 2, (3) Embalagem 3 ou (4) Outra]: ");
            scanf("%d", &embalagem);

            // Validacao das opcoes das embalagens apresentadas

            while(embalagem!=1 && embalagem!=2 && embalagem!=3 && embalagem!=4)
            {
                  printf("Opcao Invalida\n");
                  printf("[Tecle (1) Embalagem 1, (2) Embalagem 2, (3) Embalagem 3 ou (4) Outra]: ");
                  scanf("%d", &embalagem);
            }
 
            // Totalizacao da preferencia das embalagens apresentadas

            if(embalagem==1)
                 embalagem1=embalagem1+1;
            if(embalagem==2)
                 embalagem2=embalagem2+1;
            if(embalagem==3)
                 embalagem3=embalagem3+1;
            if(embalagem==4)
                 embalagemOutra=embalagemOutra+1;
            printf("\n");      }

      // Finalizacao da Pesquisa

      else
      {
            printf("Fim da Pesquisa de Opiniao.\n");
            fflush(stdin);
            printf("\n");
      }
   }

   // Exibe totais de entrevistados, porcentuais de aprovacao do sabor e notas medias obtidas pelo suco
             
   gostouPorcentoSim=(float)gostouSim/gostouTotal;
   gostouPorcentoNao=(float)gostouNao/gostouTotal;
   gostouPorcentoOutro=(float)gostouOutro/gostouTotal;
   notaMedia=(float)notaTotal/gostouTotal;
   mediaNao=(float)notaNao/gostouNao;
   printf("Resultado da pesquisa de Opiniao.\n\n");
   printf("Total de entrevistados na pesquisa de opiniao        : %d\n", gostouTotal);             
   printf("Porcentual de entrevistados que gostaram do suco     : %.2f\n", gostouPorcentoSim);             
   printf("Porcentual de entrevistados que nao gostaram do suco : %.2f\n", gostouPorcentoNao);             
   printf("Porcentual de outras respostas para esta pergunta    : %.2f\n", gostouPorcentoOutro);             
   printf("Nota media atribuida ao produdo pelos entrevistados  : %.2f\n", notaMedia);             
   printf("Nota media dos entrevistados que nao gostaram produdo: %.2f\n\n", mediaNao);             

   // Resultado da pesquisa de opiniao sobre a melhor embalagem

   if(embalagem1>embalagem2 && embalagem1>embalagem3 && embalagem1>embalagemOutra)
          printf("A embalagem 1 foi a preferida dos entrevistados\n\n");             
   if(embalagem2>embalagem1 && embalagem2>embalagem3 && embalagem2>embalagemOutra)
          printf("A embalagem 2 foi a preferida dos entrevistados\n\n");             
   if(embalagem3>embalagem1&& embalagem3>embalagem2 && embalagem3>embalagemOutra)
          printf("A embalagem 3 foi a preferida dos entrevistados\n\n");             
   if(embalagemOutra>embalagem1 && embalagemOutra>embalagem2 && embalagemOutra>embalagem3)
          printf("Outra embalagem foi a preferida dos entrevistados\n\n");             
   if(embalagem1==embalagem2 && embalagem1>embalagem3 && embalagem1>embalagemOutra)
          printf("As embalagens 1 e 2 foram as preferidas dos entrevistados\n\n");             
   if(embalagem1==embalagem3 && embalagem1>embalagem2 && embalagem1>embalagemOutra)
          printf("As embalagens 1 e 3 foram as preferidas dos entrevistados\n\n");             
   if(embalagem1==embalagemOutra && embalagem1>embalagem2 && embalagem1>embalagem3)
          printf("As embalagens 1 e outra embalagem foram as preferidas dos entrevistados\n\n");             
   if(embalagem2==embalagem3 && embalagem2>embalagem1 && embalagem2>embalagemOutra)
          printf("As embalagens 2 e 3 foram as preferidas dos entrevistados\n\n");             
   if(embalagem2==embalagemOutra && embalagem2>embalagem1 && embalagem2>embalagem3)
          printf("As embalagens 2 e outra embalagem foram as preferidas dos entrevistados\n\n");             
   if(embalagem3==embalagemOutra && embalagem3>embalagem1 && embalagem1>embalagem2)
          printf("As embalagens 3 e outra embalagem foram as preferidas dos entrevistados\n\n");             
   if(embalagem1==embalagem2 && embalagem1==embalagem3 && embalagem1>embalagemOutra)
          printf("As embalagens 1, 2 e 3 foram as preferidas dos entrevistados\n\n");             
   if(embalagem1==embalagem2 && embalagem1==embalagemOutra && embalagem1>embalagem3)
          printf("As embalagens 1, 2 e Outra embalagem, foram as preferidas dos entrevistados\n\n");             
   if(embalagem2==embalagem3 && embalagem2==embalagem3 && embalagem2>embalagem1)
          printf("As embalagens 2, 3 e Outra embalagem, foram as preferidas dos entrevistados\n\n");             

   // Finalizacao do programa
   
   system("PAUSE");
   return(0);   
}
