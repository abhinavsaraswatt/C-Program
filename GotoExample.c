//
//  main.c
//  GotoExample
//
//  Created by Vikas Saraswat on 08/08/20.
//  Copyright © 2020 Abhinav Saraswat. All rights reserved.
//


// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.


#include <stdio.h>

int main()
{
    const int Max_Input = 100;
    int i;
    double num,sum = 0.0,average;
    
    for (i = 1;i <= Max_Input;++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf",&num);
        
        // go to jump if the user enters a negative number
        if (num < 0.0) {
            goto jump;
        }
        sum += num;
    }// Brackets are very important in c programming
    
    jump:
        average =  sum / (i - 1);// in this "i -1" is because last value is compulsory to put negative
        printf("Sum = %.2lf",sum);
        printf("Average = %.2lf",average);
    
    return 0;
}
