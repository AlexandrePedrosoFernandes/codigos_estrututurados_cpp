// Este algoritmo define a estrutura de funcionarios aninhado
//      Imprime resultado segundo o funcionario mais jovem
//      Alexandre Pedroso Feranades - RA 435791
//      Agosto de 2011

include <stdio.h>
include <stdlib.h>

int main(int argc, char *argv[])
{

    /* definicao da estrutura de endereco do funcionarios*/
    struct endereco
    {
           char  rua[40];          /* nome da rua do endereco do funcionario*/   
           int   numero;           /* numero do endereco do funcionario*/   
           char  complemento[10];  /* complemento do endereco do funcionario*/   
           char  cidade[35];       /* cidade do do endereco do funcionario*/   
           char  estado[2];       /* estado do endereco do funcionario*/   
           char  cep[8];          /* cep do endereco do funcionario*/   
    };

    /* definicao da estrutura de funcionarios*/
    struct funcionario
    {
           int   codFunc;            /* codigo do funcionario*/   
           char  nomeFunc[20];       /* nome do funcionario*/   
           int   idadeFunc;          /* idade do funcionario*/   
           char  sexoFunc;           /* sexo do funcionario; usar (M) para masculino ou (F) para feminino*/   
           float salFunc;            /* salario do funcionario*/
           struct endereco endFunc;  /* endereco do funcionario*/
    };

    /* declaracao de variaveis funcionarios*/
    struct funcionario funcionario1;
    struct funcionario funcionario2;
    struct funcionario funcionario3;
    
    /* entrada de dados do funcionarios 1*/
    printf("A seguir entre com os dados do funcionario 1.\n\n");
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
    } while ((funcionario1.sexoFunc!='M')&&(funcionario1.sexoFunc!='F'));
    printf("Digite o salario (R$) : ");
    scanf("%f", &funcionario1.salFunc);
    printf("Digite a rua  do endereco  : ");
    scanf("%s", &funcionario1.endFunc.rua);
    printf("Digite o numero do endereco: ");
    scanf("%d", &funcionario1.endFunc.numero);
    printf("Digite o complemento       : ");
    scanf("%s", &funcionario1.endFunc.complemento);
    printf("Digite a cidade do endereco: ");
    scanf("%s", &funcionario1.endFunc.cidade);
    printf("Digite a sigla do estado   : ");
    scanf("%s", &funcionario1.endFunc.estado);
    printf("Digite o CEP do endereco   : ");
    scanf("%s", &funcionario1.endFunc.cep);
    printf("\n");
    
    /* entrada de dados do funcionarios 2*/
    printf("A seguir entre com os dados do funcionario 2.\n\n");
    printf("Digite o codigo : ");
    scanf("%d", &funcionario2.codFunc);
    printf("Digite o nome   : ");
    scanf("%s", &funcionario2.nomeFunc);
    printf("Digite a idade  : ");
    scanf("%d", &funcionario2.idadeFunc);
    do
    {
          printf("Digite o sexo [M ou F]: ");
          scanf("%*c%c", &funcionario2.sexoFunc);
    } while ((funcionario2.sexoFunc!='M')&&(funcionario2.sexoFunc!='F'));
    printf("Digite o salario (R$) : ");
    scanf("%f", &funcionario2.salFunc);
    printf("Digite a rua  do endereco  : ");
    scanf("%s", &funcionario2.endFunc.rua);
    printf("Digite o numero do endereco: ");
    scanf("%d", &funcionario2.endFunc.numero);
    printf("Digite o complemento       : ");
    scanf("%s", &funcionario2.endFunc.complemento);
    printf("Digite a cidade do endereco: ");
    scanf("%s", &funcionario2.endFunc.cidade);
    printf("Digite a sigla do estado   : ");
    scanf("%s", &funcionario2.endFunc.estado);
    printf("Digite o CEP do endereco   : ");
    scanf("%s", &funcionario2.endFunc.cep);
    printf("\n");

    /* entrada de dados do funcionarios 3*/
    printf("A seguir entre com os dados do funcionario 3.\n\n");
    printf("Digite o codigo : ");
    scanf("%d", &funcionario3.codFunc);
    printf("Digite o nome   : ");
    scanf("%s", &funcionario3.nomeFunc);
    printf("Digite a idade  : ");
    scanf("%d", &funcionario3.idadeFunc);
    do
    {
          printf("Digite o sexo [M ou F]: ");
          scanf("%*c%c", &funcionario3.sexoFunc);
    } while ((funcionario3.sexoFunc!='M')&&(funcionario3.sexoFunc!='F'));
    printf("Digite o salario (R$) : ");
    scanf("%f", &funcionario3.salFunc);
    printf("Digite a rua  do endereco  : ");
    scanf("%s", &funcionario3.endFunc.rua);
    printf("Digite o numero do endereco: ");
    scanf("%d", &funcionario3.endFunc.numero);
    printf("Digite o complemento       : ");
    scanf("%s", &funcionario3.endFunc.complemento);
    printf("Digite a cidade do endereco: ");
    scanf("%s", &funcionario3.endFunc.cidade);
    printf("Digite a sigla do estado   : ");
    scanf("%s", &funcionario3.endFunc.estado);
    printf("Digite o CEP do endereco   : ");
    scanf("%s", &funcionario3.endFunc.cep);
    printf("\n");

    /* saida de dados do funcionarios1*/
    if (funcionario1.idadeFunc<funcionario2.idadeFunc)
    {
          if(funcionario1.idadeFunc<funcionario3.idadeFunc)
          {
                printf("O funcionario 1 e o mais jovem:\n\n");
                printf("Codigo     : %d\n", funcionario1.codFunc);
                printf("Nome       : %s\n", funcionario1.nomeFunc);
                printf("Idade      : %d\n", funcionario1.idadeFunc);
                printf("Sexo       : %c\n", funcionario1.sexoFunc);
                printf("Salario R$ : %.2f\n", funcionario1.salFunc);
                printf("Rua        : %d\n", funcionario1.endFunc.rua);
                printf("Numero     : %d\n", funcionario1.endFunc.numero);
                printf("Complemento: %s\n", funcionario1.endFunc.complemento);
                printf("Cidade     : %s\n", funcionario1.endFunc.cidade);
                printf("Estado     : %s\n", funcionario1.endFunc.estado);
                printf("CEP        : %s\n", funcionario1.endFunc.cep);
                printf("\n");
          }
    }
    else if (funcionario2.idadeFunc<funcionario3.idadeFunc)
         {
             printf("O funcionario 2 e o mais jovem:\n\n");
             printf("Codigo     : %d\n", funcionario2.codFunc);
             printf("Nome       : %s\n", funcionario2.nomeFunc);
             printf("Idade      : %d\n", funcionario2.idadeFunc);
             printf("Sexo       : %c\n", funcionario2.sexoFunc);
             printf("Salario R$ : %.2f\n", funcionario2.salFunc);
             printf("Rua        : %s\n", funcionario2.endFunc.rua);
             printf("Numero     : %d\n", funcionario2.endFunc.numero);
             printf("Complemento: %d\n", funcionario2.endFunc.complemento);
             printf("Cidade     : %s\n", funcionario2.endFunc.cidade);
             printf("Estado     : %s\n", funcionario2.endFunc.estado);
             printf("CEP        : %s\n", funcionario2.endFunc.cep);
             printf("\n");
         }
         else
         {
             printf("O funcionario 3 e o mais jovem:\n\n");
             printf("Codigo     : %d\n", funcionario3.codFunc);
             printf("Nome       : %s\n", funcionario3.nomeFunc);
             printf("Idade      : %d\n", funcionario3.idadeFunc);
             printf("Sexo       : %c\n", funcionario3.sexoFunc);
             printf("Salario R$ : %.2f\n", funcionario3.salFunc);
             printf("Rua        : %s\n", funcionario3.endFunc.rua);
             printf("Numero     : %d\n", funcionario3.endFunc.numero);
             printf("Complemento: %d\n", funcionario3.endFunc.complemento);
             printf("Cidade     : %s\n", funcionario3.endFunc.cidade);
             printf("Estado     : %s\n", funcionario3.endFunc.estado);
             printf("CEP        : %s\n", funcionario3.endFunc.cep);
             printf("\n");
         }
           
    // finalizacao do programa
    system("PAUSE");
    return(0);
}
