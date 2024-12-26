#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    do
    {
        printf("Guess the Number:");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("lower number please!\n");
        }
        else if (random_number > guessed)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }

        no_of_guesses++;
    } while (guessed != random_number);
    printf("you guessed the number in %d guesses", no_of_guesses);

    return 0;
}