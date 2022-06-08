//Este algoritmo le e escreva dados de um aluno que serao armazenados em uma 
//     estrutura do tipo aluno.
//     Alexandre Pedroso Fernandes - RA: 435791 - SJC
//     Setembro 2011

include<stdio.h>
include<stdlib.h>
include<string.h>

struct aluno
{
        int ra;        // Registro do aluno
        char nome[30]; // nome doa aluno
        float ira;     // media geral do aluno
        char sexo;     // sexo do aluno: (M) p/masculino ou (F) p/feminino
};

//prototipos dos procedimentos

void LerDadosAluno(struct aluno *A);

void EscreverDadosAluno(struct aluno A);

int main(int argc, char*argv[])
{
    // declaracao das variaveis
    
    struct aluno aluno1;
    
    // Inicio e leitura os dados do aluno
    
    printf("Leitura e Escrita dos Dados de um Aluno.\n\n");
    LerDadosAluno(&aluno1);
    
    // escrever os dados do aluno
    
    EscreverDadosAluno(aluno1);

    // finalizacao do programa
    
    system("PAUSE");
    return(0);
}

void LerDadosAluno(struct aluno *A)
{
    printf("Entre com os dados do aluno: \n\n");
    printf("Digite o RA do aluno  : ");
    scanf("%d", &A->ra);
    printf("Digite o nome do aluno: ");
    scanf("%s", &A->nome);
    printf("Digite o IRA do aluno : ");
    scanf("%f", &A->ira);
    do
    {
        printf("Digite o sexo do aluno: ");
        scanf("%*c%c", &A->sexo);
    }
    while(A->sexo!='M' && A->sexo!='F');
    printf("\n\n");
}

void EscreverDadosAluno(struct aluno A)
{
    printf("Os dados do aluno sao.\n\n");
    printf("O RA do aluno  : %d\n", A.ra);
    printf("O Nome do aluno: %s\n", A.nome);
    printf("O IRA do aluno : %.2f\n", A.ira);
    printf("O Sexo do aluno: %c\n", A.sexo);
    printf("\n\n");
}
