//este algoritmo calcula a area de 100 circulos apos a leitura das coordenada 
//     de um ponto qualquer e seu raio, posteriormente exibe os resultados.
//     Alexandre Pedroso Fernandes - RA: 435791 - SJC
//     Setembro 2011

include<stdio.h>
include<stdlib.h>

define TAMANHO 100

typedef struct 
{
   int x,y; // coordenadas do ponto central do circulo
}tCoordenadas;
    
typedef struct 
{
    tCoordenadas coord;
    float raio;
}tCirculo;

//prototipos dos procedimentos
  
void LerDadosCirculo(tCirculo *);

void MostrarAreaCirculo(tCirculo *);

int main(int argc, char*argv[])
{
    // declaracao das variaveis 
    
    tCirculo C[TAMANHO];
    
    // Laco para leitura e calcula da area do circulo

    LerDadosCirculo(&C[0]);
    MostrarAreaCirculo(&C[0]);
                          
    //finalizacao do programa
    
    printf("Fim de processamento"); 
    printf("\n"); 
    system("PAUSE");
    return(0);
}

void LerDadosCirculo(tCirculo *C)
{
     // procedimento para ler os dados do circulo
     
     int i;
     for(i=0;i<TAMANHO;i++)
     {
         printf("Digite a coordenada  x  : ");
         scanf("%f", &C[i].coord.x);
         printf("Digite a coordenada  y  : ");
         scanf("%f", &C[i].coord.y);
         printf("Digite o raio do circulo: ");
         scanf("%f", &C[i].raio);
     }
}

void MostrarAreaCirculo(tCirculo *C)
{

     // procedimento para mostrar a area do circulo
     
     int i;
     float raio;
     float pi=3.1416;
     float areaCirculo;
     for(i=0;i<TAMANHO;i++)
     {
         raio=C[i].raio;
         areaCirculo=pi*raio*raio;
         printf("A area do %d circulo e: ", i+1);
         printf("%.2f",areaCirculo);
         printf("\n"); 
         system("PAUSE"); // para teste de mesa do programa     
     }
}
 
