#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int randNum = rand() % 100 + 1;
    int tentar;
    int tentativa = 0;
    

    printf("==========JOGO DE ADIVINHAÇAO==========\n");
    printf("Regras:\n");
    printf("1- nivel Facil(1-100) = 7 tentativas\n");
    printf("2- nivel Medio(1-300) = 7 tentativas\n");
    printf("3- nivel Dificil(1-500) = 7 tentativas\n");
    printf("=======================================\n");
    printf("\n");
    

    printf("Tente adivinhar o numero.\n");
    scanf("%d", &tentar);
    tentativa++;
        
        while (randNum != tentar && tentativa < 7) {
            
            if(randNum < tentar){
                printf("===MENOR===\n");
            }
            else if (randNum > tentar){
                printf("===MAIOR===\n");
            }
            
            printf("-->Tente novamenete.\n\n");
            tentativa++;
            scanf("%d", &tentar);
        }
    
    
    if(tentativa >= 7 && tentar != randNum){
        printf("Voce perdeu!\n");
        printf("O numero escolhido foi: %d\n", randNum);
        printf("Você tentou %d vezes.\n", tentativa);
    }
    else if (tentativa == 1){
        printf("Parabens!! Você acertou de primeira\n");
        printf("O numero escolhido foi: %d", randNum);
    }
    else if(tentativa == 7 && tentar == randNum){
        printf("Parabens!! Essa foi por pouco, você acertou na ultima tentativa\n");
        printf("O numero escolhido foi: %d", randNum);
    }
    else{
        printf("Parabens!! Você acertou com %d tentativas.\n", tentativa);
        printf("O numero escolhido foi: %d", randNum);
    }
    
    return 0;
}