/* 
    Modificar dados em arquivos
    Alexandre Pedroso Fernandes - RA: 435791 - SJC
    Novembro 2011
*/

include <stdio.h>
include "registro.h"

int main(){
    tProduto produto, altera;
    FILE *arq;
    long posicaoAtual; // variavel para armazenar o resultado do ftell
	int cont = 0;

    // abertura do arquivo com opcao "r+b" para atualizacao em arquivos binaarios
    arq = fopen("produtos.dat","r+b");
    
    if(!arq)
         perror("Falha na abertura do arquivo");
    else{
         printf("Modificar dados do arquivo de produtos.\n\n");
         printf("Digitar o codigo do produto para alteracao: ");
         scanf("%d", &altera.codigo);
         printf("Informe o novo valor untario deste produto: ");
         scanf("%f", &altera.valorUnitario);
         printf("\n");
         
         // busca registro 
         while(fread(&produto, sizeof(produto),1, arq) != 0){
               if(altera.codigo==produto.codigo){
                     posicaoAtual = ftell(arq);
			         printf("Registro #%d\n", cont);
                     printf("preco = %.2f", produto.valorUnitario);           
                     printf("\n");
                     produto.valorUnitario=altera.valorUnitario;

                     // Retorna o ponterio no registro anterior e subscreve o registro
                     fseek(arq, -sizeof(produto), SEEK_CUR);
                     fwrite(&produto, sizeof(produto),1, arq);
                     printf("Novo preco = %.2f", produto.valorUnitario);           
                     printf("\n\n");
                     
                     // Reposiciona o ponterio no pr�ximo registro
                     fseek(arq, posicaoAtual, SEEK_SET);
               }
               cont++;
         }     
    }

    // finalizar o programa
    system("PAUSE");
    return(0);
}
