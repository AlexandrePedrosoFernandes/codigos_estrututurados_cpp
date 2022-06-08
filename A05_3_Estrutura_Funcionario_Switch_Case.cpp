// Este algoritmo define a estrutura de funcionarios com os campos:
//      codFunc, idadeFunc, sexoFunc, salFunc, nomeFunc e timeFunc.
//      Gera relatorios com o Switch Case
//      Alexandre Pedroso Feranades - RA 435791
//      Agosto de 2011

include <stdio.h>
include <stdlib.h>

int main(int argc, char *argv[])
{
    
    /* definicao da estrutura de funcionarios*/
    typedef struct 
    {
           int   codFunc;            /* codigo do funcionario*/   
           char  nomeFunc[20];       /* nome do funcionario*/   
           int   idadeFunc;          /* idade do funcionario*/   
           char  sexoFunc;           /* sexo do funcionario; usar (M) para masculino ou (F) para feminino*/   
           int   timeFunc;           /* codigo para o time de futebol que torce o funcionario*/
           float salFunc;            /* salario do funcionario*/
    }funcionario;
    
    /* declaracoo de duas variaveis do tipo estrutura funcionarios*/
    funcionario funcionario1,funcionario2,funcionario3,funcionario4,funcionario5;
    
    /* Outras variaveis */
    int opcao=1;            /* opcao para saida dos relatorios*/
    int time1=0;            /* Torcedores do Palmeiras*/
    int time2=0;            /* Torcedores do Sao Paulo*/
    int time3=0;            /* Torcedores do Corintians*/
    int time4=0;            /* Torcedores do Santos*/
    int time5=0;            /* Torcedores de outros times*/
    int codigo=0;           /* codigo do funcionario para impresa de seus dados*/
    
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
    do
    {
          printf("Digite o time [1]Palmeiras [2]Sao Paulo [3]Corintinas [4]Santos [5]Outros  : ");
          scanf("%d", &funcionario1.timeFunc);
    } while ((funcionario1.timeFunc!=1)&&(funcionario1.timeFunc!=2)&&(funcionario1.timeFunc!=3)&&(funcionario1.timeFunc!=4)&&(funcionario1.timeFunc!=5));
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
    fflush;
    do
    {
          printf("Digite o time [1]Palmeiras [2]Sao Paulo [3]Corintinas [4]Santos [5]Outros  : ");
          scanf("%d", &funcionario2.timeFunc);
    } while ((funcionario2.timeFunc!=1)&&(funcionario2.timeFunc!=2)&&(funcionario2.timeFunc!=3)&&(funcionario2.timeFunc!=4)&&(funcionario2.timeFunc!=5));
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
    do
    {
          printf("Digite o time [1]Palmeiras [2]Sao Paulo [3]Corintinas [4]Santos [5]Outros  : ");
          scanf("%d", &funcionario3.timeFunc);
    } while ((funcionario3.timeFunc!=1)&&(funcionario3.timeFunc!=2)&&(funcionario3.timeFunc!=3)&&(funcionario3.timeFunc!=4)&&(funcionario3.timeFunc!=5));
    printf("\n");

    /* entrada de dados do funcionarios 4*/
    printf("A seguir entre com os dados do funcionario 4.\n\n");
    printf("Digite o codigo : ");
    scanf("%d", &funcionario4.codFunc);
    printf("Digite o nome   : ");
    scanf("%s", &funcionario4.nomeFunc);
    printf("Digite a idade  : ");
    scanf("%d", &funcionario4.idadeFunc);
    do
    {
          printf("Digite o sexo [M ou F]: ");
          scanf("%*c%c", &funcionario4.sexoFunc);
    } while ((funcionario4.sexoFunc!='M')&&(funcionario4.sexoFunc!='F'));
    printf("Digite o salario (R$) : ");
    scanf("%f", &funcionario4.salFunc);
    do
    {
          printf("Digite o time [1]Palmeiras [2]Sao Paulo [3]Corintinas [4]Santos [5]Outros  : ");
          scanf("%d", &funcionario4.timeFunc);
    } while ((funcionario4.timeFunc!=1)&&(funcionario4.timeFunc!=2)&&(funcionario4.timeFunc!=3)&&(funcionario4.timeFunc!=4)&&(funcionario4.timeFunc!=5));
    printf("\n");

    /* entrada de dados do funcionarios 5*/
    printf("A seguir entre com os dados do funcionario 5.\n\n");
    printf("Digite o codigo : ");
    scanf("%d", &funcionario5.codFunc);
    printf("Digite o nome   : ");
    scanf("%s", &funcionario5.nomeFunc);
    printf("Digite a idade  : ");
    scanf("%d", &funcionario5.idadeFunc);
    do
    {
          printf("Digite o sexo [M ou F]: ");
          scanf("%*c%c", &funcionario5.sexoFunc);
    } while ((funcionario5.sexoFunc!='M')&&(funcionario5.sexoFunc!='F'));
    printf("Digite o salario (R$) : ");
    scanf("%f", &funcionario5.salFunc);
    do
    {
          printf("Digite o time [1]Palmeiras [2]Sao Paulo [3]Corintinas [4]Santos [5]Outros  : ");
          scanf("%d", &funcionario5.timeFunc);
    } while ((funcionario5.timeFunc!=1)&&(funcionario5.timeFunc!=2)&&(funcionario5.timeFunc!=3)&&(funcionario5.timeFunc!=4)&&(funcionario5.timeFunc!=5));
    printf("\n");

    /* saida de dados do funcionarios1*/
    while(opcao!=6)
    {
       printf("Escolha a opcao para impressao.\n\n");
       printf("1. Listagem dos dados de todos os funcionarios.\n");
       printf("2. Listagem dos dados de todos os funcionarios do sexo masculino.\n");
       printf("3. Listagem dos dados de todos os funcionarios do sexo feminino.\n");
       printf("4. Contagem, por time de futebol, da quantidade de torcedores.\n");
       printf("5. Listagem dos dados de um funcionario fornecido o seu codigo.\n");
       printf("6. Termino.\n\n");
       printf("Digite a opcao: ");
       scanf("%d", &opcao);
       printf("\n");
       switch(opcao)
       {
          case 1: /* saida dos dados de todos os funcionarios*/
                printf("Os dados do funcionario 1 sao:\n\n");
                printf("Codigo    : %d\n", funcionario1.codFunc);
                printf("Nome      : %s\n", funcionario1.nomeFunc);
                printf("Idade     : %d\n", funcionario1.idadeFunc);
                printf("Sexo      : %c\n", funcionario1.sexoFunc);
                printf("Salario R$: %.2f\n", funcionario1.salFunc);
                printf("Time      : %d\n", funcionario1.timeFunc);
                printf("\n");
    
                printf("Os dados do funcionario 2 sao:\n\n");
                printf("Codigo    : %d\n", funcionario2.codFunc);
                printf("Nome      : %s\n", funcionario2.nomeFunc);
                printf("Idade     : %d\n", funcionario2.idadeFunc);
                printf("Sexo      : %c\n", funcionario2.sexoFunc);
                printf("Salario R$: %.2f\n", funcionario2.salFunc);
                printf("Time      : %d\n", funcionario2.timeFunc);
                printf("\n");

                printf("Os dados do funcionario 3 sao:\n\n");
                printf("Codigo    : %d\n", funcionario3.codFunc);
                printf("Nome      : %s\n", funcionario3.nomeFunc);
                printf("Idade     : %d\n", funcionario3.idadeFunc);
                printf("Sexo      : %c\n", funcionario3.sexoFunc);
                printf("Salario R$: %.2f\n", funcionario3.salFunc);
                printf("Time      : %d\n", funcionario3.timeFunc);
                printf("\n");

                printf("Os dados do funcionario 4 sao:\n\n");
                printf("Codigo    : %d\n", funcionario4.codFunc);
                printf("Nome      : %s\n", funcionario4.nomeFunc);
                printf("Idade     : %d\n", funcionario4.idadeFunc);
                printf("Sexo      : %c\n", funcionario4.sexoFunc);
                printf("Salario R$: %.2f\n", funcionario4.salFunc);
                printf("Time      : %d\n", funcionario4.timeFunc);
                printf("\n");

                printf("Os dados do funcionario 5 sao:\n\n");
                printf("Codigo    : %d\n", funcionario5.codFunc);
                printf("Nome      : %s\n", funcionario5.nomeFunc);
                printf("Idade     : %d\n", funcionario5.idadeFunc);
                printf("Sexo      : %c\n", funcionario5.sexoFunc);
                printf("Salario R$: %.2f\n", funcionario5.salFunc);
                printf("Time      : %d\n", funcionario5.timeFunc);
                printf("\n");
                break;                 
          case 2: /* saida dos dados dos funcionarios do sexo masculino*/
                if (funcionario1.sexoFunc=='M')
                {               
                    printf("Os dados do funcionario 1 que e masculino:\n\n");
                    printf("Codigo    : %d\n", funcionario1.codFunc);
                    printf("Nome      : %s\n", funcionario1.nomeFunc);
                    printf("Idade     : %d\n", funcionario1.idadeFunc);
                    printf("Sexo      : %c\n", funcionario1.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario1.salFunc);
                    printf("Time      : %d\n", funcionario1.timeFunc);
                    printf("\n");
                }
                if (funcionario2.sexoFunc=='M')
                {               
                    printf("Os dados do funcionario 2 que e masculino:\n\n");
                    printf("Codigo    : %d\n", funcionario2.codFunc);
                    printf("Nome      : %s\n", funcionario2.nomeFunc);
                    printf("Idade     : %d\n", funcionario2.idadeFunc);
                    printf("Sexo      : %c\n", funcionario2.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario2.salFunc);
                    printf("Time      : %d\n", funcionario2.timeFunc);
                    printf("\n");
                }
                if (funcionario3.sexoFunc=='M')
                {               
                    printf("Os dados do funcionario 3 que e masculino:\n\n");
                    printf("Codigo    : %d\n", funcionario3.codFunc);
                    printf("Nome      : %s\n", funcionario3.nomeFunc);
                    printf("Idade     : %d\n", funcionario3.idadeFunc);
                    printf("Sexo      : %c\n", funcionario3.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario3.salFunc);
                    printf("Time      : %d\n", funcionario3.timeFunc);
                    printf("\n");
                }
                if (funcionario4.sexoFunc=='M')
                {               
                    printf("Os dados do funcionario 4 que e masculino:\n\n");
                    printf("Codigo    : %d\n", funcionario4.codFunc);
                    printf("Nome      : %s\n", funcionario4.nomeFunc);
                    printf("Idade     : %d\n", funcionario4.idadeFunc);
                    printf("Sexo      : %c\n", funcionario4.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario4.salFunc);
                    printf("Time      : %d\n", funcionario4.timeFunc);
                    printf("\n");
                }
                if (funcionario5.sexoFunc=='M')
                {               
                    printf("Os dados do funcionario 5 que e masculino:\n\n");
                    printf("Codigo    : %d\n", funcionario5.codFunc);
                    printf("Nome      : %s\n", funcionario5.nomeFunc);
                    printf("Idade     : %d\n", funcionario5.idadeFunc);
                    printf("Sexo      : %c\n", funcionario5.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario5.salFunc);
                    printf("Time      : %d\n", funcionario5.timeFunc);
                    printf("\n");
                }
                break;                 
          case 3: /* saida dos dados dos funcionarios do sexo feminino*/
                if (funcionario1.sexoFunc=='F')
                {               
                    printf("Os dados do funcionario 1 que e feminino:\n\n");
                    printf("Codigo    : %d\n", funcionario1.codFunc);
                    printf("Nome      : %s\n", funcionario1.nomeFunc);
                    printf("Idade     : %d\n", funcionario1.idadeFunc);
                    printf("Sexo      : %c\n", funcionario1.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario1.salFunc);
                    printf("Time      : %d\n", funcionario1.timeFunc);
                    printf("\n");
                }
                if (funcionario2.sexoFunc=='F')
                {               
                    printf("Os dados do funcionario 2 que e feminino:\n\n");
                    printf("Codigo    : %d\n", funcionario2.codFunc);
                    printf("Nome      : %s\n", funcionario2.nomeFunc);
                    printf("Idade     : %d\n", funcionario2.idadeFunc);
                    printf("Sexo      : %c\n", funcionario2.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario2.salFunc);
                    printf("Time      : %d\n", funcionario2.timeFunc);
                    printf("\n");
                }
                if (funcionario3.sexoFunc=='F')
                {               
                    printf("Os dados do funcionario 3 que e feminino:\n\n");
                    printf("Codigo    : %d\n", funcionario3.codFunc);
                    printf("Nome      : %s\n", funcionario3.nomeFunc);
                    printf("Idade     : %d\n", funcionario3.idadeFunc);
                    printf("Sexo      : %c\n", funcionario3.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario3.salFunc);
                    printf("Time      : %d\n", funcionario3.timeFunc);
                    printf("\n");
                }
                if (funcionario4.sexoFunc=='F')
                {               
                    printf("Os dados do funcionario 4 que e feminino:\n\n");
                    printf("Codigo    : %d\n", funcionario4.codFunc);
                    printf("Nome      : %s\n", funcionario4.nomeFunc);
                    printf("Idade     : %d\n", funcionario4.idadeFunc);
                    printf("Sexo      : %c\n", funcionario4.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario4.salFunc);
                    printf("Time      : %d\n", funcionario4.timeFunc);
                    printf("\n");
                }
                if (funcionario5.sexoFunc=='F')
                {               
                    printf("Os dados do funcionario 5 que e feminino:\n\n");
                    printf("Codigo    : %d\n", funcionario5.codFunc);
                    printf("Nome      : %s\n", funcionario5.nomeFunc);
                    printf("Idade     : %d\n", funcionario5.idadeFunc);
                    printf("Sexo      : %c\n", funcionario5.sexoFunc);
                    printf("Salario R$: %.2f\n", funcionario5.salFunc);
                    printf("Time      : %d\n", funcionario5.timeFunc);
                    printf("\n");
                }
                break;                 

          case 4: /* Contagem do total de torcedores por time*/
                if (funcionario1.timeFunc==1)
                    time1=time1+1;
                if (funcionario1.timeFunc==2)
                    time2=time2+1;
                if (funcionario1.timeFunc==3)
                    time3=time3+1;
                if (funcionario1.timeFunc==4)
                    time4=time4+1;
                if (funcionario1.timeFunc==5)
                    time5=time5+1;

                if (funcionario2.timeFunc==1)
                    time1=time1+1;
                if (funcionario2.timeFunc==2)
                    time2=time2+1;
                if (funcionario2.timeFunc==3)
                    time3=time3+1;
                if (funcionario2.timeFunc==4)
                    time4=time4+1;
                if (funcionario2.timeFunc==5)
                    time5=time5+1;

                if (funcionario3.timeFunc==1)
                    time1=time1+1;
                if (funcionario3.timeFunc==2)
                    time2=time2+1;
                if (funcionario3.timeFunc==3)
                    time3=time3+1;
                if (funcionario3.timeFunc==4)
                    time4=time4+1;
                if (funcionario3.timeFunc==5)
                    time5=time5+1;

                if (funcionario4.timeFunc==1)
                    time1=time1+1;
                if (funcionario4.timeFunc==2)
                    time2=time2+1;
                if (funcionario4.timeFunc==3)
                    time3=time3+1;
                if (funcionario4.timeFunc==4)
                    time4=time4+1;
                if (funcionario4.timeFunc==5)
                    time5=time5+1;

                if (funcionario5.timeFunc==1)
                    time1=time1+1;
                if (funcionario5.timeFunc==2)
                    time2=time2+1;
                if (funcionario5.timeFunc==3)
                    time3=time3+1;
                if (funcionario5.timeFunc==4)
                    time4=time4+1;
                if (funcionario5.timeFunc==5)
                    time5=time5+1;

                printf("Total de torcedores por time:\n\n");
                printf("Palmeiras   : %d\n", time1);
                printf("Sao Paulo   : %d\n", time2);
                printf("Corintians  : %d\n", time3);
                printf("Santos      : %d\n", time4);
                printf("Outros times: %d\n", time5);
                printf("\n");
                break;                 

          case 5: /* Imprime dados do funcionario solicitado*/
                printf("Digite a Codigo do Funcionario: ");
                scanf("%d", &codigo);
                printf("\n");
                switch(codigo)
                {
                       case 1:
                              printf("Os dados do funcionario 1 sao:\n\n");
                              printf("Codigo    : %d\n", funcionario1.codFunc);
                              printf("Nome      : %s\n", funcionario1.nomeFunc);
                              printf("Idade     : %d\n", funcionario1.idadeFunc);
                              printf("Sexo      : %c\n", funcionario1.sexoFunc);
                              printf("Salario R$: %.2f\n", funcionario1.salFunc);
                              printf("Time      : %d\n", funcionario1.timeFunc);
                              printf("\n");
                              break;    
                       case 2:
                              printf("Os dados do funcionario 2 sao:\n\n");
                              printf("Codigo    : %d\n", funcionario2.codFunc);
                              printf("Nome      : %s\n", funcionario2.nomeFunc);
                              printf("Idade     : %d\n", funcionario2.idadeFunc);
                              printf("Sexo      : %c\n", funcionario2.sexoFunc);
                              printf("Salario R$: %.2f\n", funcionario2.salFunc);
                              printf("Time      : %d\n", funcionario2.timeFunc);
                              printf("\n");
                              break;
                       case 3:
                              printf("Os dados do funcionario 3 sao:\n\n");
                              printf("Codigo    : %d\n", funcionario3.codFunc);
                              printf("Nome      : %s\n", funcionario3.nomeFunc);
                              printf("Idade     : %d\n", funcionario3.idadeFunc);
                              printf("Sexo      : %c\n", funcionario3.sexoFunc);
                              printf("Salario R$: %.2f\n", funcionario3.salFunc);
                              printf("Time      : %d\n", funcionario3.timeFunc);
                              printf("\n");
                              break;
                       case 4:
                              printf("Os dados do funcionario 4 sao:\n\n");
                              printf("Codigo    : %d\n", funcionario4.codFunc);
                              printf("Nome      : %s\n", funcionario4.nomeFunc);
                              printf("Idade     : %d\n", funcionario4.idadeFunc);
                              printf("Sexo      : %c\n", funcionario4.sexoFunc);
                              printf("Salario R$: %.2f\n", funcionario4.salFunc);
                              printf("Time      : %d\n", funcionario4.timeFunc);
                              printf("\n");
                       case 5:
                              printf("Os dados do funcionario 5 sao:\n\n");
                              printf("Codigo    : %d\n", funcionario5.codFunc);
                              printf("Nome      : %s\n", funcionario5.nomeFunc);
                              printf("Idade     : %d\n", funcionario5.idadeFunc);
                              printf("Sexo      : %c\n", funcionario5.sexoFunc);
                              printf("Salario R$: %.2f\n", funcionario5.salFunc);
                              printf("Time      : %d\n", funcionario5.timeFunc);
                              printf("\n");
                              break;                 
                }             
                break;                 
       }
    }
    // finalizacao do programa
    system("PAUSE");
    return(0);
}
