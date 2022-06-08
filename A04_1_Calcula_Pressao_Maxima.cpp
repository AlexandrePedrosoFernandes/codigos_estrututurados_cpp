// Este aloritmo monitora variacao de pressao dos modulos propulsores de um foguete,
//	    recebendo as medidacoes atraves de sinais de um sensor e verifica se a pressao 
//     	ficou acima de 8000 Mkgf/m2, por tem po superior a 5 segundos, para entao 
//      emitir sinal para outro sistema refrigerar os propulsores.
//             Alexandre Pedroso Fernandes
//             Junho de 2011

include <stdio.h>
include <stdlib.h>

int main(int argc, char argv[])
{
    
    // Declaracao das variaveis
    
    float pressaoMaxima;         /* variavel para armazenar a pressao maxima nos propulsores*/
    float pressaoAtual;          /* variavel para armazenar a pressao atual nos propulsores*/
    int pressaoElevada;          /* variavel para armazenar o tempo da pressao acima do limite*/
    int sensor;                  /* variavel para armazenar as leituras do sensor*/
         
    // Sequencia para inicair o programa e zerar os acumuladores
    
    printf("Programa para monitoramento da pressao nos propulsores.\n\n\n");
    pressaoMaxima=8000;
    pressaoElevada=1;
    
    // Rotina para monitoramento da pressao de propulsores
    
    for (sensor=0;sensor<300;sensor++ )
    {
        printf("Leia a pressao atual: ");
        scanf("%f", &pressaoAtual);
        printf("\n");
        if(pressaoAtual>pressaoMaxima)
        {
              if(pressaoElevada>4)
              {
                    system("color 04");              
                    printf("%.0f",pressaoAtual);
                    printf("*\n");
              }
              else
              {
                    system("color 01");              
                    printf("%.0f",pressaoAtual);
                    pressaoElevada=pressaoElevada + 1;       
                    printf("\n");
              }
        }
        else
        {
              system("color 0F");              
              printf("%.0f",pressaoAtual);
              printf("\n");
              pressaoElevada=1;
        }       
        printf("\n");
    }     

    // Finalizacao do programa
    
    system("PAUSE");
    return(0);  
}
