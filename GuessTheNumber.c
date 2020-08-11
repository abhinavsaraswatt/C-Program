//
//  main.c
//  GuessTheNumber
//
//  Created by Vikas Saraswat on 08/08/20.
//  Copyright © 2020 Abhinav Saraswat. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randonNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;
    
    // Initialzation of random number generator
    srand((unsigned) time(&t));
    
    randonNumber = rand() % 21;
    
    printf("This is Guessing Game ");
    printf("\nI have chosen a number between 0 and 20 that you must guess.\n");
    
    for (numberOfGuesses = 5 ; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("\nYou had %d tr%s left.",numberOfGuesses,numberOfGuesses == 1 ? "y" : "ies");
        printf("\n\nEnter a guess :");
        scanf("%d",&guess);
        
        if (randonNumber == guess)
        {
            printf("\nCongratulations. You guessed it!\n");
            return 0;/* In Udemy course he tell to use "return" in place of "break" but it gives error so i use another method. In line 56 i use "if" in place of nothing. So it will work perfectly*/
        }
        
        else if (guess < 0 || guess > 20)
        {
            printf("I said guess in between 0 and 20.");
        }
        
        else if (randonNumber > guess)
        {
            printf("Sorry, %d is wrong. Your guess is smaller than number.\n",guess);
        }
        
        else if (randonNumber < guess)
        {
            printf("Sorry, %d is wrong. Your guess is greater than number.\n",guess);
        }
    }
        
    printf("\nYou used your five tries and you failed. The number is %d.\n\n",randonNumber);
    
    return 0;
}
