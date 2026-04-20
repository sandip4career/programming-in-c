#include<stdio.h>

int main()
{
    int SecretNumber=5;

    int guess;
    int guessCount=0;
    int guessLimit=3;
    int outofGuess =0;
    while(guess!=SecretNumber && outofGuess==0)
    {


        if(guessCount<guessLimit)
    {
        printf("Enter a number:");
        scanf("%d",&guess);
        guessCount++;

    }else{
        outofGuess=1;

    }

    }

    if(outofGuess==1)
    {
        printf("Out of Guesses");
    }else
    {
        printf("Hey you win!");
    }



    return 0;
}
