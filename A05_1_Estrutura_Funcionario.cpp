// Este algoritmo define a estrutura de funcionarios com os campos:
//      codFunc, idadeFunc, sexoFunc, salFunc, nomeFunc e timeFunc.
//      Alexandre Pedroso Feranades - RA 435791
//      Agosto de 2011

include <stdio.h>
include <stdlib.h>

// Declaracoes Globais
# define TAMANHO 20 /* Tamanho maximo do nome do funcionario e do time de futebol*/

int main(int argc, char *argv[])
{
    
    /* definicao da estrutura de funcionarios*/
    struct funcionario
    {
           int   codFunc;            /* codigo do funcionario*/   
           char  nomeFunc[TAMANHO];  /* nome do funcionario*/   
           int   idadeFunc;          /* idade do funcionario*/   
           char  sexoFunc;           /* sexo do funcionario; usar (M) para masculino ou (F) para feminino*/   
           char  timeFunc[TAMANHO];  /* time de futebol que torce o funcionario*/
           float salFunc;            /* salario do funcionario*/
    };
    
    /* declaracao de duas variaveis do tipo estrutura funcionarios*/
    struct funcionario funcionario1;
    struct funcionario funcionario2;
    
    /* entrada de dados do funcionarios1*/
    printf("A seguir entre com os dados do funcionario.\n\n");
    printf("Digite o codigo : ");
    scanf("%d", &funcionario1.codFunc);
    printf("Digite o nome   : ");
    scanf("%s", &funcionario1.nomeFunc);
    printf("Digite a idade  : ");
    scanf("%d", &funcionario1.idadeFunc);
    do
    {
          printf("Digite o sexo [M ou F]: ");
          scanf("%*c%c", &funcionario1.sexoFunc);
    } while ((funcionario1.sexoFunc!='m')&&(funcionario1.sexoFunc!='M')&&(funcionario1.sexoFunc!='f')&&(funcionario1.sexoFunc!='F'));
    printf("Digite o salario (R$) : ");
    scanf("%f", &funcionario1.salFunc);
    printf("Digite o time   : ");
    scanf("%s", &funcionario1.timeFunc);
    printf("\n");
    
    /* sida de dados do funcionarios1*/
    printf("Os dados do funcionario 1 sao:\n\n");
    printf("Codigo    : %d\n", funcionario1.codFunc);
    printf("Nome      : %s\n", funcionario1.nomeFunc);
    printf("Idade     : %d\n", funcionario1.idadeFunc);
    printf("Sexo      : %c\n", funcionario1.sexoFunc);
    printf("Salario R$: %.2f\n", funcionario1.salFunc);
    printf("Time      : %s\n", funcionario1.timeFunc);
    printf("\n");
    
    /* Atribuicao dos dados do funcionarios 1 para o funcionario 2*/
    funcionario2=funcionario1;

    /* saida de dados do funcionarios2*/
    printf("Os dados do funcionario 2 sao:\n\n");
    printf("Codigo    : %d\n", funcionario2.codFunc);
    printf("Nome      : %s\n", funcionario2.nomeFunc);
    printf("Idade     : %d\n", funcionario2.idadeFunc);
    printf("Sexo      : %c\n", funcionario2.sexoFunc);
    printf("Salario R$: %.2f\n", funcionario2.salFunc);
    printf("Time      : %s\n", funcionario2.timeFunc);
    printf("\n");

    // finalizacao do programa
    
    system("PAUSE");
    return(0);

}
