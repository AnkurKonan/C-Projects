#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int secreteNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    while (secreteNumber != guess && outOfGuesses == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Enter a numeber: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1)
    {
        printf("Out of guesses");
    }
    else
    {
        printf("You win");
    }
    return 0;
}
