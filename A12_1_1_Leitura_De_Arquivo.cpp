/* 
   Obtencao de dados a partir de registros armazenados em arquivos
   Alexandre Pedroso Fernandes - RA: 435791 - SJC
   novembro 2011
*/

include <stdio.h>
include "registro.h"

int main(){
    tProduto produto;
    FILE *arq;
    int codigoPesquisa;        // codigo para ser pesquisado
    float quantidadePesquisa;  // quantidade totalizada do produto pesquisado
    float valorTotalPesquisa;  // quantidade totalizada do produto pesquisado

    codigoPesquisa=-1;
    quantidadePesquisa=0;
    valorTotalPesquisa=0;
                         
    //abertura do arquivo
    arq = fopen("produtos.dat","r");
    
    if(!arq)
        perror("Falha na abertura do arquivo.\n\n");
    else{
         printf("Total de produtos cadatrados\n\n");
         while(codigoPesquisa != 0){   
               printf("Digite um codigo de produto para pesquisa: ");
               scanf("%d", &codigoPesquisa);
               printf("\n");
		       while(fread(&produto, sizeof(produto),1, arq) != 0){
                     if(codigoPesquisa==produto.codigo){
                         quantidadePesquisa=quantidadePesquisa+produto.quantidade;
                         valorTotalPesquisa=valorTotalPesquisa+
                                (produto.quantidade*produto.valorUnitario);
                     }
               }
               if(codigoPesquisa != 0){
                   printf("  Codigo - Quantidade - Valor\n");
                   printf("  %.d ", codigoPesquisa);
                   printf("   ");
                   printf("  %.2f ", quantidadePesquisa);
                   printf("   ");
                   printf("  %.2f ", valorTotalPesquisa);
                   printf("\n\n");
               }
               quantidadePesquisa=0;
               valorTotalPesquisa=0;
//               fseek(arq, sizeof(produto),0);
               fseek(arq, 0, SEEK_SET);
         }

         // Fecha arquivo    
         fclose(arq);
    }
         
    // Finalizacao do programa

    system("PAUSE");
    return(0);    
}


/* 
   definicoes para os dados do arquivo
   Alexandre Pedroso Fernandes - RA: 435791 - SJC
   Novembro 2011

#ifndef _REGISTRO_H
#define _REGISTRO_H

typedef struct{
        int codigo;
        float quantidade;
        float valorUnitario;
} tProduto;

#endif
*/
