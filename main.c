#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char player1[25];
    char player2[25];

    printf (" Player 1, sua vez...");
    scanf ("%s", &player1);

    printf ("\nPlayer 2, sua vez...");
    scanf ("%s", &player2);

    printf ("\nAguarde... Estamos calculando o resultado!\n");

    if(strcmp(player1,"papel") == 0){
                    if(strcmp(player2,"papel") == 0){
                        printf("Empate");
                    }else if (strcmp(player2,"tesoura") == 0){
                        printf("player2 ganhou, porque corta papel");
                    }else if (strcmp(player2,"pedra") == 0){
                        printf("player2 perdeu porque o papel enrolou a pedra");
                    }else{
                        printf ("O player 2 jogou uma informacao invalida!");
                    }


     }else if (strcmp(player1,"tesoura") == 0){
                    if(strcmp(player2,"papel") == 0){
                        printf("Player 2 perdeu porque tesoura corta papel");
                    }else if (strcmp(player2,"tesoura") == 0){
                        printf("Empate!");
                    }else if (strcmp(player2,"pedra") == 0){
                        printf("player 2 ganhou porque a pedra quebra tesoura");
                    }else{
                        printf ("O player 2 jogou uma informacao invalida!");
                    }
    }else if (strcmp(player1,"pedra") == 0){
                    if(strcmp(player2,"papel") == 0){
                        printf("Player 2 ganhou porque o papel embrulhou a pedra");
                    }else if (strcmp(player2,"tesoura") == 0){
                        printf("player2 perdeu porque pedra esmaga tesoura");
                    }else if (strcmp(player2,"pedra") == 0){
                        printf("empate!");
                    }else{
                        printf ("O player 2 jogou uma informacao invalida!");
                    }
    }else{
        printf ("Voce jogou uma informacao invalida!");
    }

    return 0;
}
