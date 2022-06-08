// Este algoritmo totaliza as medias obtidas por alunos de um cursinho em suas respectivas salas
//      Alexandre Pedroso Fernandes
//      maio 2011

include<stdio.h>
include<stdlib.h>

int main(int argc, char argv[])
{
    
    // declara��o das vari�veis
    
    int sala;                  /* variavel para armazenar a sala de aula */
    int salaAtual;             /* variavel para testar se houve troca de sala de aula */
    float nota;                /* variavel para armazenar a nota de cada aluno */
    int alunosSala;            /* variavel para totalizar quantidade de alunos por sala */
    float totalSala;           /* variavel para totalizar quantidade de alunos por sala */
    float mediaSala;           /* variavel para armazenar a media de cada sala */
    int totalAlunos;           /* variavel para totalizar quantidade de alunos do cursinho */
    float totalGeral;          /* variavel para armazenar a somatoria das notas de todos os alunos */
    float mediaGeral;          /* variavel para armazenar a media geral dos alunos do cursinho */
    int salaMelhorMedia;       /* variavel para armazenar a sala com melhor media */
    float melhorMedia;         /* variavel para armazenar a media da sala com melhor media */
    int qddSalas;              /* variavel para armazenar a quantidade de salas */
    float mediaDasSalas;       /* variavel para armazenar a quantidade de salas */
    float mediaSalasFinal;     /* variavel para armazenar a quantidade de salas */
    char tecla;                /* variavel para armazenar o caracter que determinar[a a parada do loop */
    
    // inicializacao das variaveis
    
    sala=0;
    nota=0;
    alunosSala=0;
    totalSala=0;
    totalAlunos=0;
    totalGeral=0;
    salaMelhorMedia=0;
    melhorMedia=0;
    mediaSala=0;
    mediaGeral=0;
    qddSalas=0;
    mediaDasSalas=0;
    mediaSalasFinal=0;
    
    // rotina para leitura e totalizacao das variaveis

    printf("Totalizacao das Notas do Simulado do Cursinho.\n\n\n");
    do
    {
        printf("Digite o numero da sala de aula: ");
        scanf("%d", &sala);
        if(salaAtual!=sala)
        {
             salaAtual=sala;
             qddSalas=qddSalas+1;
             mediaDasSalas=mediaDasSalas+mediaSala;
             alunosSala=0;
             mediaSala=0;
             totalSala=0;
        }
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        fflush(stdin);
        alunosSala=alunosSala+1;
        totalAlunos=totalAlunos+1;
        totalSala=totalSala+nota;
        totalGeral=totalGeral+nota;
        mediaSala=totalSala/alunosSala;
        mediaGeral=totalGeral/totalAlunos;
        if(mediaSala>melhorMedia)
        {
             melhorMedia=mediaSala;
             salaMelhorMedia=sala;
        }

        // Testa a inclusao de novo aluno

        printf("Tecle S ou s para continuar: ");
        scanf("%c", &tecla);
        printf("\n");
    }
    while(tecla=='S'||tecla=='s');
    mediaDasSalas=mediaDasSalas+mediaSala;
    
    // Exibe totais e medias dos alunos do cursinho
             
    mediaSalasFinal=mediaDasSalas/qddSalas;
    printf("Exibe Resultado\n\n");             
    printf("Media Geral          : %.1f\n", mediaGeral);             
    printf("Sala com melhor media: %d.\n", salaMelhorMedia);             
    printf("Media das Salas      : %.1f\n\n", mediaSalasFinal);             

    // Finalizacao do programa
    
    system("PAUSE");
    return(0);
}
