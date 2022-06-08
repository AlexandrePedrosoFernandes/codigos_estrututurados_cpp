//Este algoritmo regitra em um arranjo de estrutura o registro (ra) e nota
//     de cada aluno de uma turma e calcula a media geral e a varianca da 
//     media para cada aluno da turma.
//     Alexandre Pedroso Fernandes - RA: 435791 - SJC
//     Outubro de 2011

include<stdio.h>
include<stdlib.h>
include<math.h>

define MAXIMO 100

typedef struct{
        int ra;
        float nota;
}tAlunos;

/*funcao para calculo da media dos alunos*/

float calculaMedia(tAlunos *alunos, int totalAlunos){
      int i;        /* controle do loop*/
      float media;  /* variavel para calcular e retornar a media da turma*/

      //calculo da media
      
      media=0;
      for(i=0;i<totalAlunos;i++){
          media=media+alunos[i].nota;
      }
      media=media/totalAlunos;
      printf("A media dos alunos da turma e     : %.2f", media);
      printf("\n");
      return media;
} 

/*funcao para calculo da varianca entre a media e a nota de cada aluno*/

float calculaVarianca(tAlunos *alunos, int totalAlunos, float media){
      int i;           /* controle do loop*/
      float varianca;  /* variavel para calcular e retornar a varianca da turma*/
      float somatoria; /* variavel auxiliar para calculo da varianca*/

      //calculo da media
      
      varianca=0;
      for(i=0;i<totalAlunos;i++){
          somatoria=alunos[i].nota-media;
          varianca=varianca+pow(somatoria,2);
      }
      varianca=varianca/(totalAlunos-1);
      printf("A varianca das medias dos alunos e: %.2f", varianca);
      printf("\n");
      return varianca;
} 

/*procedimento para listar o ra dos alunos com a media no intervalo de 
	 media - raiz de varianca e media + raiz de varianca*/

void listaAlunos(tAlunos *alunos, int totalAlunos, float media, float varianca){
     int i;                 // controle do loop
     float raiz, intervaloMenor, intervaloMaior;  // raiz da varianca
     
     raiz=sqrt(varianca);
     intervaloMenor=media-(2*raiz);
     intervaloMaior=media+(2*raiz);
     printf("A raiz quadrada da varianca e     : %.2f",raiz);
     printf("\n\n");
     printf("Relacao dos registros de alunos com a media no intervalo solicitado.\n\n");
     for(i=0;i<totalAlunos;++i){
         if(alunos[i].nota>intervaloMenor && alunos[i].nota<intervaloMaior){
              printf("O Aluno de RA: %d", alunos[i].ra);
              printf("\n");
         }
     }
     printf("\n");
}
      
// Funcao principal

int main(int argc, char *argv[]){
    tAlunos alunos[MAXIMO];/*registro de alinos*/
    int i;                 /*variavel pra controle do loop*/
    int totalAlunos;       /*vari�vel para armazenar o total de alunos da turma*/
    float media, varianca; /*vari�veis para armazenar a m�dia e a varian�a 
                                        das notas da turma*/

    // leitura do total de alunos da turma com consist6encia
    
    printf("Relacao de alunos com media entre o intervalo solicitado.\n");
    printf("     Intervalo = media geral +/- raiz de varianca.\n\n");

    do{
         printf("Informe o total de alunos: ");
         scanf("%d",&totalAlunos);
         if(totalAlunos<2)
              printf("Necessario o minimo de 2 alunos para realizar os calculos.\n");  
         if(totalAlunos>MAXIMO)
              printf("Excedeu o maximo de alunos por turma.\n");
    }
    while(totalAlunos<2 || totalAlunos>MAXIMO);  
    printf("\n");

    // leitura dos dados dos alunos sem consistencia
    
    for(i=0;i<totalAlunos;++i){
        printf("Entre com os dados do %d Aluno.\n",i+1);
        printf("Digite o RA do aluno: ");
        scanf("%d",&alunos[i].ra);
        printf("Digite o nota do aluno: ");
        scanf("%f",&alunos[i].nota);
        printf("\n");
    }
         
	/*chamada das funcao para calculo da varianca que chama 
            a funcao para calculo da media dos alunos*/

    media= calculaMedia(&alunos[0], totalAlunos);
	varianca=calculaVarianca(&alunos[0], totalAlunos, media);

	//chamada do procedimento para calculo da media dos alunos
	
    listaAlunos(&alunos[0], totalAlunos, media, varianca);
    
    // finalizacao do programa
    
    system("PAUSE");
    return(0);
}
    
