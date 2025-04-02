#include <stdio.h>

int main(){
    //Movimentando as Peças do xadrez
    //Desafio: nível novato



    int torre = 1, bispo = 1 ,rainha = 1;
    
    //TORRE Move-se 5 casas para a direita
    printf("\n");
    printf("Movimentacao da TORRE:\n");
    
    for (torre = 1; torre <= 5; torre++)
    {
        printf("%d Direia\n", torre);
    }

    //BISPO cinco casas na diagonal para cima e à direita.
    printf("\n");
    printf("Movimentacao do BISPO: \n");

    while (bispo <= 5)
    {
        printf("%d Cima, Direita \n", bispo);
        bispo++;
    }

    //RAINHA movimento oito casas para a esquerda.
    printf("\n");
    printf("Movimentacao da RAINHA: \n");

    do
    {
        
        printf("%d Esquerda\n", rainha);
        rainha++;

    } while (rainha <= 8);


    //Desafio: nível aventureiro
    //Movimentando o Cavalo

    int  movimento = 1;
    int cavalo;
    int opcao1;

    printf("\n");

    // ** MENU INTERATIVO **// 

    printf("* MOVIMENTO DO CAVALO ESCOLHA UMA OPCAO*\n");
    printf("[1] - (1 VEZ PRA CIMA, E 2 PRA DIREITA )\n");
    printf("[2] - (2 VEZ PRA CIMA, E 1 PRA DIREITA ) \n");
    printf("[3] - (1 VEZ PRA BAIXO, E 2 PRA ESQUERDA ) \n");
    printf("[4] - (2 VEZ PRA BAIXO, E 1 PRA ESQUERDA )\n");

    printf("digite a opcao desejada: ");
    scanf("%d", &opcao1);

    //O Cavalo se move 1 casas pra cima e depois duas casa a direita um "L"
 printf("\n");
    switch (opcao1)
    {
    case 1: 
    printf("MOVIMENTO DO CAVALO OPCAO 1: \n");
    
  
        while (movimento --)
        {
            for(cavalo = 0; cavalo <1; ++cavalo){
                printf("cima\n");
            }
        printf("direita \n");
        printf("direita \n");
        
        }
        break;
         {
            //O Cavalo se move 2 casas pra cima e depois uma casa a direita um "L"
    case 2:
    printf("MOVIMENTO DO CAVALO OPCAO 2: \n");
    
         }
        while (movimento --)
         {
            for(cavalo = 0; cavalo <2; ++cavalo){
                printf("cima\n");
            }
        printf("direita \n");
        }
        break;
     {
        //O Cavalo se move 1 casas pra baixo e depois duas casa a esquerda um "L"
    case 3:
    printf("MOVIMENTO DO CAVALO OPCAO 3: \n");
    
     }
        while (movimento --)
        {
            for(cavalo = 0; cavalo <1; ++cavalo){
                printf("baixo\n");
            }
        printf("Esquerda \n");
        printf("Esquerda \n");
        
        }
        break;
     {
        //O Cavalo se move 2 casas pra baixo e depois uma casa a esquerda um "L"
    case 4:
    printf("MOVIMENTO DO CAVALO OPCAO 4: \n");
    
  
        while (movimento --)
        {
            for(cavalo = 0; cavalo <2; ++cavalo){
                printf("baixo\n");
            }
        printf("Esquerda \n");
        
        
        
        break;
    
    
    default:printf("opcao invalida * TENTE NOVAMENTE * \n");
        break;
    }
    
 
 
    


    
}
        return 0;
    }
}