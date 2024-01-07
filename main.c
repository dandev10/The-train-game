// Library which is used
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

// The struct of the player
struct player {
    char name[15];
    int money;
    int trains;
    int level;
    char options[100];
};

// The main function
int main(int argc, char** argv) {

    // Create player1 from the struct
    struct player player1;

    // start info of player
    player1.trains = 1;
    player1.money = 0;
    player1.level = 0;

    // To make exit from the loop possible
    bool run = true;

    // Ask the player name
    printf("Enter name(less than 15 char): ");
    fgets(player1.name, 15, stdin);
    player1.name[strlen(player1.name)-1] = '\0';

    // The start of game
    sleep(1);
    printf("welcome %s to your train business\n", player1.name);
    sleep(1);
    printf("here's your info:\n");
    printf("* trains - %d\n", player1.trains);
    printf("* money - %d\n", player1.money);
    printf("* level - %d\n", player1.level);
    printf("  write 'info' to keep up with your buisness\n");

    // The loop for write what to-do
    while (run)
    {
        // Write commands
        printf("%s> ", player1.name);
        fgets(player1.options, 100, stdin);
        player1.options[strlen(player1.options)-1] = '\0';

        // Exit from the loop
        if (strcmp(player1.options, "exit") == 0) {
            run = false;
        }

        // Ask about the player's info
        else if (strcmp(player1.options, "info") == 0) {
            printf("\nhere's your info:\n");
            printf("* trains - %d\n", player1.trains);
            printf("* money - %d\n", player1.money);
            printf("* level - %d\n", player1.level);
        }

    }
    
    // Exit the game successfully
    return 0;
}

