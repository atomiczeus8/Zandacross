#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // This command is for seeding the code or you can say it is for giving it a starting point.
    int number_of_guesses=0;
    int random_number = rand() % 100 + 1; // This command is for generating a random number between 1 to 100 since rand() generates a random number between 0 to RAND_MAX, we use the modulus operator to limit the range and add 1 to shift it from 0-99 to 1-100.
    printf("====================================================\n");
    printf("                                                    \n");
    printf("              WELCOME TO ZANDACROSS                \n");
    printf("                                                    \n");
    printf("           A RANDOM NUMBER GUESSING GAME           \n");
    printf("                                                    \n");
    printf("====================================================\n");

    int guess;
    while (10) // This is an infinite loop, it will keep running until we break it from inside.
    {
        printf("Enter your guessed number (between 1 to 100):");
        scanf("%d", &guess); // This command is for taking input from the user and storing it in the variable 'guess'.
        number_of_guesses++;
        if (guess < random_number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > random_number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("\n");
            printf("====================================================\n");
            printf("                                                    \n");
            printf("               CONGRATULATIONS               \n");
            printf("                                                    \n");
            printf("        YOU GUESSED THE CORRECT NUMBER!          \n");
            printf("                                                    \n");
            printf("            YOU HAVE WON THE GAME!                \n");
            printf("                                                    \n");
            printf("              Thanks for playing                    \n");
            printf("                 ZANDACROSS                       \n");
            printf("                                                    \n");
            printf("====================================================\n");
            printf("The number of guesses you took is: %d\n", number_of_guesses);
            break; // This command is for breaking the loop when the user guesses the correct number.
        }
    }
    return 0; // This command is for indicating that the program ended successfully.
}
