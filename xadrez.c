#include <stdio.h>

         //Desafio: nível mestre
        //Criando Movimentos Complexos
    
     //TORRE Move-se 5 casas para a direita = #recursividade
      void moverTorre(int torre){
        if (torre > 0 ){
    
        moverTorre(torre - 1);
        printf("%d Direita\n", torre);
            }
    
         }

        //BISPO 5 casas na diagonal para cima e à direita = #Loops Aninhados 
         void moverBispo(){
            printf("\n");
            printf("Movimentacao da BISPO:\n");
            for (int linha = 1; linha <= 5; linha++){
             for(int coluna = 1; coluna <= 2; coluna++){
             printf(coluna == 1 ? "%d Cima ," : " Direita\n", linha);
            }
            }
             }

            //RAINHA movimento 8 casas para a esquerda = #recursividade
        void moverRainha(int rainha){  
            if (rainha > 0 ){
        
            moverRainha(rainha - 1);
            printf("%d Esquerda\n", rainha);
                }
        
             }
            
            //invoca ambas funções
            int main(){

            int torre = 5;
            printf("\n");
            printf("Movimentacao da TORRE:\n");
            moverTorre(torre);
        
            moverBispo();

            int rainha = 8;
            printf("\n");
            printf("Movimentacao da RAINHA:\n");
            moverRainha(rainha);
        
    
            // CAVALO movimento 2 casas pra cima e depois 1 casa a direita um "L" = #Loops Complexos
               printf("\n");
              printf("Movimentacao da CAVALO: \n");
            for (int cavalo = 1; cavalo <= 2; cavalo++) {
            printf("%d Cima\n",cavalo);
              if (cavalo == 2) { 
             for (int cavaloo = 1; cavaloo < 2;  cavaloo++) {
            printf("3 Direita\n");
              }
              }
             }
                     return 0;
            }
    