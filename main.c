//
//  main.c
//  DoWhile
//
//  Created by Vikas Saraswat on 08/08/20.
//  Copyright © 2020 Abhinav Saraswat. All rights reserved.
//

#include <stdio.h>

int main()
{
    double sum = 0.0,num = 0.0 ;
    
    // the body of loop at least executed once
    do
    {
        printf("Enter number for sum :");
        scanf("%lf",&num);
        
        sum += num;
    }
    while (num != 0.0);
    
    printf ("Sum = %.2lf\n",sum);
    
    return 0;
}


/*
 do...while loop

 The do..while loop is similar to the while loop with one important difference. The body of do...while loop is executed at least once. Only then, the test expression is evaluated.

 The syntax of the do...while loop is:

 do
 {
    // statements inside the body of the loop
 }
 while (testExpression);
 How do...while loop works?

 The body of do...while loop is executed once. Only then, the test expression is evaluated.
 If the test expression is true, the body of the loop is executed again and the test expression is evaluated.
 This process goes on until the test expression becomes false.
 If the test expression is false, the loop ends.


 Example 2: do...while loop

 // Program to add numbers until the user enters zero

 #include <stdio.h>
 int main()
 {
     double number, sum = 0;

     // the body of the loop is executed at least once
     do
     {
         printf("Enter a number: ");
         scanf("%lf", &number);
         sum += number;
     }
     while(number != 0.0);

     printf("Sum = %.2lf",sum);

     return 0;
 }
 Output

 Enter a number: 1.5
 Enter a number: 2.4
 Enter a number: -3.4
 Enter a number: 4.2
 Enter a number: 0
 Sum = 4.70
 */
 */
