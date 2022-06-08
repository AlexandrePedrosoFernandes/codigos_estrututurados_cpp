/*
  Este algoritmo realiza a alocacao dinamica para duas matrizes e calcula e 
       exibe a tranposta da matriz e posteriormente calcula a multiplicacao da 
       matriz por sua transposta.
       Alexandre Pedroso Fernandes - RA: 435791 - SJC
       Novembro 2011
*/

include<stdio.h>
include<stdlib.h>
include<malloc.h>

// Funcao principal
int main(int argc, char *argv[]){
    int i,j,k;                  // controle de loop
    int linhas1,colunas1,linhas2,colunas2,
           linhas3,colunas3;  // armazena o numero de linhas e colunas da matriz
    float **mat1, **mat2, **mat3, soma;         //ponteiro para matriz
    
    // Leitura do total de linhas e colunas das matrizes 1 e 2
    do{
       printf("Informe o total de linhas da matraiz 1  : ");
       scanf("%d",&linhas1);
    }
    while(linhas1<2);
    do{
       printf("Informe o total de Colunas da matraiz 1 : ");
       scanf("%d",&colunas1);
    }
    while(colunas1<2);
    printf("\n");
    linhas2=colunas1;
    colunas2=linhas1;
    linhas3=linhas2;
    colunas3=linhas1;
    
    // Aloca��o do vetor e ponteiros para as matraizes 1 e 2
    mat1= malloc (linhas1*sizeof(float *));
    mat2= malloc (linhas2*sizeof(float *));
    mat3= malloc (linhas2*sizeof(float *));

    // Aloca��o do bloco para os dados para as matraizes 1 e 2
    mat1[0]= malloc (linhas1*colunas1*sizeof(float));
    mat2[0]= malloc (linhas2*colunas2*sizeof(float));
    mat3[0]= malloc (linhas3*colunas3*sizeof(float));

    if(!mat1 || !mat1[0] || !mat2 || !mat2[0] || !mat3 || !mat3[0])
         printf("Erro na alocacao.\n");
    else{
         // Ajuste dos demais ponteiros
         for(i=0;i<linhas1;i++)
             mat1[i]=&mat1[0][i*colunas1];
         for(i=0;i<linhas2;i++)
             mat2[i]=&mat2[0][i*colunas2];
         for(i=0;i<linhas3;i++)
             mat3[i]=&mat3[0][i*colunas3];
         
         // Leitura da matriz
         for(i=0;i<linhas1;i++){
             for(j=0;j<colunas1;j++){
                 printf("Digite o valor da posicao [%d][%d]: ", i,j);
                 scanf("%f", &mat1[i][j]);
             }
         }
         printf("\n");
         printf("Exibe a Matriz.\n\n");
         for(i=0;i<linhas1;i++){
             for(j=0;j<colunas1;j++){
                 printf("%6.1f", mat1[i][j]);
             }
             printf("\n");
         }
         printf("\n");
         
         // Calculo da transposta
         printf("Exibe a Transposta da Matriz.\n\n");
         for(i=0;i<linhas2;i++){
             for(j=0;j<colunas2;j++){
                 mat2[i][j]=mat1[j][i];
                 printf("%6.1f", mat2[i][j]);
             }
             printf("\n");
         }
         printf("\n");
         
         // Calculo da multiplicacao
         printf("Exibe a Multiplicacao da Matriz pela Transposta.\n\n");
         if(linhas1<colunas1){
             for(i = 0; i < linhas1; i++){
                 for(j = 0; j < linhas1; j++){
                     soma = 0;
                     for(k = 0; k < colunas1; k++)
                           soma += mat1[i][k] * mat2[k][j];
                     mat3[i][j] = soma;
                     printf("%6.1f", mat3[i][j]);
                 }
                 printf("\n");
             }
         }
         else{
             for(i = 0; i < colunas1; i++){
                 for(j = 0; j < colunas1; j++){
                     soma = 0;
                     for(k = 0; k < colunas1; k++)
                           soma += mat1[i][k] * mat2[k][j];
                     mat3[i][j] = soma;
                     printf("%6.1f", mat3[i][j]);
                 }
                 printf("\n");
             }
         }
         printf("\n");
         
         // desalocacao
         free(mat1[0]); // bloco de dados
         free(mat1); // vetor das linhas
         free(mat2[0]); // bloco de dados
         free(mat2); // vetor das linhas
         free(mat3[0]); // bloco de dados
         free(mat3); // vetor das linhas
    }         
    
    // Finalizacao do programa
    system("PAUSE");
    return(0);
}
