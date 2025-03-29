#include <stdio.h>

int main(){
    //Movimentando as Peças do xadrez
    //Desafio: nível novato



    int torre = 1, bispo = 1 ,rainha = 1;
    
    //TORRE Move-se 5 casas para a direita
    printf("\n");
    printf("Movimentação da TORRE:\n");
    
    for (torre = 1; torre <= 5; torre++)
    {
        printf("%d Direia\n", torre);
    }

    //BISPO cinco casas na diagonal para cima e à direita.
    printf("\n");
    printf("Movimentação do BISPO: \n");

    while (bispo <= 5)
    {
        printf("%d Cima, Direita \n", bispo);
        bispo++;
    }

    //RAINHA movimento oito casas para a esquerda.
    printf("\n");
    printf("Movimentação da RAINHA: \n");

    do
    {
        
        printf("%d Esquerda\n", rainha);
        rainha++;

    } while (rainha <= 8);


    
    
        return 0;
    }