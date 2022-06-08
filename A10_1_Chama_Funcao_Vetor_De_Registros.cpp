//Este algoritmo cria um vetor de registros de alunos e atraves de um 
//     menu de opcoes, manipula a insersao ordenada ascende de alunos 
//     e a impressao da relacao de todos os alunos cadastrados.
//     Alexandre Pedroso Fernandes - RA; 435791 - SJC
//     Outubro de 2011

include<stdio.h>
include<stdlib.h>

#define TAMANHO 100 /* Utilizei o tamanho 10 nos testes para facilitar  */

typedef struct{
        int ra, rg;
        char nome[30];
        char endereco[30];
        char cidade[30];
}tAlunos;
        
void insereAluno(tAlunos *alunos){
     tAlunos moveAluno;
     int i,j;
     
     //rotina para validar o novo RA inserir os dados do novo aluno no vetor
     
     do{
         printf("Digite o RA do novo aluno      : ");
         scanf("%d", &moveAluno.ra);
     }
     while(moveAluno.ra<1 || moveAluno.ra>9999);
     
     for(i=0;i<TAMANHO;i++){
         if(alunos[i].ra==0){
              alunos[i].ra=moveAluno.ra;
              printf("Digite o Nome do novo aluno    : ");
              scanf("%s", &alunos[i].nome);
              printf("Digite o RG do novo aluno      : ");
              scanf("%d", &alunos[i].rg);
              printf("Digite o Endereco do novo aluno: ");
              scanf("%s", &alunos[i].endereco);
              printf("Digite o Cidade do novo aluno  : ");
              scanf("%s", &alunos[i].cidade);
              printf("\n");
              fflush(stdin);
              i=TAMANHO;
         }
         else if(alunos[i].ra==moveAluno.ra){
                   do{
                        printf("RA existente, digite outro RA para o novo Aluno: ");
                        scanf("%d", &moveAluno.ra);
                   }
                   while(moveAluno.ra<1 || moveAluno.ra>9999 );
                   i=i-1;
         }
     }
     
	 //rotina para organizar o vetor em ordem ascendente
	 
	 for(i=0;i<TAMANHO-1;i++){
         for(j=i+1;j<TAMANHO;j++){
             if(alunos[j].ra!=0){
                  if(alunos[i].ra>alunos[j].ra){
                       moveAluno=alunos[i];
                       alunos[i]=alunos[j];
                       alunos[j]=moveAluno;
                  }
             }
         }
     }
}

void imprimeAlunos(tAlunos *alunos){
     int i; // variaveis de controle
     
     for(i=0;i<TAMANHO;i++){
         if(alunos[i].ra!=0){
              printf("Os dados do Aluno %d :", i+1);
              printf("\n");
              printf("RA      : %d", alunos[i].ra);
              printf("\n");
              printf("Nome    : %s", alunos[i].nome);
              printf("\n");
              printf("RG      : %d", alunos[i].rg);
              printf("\n");
              printf("Endereco: %s", alunos[i].endereco);
              printf("\n");
              printf("Cidade  : %s", alunos[i].cidade);
              printf("\n\n");
         }
     }
}

int main(int argc, char *argv[]){
    tAlunos alunos[TAMANHO];
    int totalAlunos, opcao, i,j;
    
    // rotina para limpar o vetor estrutura
    
    totalAlunos=0;
    for(i=0;i<TAMANHO;i++){
         alunos[i].ra=0;
         alunos[i].rg=0;
         for(j=0;j<30;j++){
             alunos[i].cidade[j]=' ';
             alunos[i].endereco[j]=' ';
             alunos[i].nome[j]=' ';
         }
    }
    
    // rotina para opcoes de inserir, imprimir e finalizar o programa
    
    printf("Cadatra, classifica e imprime registro de alunos.\n\n");
    opcao=0;
    while(opcao!=3){
           printf("Tecle 1 para inserir um aluno.\n");
           printf("Tecle 2 para imprimir relacao de alunos.\n");
           printf("Tecle 3 para finalizar o programa.\n\n");
           printf("Digite sua opcao: ");
           scanf("%d", &opcao);
           printf("\n");
           switch(opcao){
                      case 1:
                           totalAlunos=totalAlunos+1;
                           if(totalAlunos<TAMANHO+1)
                               insereAluno(&alunos[0]);
                           else
                               printf("O arranjo esta completo, nao e possivel cadastrar um novo aluno.\n\n");
                           break;                   
                      case 2:
                           imprimeAlunos(&alunos[0]);
                           break;
                      case 3:
                           break;
           }
    }
    
    // finalizacao do programa
    
    system("PAUSE");
    return(0);
}               
