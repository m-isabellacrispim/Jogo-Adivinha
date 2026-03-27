#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int numeroM = rand() % 100 + 1;
    int tentar;
    int tentativa = 0;
    

    printf("==========JOGO DE ADIVINHAÇAO==========\n");
    printf("Regras:\n");
    printf("1- nivel Facil = 7 tentativas\n");
    printf("2- nivel Medio = 7 tentativas\n");
    printf("3- nivel Dificil = 10 tentativas\n");
    printf("=======================================\n");
    printf("\n");
    

    printf("Tente adivinhar o numero.\n");
    scanf("%d", &tentar);

    
        
        while (numeroM != tentar && tentativa <= 5) {
            
            if(numeroM < tentar){
                printf("===MENOR===\n");
            }
            else if (numeroM > tentar){
                printf("===MAIOR===\n");
            }
            
            printf("-->Tente novamenete.\n\n");
            scanf("%d", &tentar);
            
            tentativa++;
            
        }
    
    
    if(tentativa > 5){
        printf("Voce perdeu!\n");
        printf("O numero escolhido era: %d\n", numeroM);
        printf("Você tentou %d vezes.\n", tentativa);
        
    }
    else{

        if (tentativa == 1){
            printf("Parabens!! Você acertou de primeira\n");
            printf("O numero escolhido era: %d", numeroM);
        }
        else{
            printf("Parabens!! Você acertou com %d tentativas.\n", tentativa);
            printf("O numero escolhido era: %d", numeroM);
        }
    }
        
        
    return 0;
}