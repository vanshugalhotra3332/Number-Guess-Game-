/*
Number Guessing Game:
Write a program that generates a random number and asks the player to guess it.
If the player guess is higher than the actual number then the program will say
"lower number please" similarily if the guess is lower program will say
"Higher number please" when the user guesses the number program will show
Number of gusses user took to guess the number; :)

Hint: Use loops
Use random number generator

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){ 

    int number, guess;
    int nguess = 1;
    srand(time(0)); // to ensure that everytime we run random number changes
    number = rand()%100 + 1; // only rand generates something like 17988 so to generate between 1 -100 we did this
    // printf("%d", number);

    // keep running the loop until number is guessed
    do
    {  
        printf("Guess the number between 1-100:\n");
        scanf("%d", &guess);

        if(guess < number){
            printf("Let's get higher! \n");
        }

        else if(guess > number){
            printf("go low! \n");
        }

        else{
            printf("You're goddamn right! \n");
            printf("You guessed it in %d attempts! \n", nguess);
        }
        nguess++;
    } while (guess!=number);
    

    getch();
    return 0;
}