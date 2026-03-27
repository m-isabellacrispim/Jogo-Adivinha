#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int nivel; 
    int tentar; //tentativa do jogador
    int tentativa = 0; //numero de tentativas
    int num; //define a quantidade de numeros aleatorios que podem ser escolhidos

    printf("==========JOGO DE ADIVINHAÇAO==========\n");
    printf("Regras:\n");
    printf("1- nivel Facil(1-100) = 7 tentativas\n");
    printf("2- nivel Medio(1-300) = 7 tentativas\n");
    printf("3- nivel Dificil(1-500) = 7 tentativas\n");
    printf("=======================================\n");
    printf("\n");
    printf("Escolha o nivel:\n");
    scanf("%d", &nivel);

    while (nivel < 1 || nivel > 3){
        printf("Numero invalido!\n");
        printf("Digite 1, 2 ou 3.\n");
        scanf("%d", &nivel);
    }
    if (nivel == 1){
        num = 100;
        printf("Nivel facil selecionado!\n");
    }
    else if (nivel == 2){
        num = 300;
        printf("Nivel medio selecionado!\n");
    }
    else if (nivel == 3){
        num = 500;
        printf("Nivel dificil selecionado!\n");
    }

    int randNum = rand() % num + 1; //numero escolhido aleatoriamente

    printf("Tente adivinhar o numero.\n");
    scanf("%d", &tentar);
    tentativa++;

    while (randNum != tentar && tentativa < 7){

        if (randNum < tentar){
            printf("===MENOR===\n");
        }
        else if (randNum > tentar){
            printf("===MAIOR===\n");
        }

        printf("-->Tente novamente.\n\n");
        scanf("%d", &tentar);
        tentativa++;
    }

    if (tentativa >= 7 && tentar != randNum){
        printf("Voce perdeu!\n");
        printf("Você tentou %d vezes.\n", tentativa);
    }
    else if (tentativa == 1){
        printf("Parabens!! Você acertou de primeira\n");
    }
    else if (tentativa == 7 && tentar == randNum){
        printf("Parabens!! Essa foi por pouco, você acertou na ultima tentativa\n");
    }
    else{
        printf("Parabens!! Você acertou com %d tentativas.\n", tentativa);
    }
    printf("O numero escolhido foi: %d", randNum);

    return 0;
}