// Este algoritmo recebe um vetor de notas de alunos e retorna o total de aluno 
//      que possuem nota maior ou igual a media da turma
//      Alexandre Pedroso Fernandes - RA: 435791 - SJC
//      Setembro 2011

include<stdio.h>
include<stdlib.h>

//Declaracoes globais

const int maximoAlunos=40;  /*constante com maximo de alunos por turma*/

// Prototipo de funcao

void TotalAlunos(float *, int *,int);

int main(int argc, char* argv[])
{
    // declaracao das variaveis
    
    float V[maximoAlunos];      /*vetor com as notas dos alunos */
    int totalTurma;             /*total de alunos da turma*/    
    int acimaMedia=0;           /*variavel para armazenar o total de alunos acima da media */
    int i;                      /*controle do comando para*/    
    
    // Leitura do total de alunos na turma e das notas de cada aluno da turma
    
    printf("Totalizacao dos Alunos com nota acima da media.\n\n");
    do
    {
        printf("Informe o total de alunos da Turma: ");
        scanf("%d", &totalTurma);
    }
    while(totalTurma<1 || totalTurma>40);
    printf("\n");
    for(i=0;i<totalTurma;i++)
    {
         printf("Digite a nota do %d aluno: ",i+1);
         scanf("%f", &V[i]);
    }
    printf("\n");
    
    // Chamada da funcao para calculo da media e totalizar os alunos na media ou acima
    
    TotalAlunos(&V[0],&acimaMedia,totalTurma);
    printf("O Total de alunos com a nota na media ou acima e: %d", acimaMedia);
    printf("\n\n");
    
    // Finalizacoo do programa
    
    system("PAUSE");
    return(0);
}

void TotalAlunos(float *V,int *acimaMedia,int totalTurma)
{
    // declaracao das variaveis locais
    
    float media=0;      /*variavel para armazenar a media dos alunos*/
    int i;
    
    // Calculo da media
    
    for(i=0;i<totalTurma;i++)
    {
        media=media+V[i];
    }
    media=media/totalTurma;
    printf("A media dos alunos e: %.2f", media);
    printf("\n\n");
    
    // Totalizacao dos alunos na media ou acima
    
    acimaMedia=0;
    printf("O Total de alunos com a nota na media ou acima e: %d", acimaMedia);
    printf("\n\n");
    for(i=0;i<totalTurma;i++)
    {
        if(V[i]>media || V[i]==media)
             acimaMedia=acimaMedia+1;
        printf("O Total de alunos com a nota acima da media e: %d", acimaMedia);
        printf("\n\n");
    }
    printf("O Total de alunos com a nota na media ou acima e: %d", acimaMedia);
    printf("\n\n");
}
