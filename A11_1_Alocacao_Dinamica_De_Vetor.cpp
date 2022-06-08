/*
  Este algoritmo realiza a alocacao dinamica para uma estrutura de vetores,
       contendo os seguintes dados: dimensao do vetor, arranjo para aramazenar 
       as coordenadas dos vetores.
       Alexandre Pedroso Fernandes - RA: 435791 - SJC
       Novembro 2011
*/

include<stdio.h>
include<stdlib.h>
include<malloc.h>
include<math.h>

// Procedimento para leitura do primeiro vetor
void leVetor(float *vet, float *p, int dimensao, int vetor){
    int i; // i para o loop 

    printf("As coordenadas do vetor %d", vetor);
    printf(" sao: \n\n");
    for(i=0;i<dimensao;i++){
         printf("Digite a coordenada da dimensao[%d] : ", i+1);
         scanf("%f", p);
         p++;
    }
    printf("\n");
}

// Funcao para somar vetores
float somaVetor(float *vet1, float *vet2, float *vetAux, float *p1, float *p2, 
                             float *pAux, int dimensao){
      int i; // controle do loop
      float v1,v2,vSoma;
      
      for(i=0;i<dimensao;i++){
          v1=*p1;
          v2=*p2;
          vSoma=v1+v2;
          *pAux=vSoma;                    
          pAux++;
          p1++;
          p2++;
      }
      return *vetAux;
}

// Funcao para normalizar os vetores
float normalizaVetor(float *vet, float *vetAux, float *p, float *pAux, int dimensao){
      int i; // controle do loop
      float v[dimensao]; // para realizar a soma de vetores
      float raiz, vNormal, v1;
      raiz=0;
      for(i=0;i<dimensao;i++){
          v[i]=*p;
          raiz=raiz+pow(v[i],2);
          p++;
      }
      raiz=sqrt(raiz);
      p=vet;
      for(i=0;i<dimensao;i++){
          v1=*p;
          vNormal=v1/raiz;
          *pAux=vNormal;                    
          pAux++;
          p++;
      }
      return *vetAux;
}

// Procedimento para escrever o primeiro vetor
void escreveVetor(float *vet, float *p, int dimensao, int vetor ){
    int i; // i para o loop 
    
    printf("   Coordenadas do vetor %d", vetor);
    printf(" em R%d,", dimensao);
    printf(" temos v%d",vetor);
    printf(" = (");
    for(i=0;i<dimensao;i++){
         printf("%5.2f", *p);
         p++;
         if(i!=dimensao-1)         
              printf(" ,");
    }
    printf(" )");
    printf("\n\n");
}

// Fun��o principal
int main(int argc, char *argv[]){
    int dimensao1, dimensao2, vetor;
    float *vet1,*vet2,*vetAux; // ponteiros para os vetores 1, 2 e auxiliar
    float *p1, *p2, *pAux; // ponteiro para percorreros vetores      
    
    // leitura da dimens�o dos vetores
    dimensao1=0;
    dimensao2=0;
    printf("Alocacao Dinamica para Manipulacao de Vetores.\n\n");
    printf("Informe a dimensao do primeiro vetor: ");
    scanf("%d",&dimensao1);
    printf("Informe a dimensao do segundo vetor : ");
    scanf("%d",&dimensao2);
    printf("\n");
    if(dimensao1<2){
        printf("Dimensao do primeiro vetor e invalida!\n\n");
        dimensao1=0;
    }
    if(dimensao2<2){
        printf("Dimensao do segundo vetor e invalida!\n\n");
        dimensao1=0;
    }

    // alocacao dos vetores
    
    if(dimensao1!=0 && dimensao1!=0){
         vet1=malloc(dimensao1*sizeof(float));
         vet2=malloc(dimensao2*sizeof(float));
         if(dimensao1>=dimensao2)
              vetAux=malloc(dimensao1*sizeof(float));
         else
              vetAux=malloc(dimensao2*sizeof(float));
         if(!vet1 || !vet2)
              printf("Erro de alocacao.\n");
         else{

              // leitura de dados
              p1=vet1;
              p2=vet2;
              pAux=vetAux;
              vetor=1;
              leVetor(vet1, p1, dimensao1, vetor);
              vetor=2;
              leVetor(vet2, p2, dimensao2, vetor);
              if(dimensao1==dimensao2){
                   printf("O resultado da soma dos vetores e: \n\n");
                   somaVetor(vet1, vet2, vetAux, p1, p2, pAux, dimensao1);                                       
                   vetor=3;
                   escreveVetor(vetAux, pAux, dimensao1, vetor);
              }
              else
                  printf("Vetores com diferentes dimensoes, nao e possivel somar.\n\n");
              normalizaVetor(vet1, vetAux, p1, pAux, dimensao1);
              vetor=4;
              printf("O primeiro vetor normalizado resulta em: \n\n");
              escreveVetor(vetAux, pAux, dimensao1, vetor);
              normalizaVetor(vet2, vetAux, p2, pAux, dimensao2);
              vetor=5;
              printf("O segundo vetor normalizado resulta em: \n\n");
              escreveVetor(vetAux, pAux, dimensao2, vetor);
              vetor=1;
              printf("O primeiro vetor e: \n\n");
              escreveVetor(vet1, p1, dimensao1, vetor);
              vetor=2;
              printf("O segundo vetor e: \n\n");
              escreveVetor(vet2, p2, dimensao2, vetor);
         }

         // desalocacao 
         free(vet1); // liberacao de todo o bloco
         free(vet2); // liberacao de todo o bloco
         free(vetAux); // liberacao de todo o bloco
    }
    
    // finalizacao do programa
    system("PAUSE");
    return 0; 
}
