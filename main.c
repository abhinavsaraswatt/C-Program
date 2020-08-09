//
//  main.c
//  WhileLoop
//
//  Created by Vikas Saraswat on 07/08/20.
//  Copyright © 2020 Abhinav Saraswat. All rights reserved.
//

// Print numbers from 1 to 5


// To learn perfect or clear doubts in loop than go to https://www.programiz.com/c-programming/c-do-while-loops
// Flow char perfect hai uss site pe 
#include <stdio.h>
int main()
{
    int i = 1;
    
    while (i <= 5)// inn brackets mein yeh bata rahe ha ke 'i' ke value kaha tak ja skti hai
    {
        printf("%d\n", i);
        ++i;
    }

    return 0;
}
/*while loop

The syntax of the while loop is:

while (testExpression)
{
    // statements inside the body of the loop
}
How while loop works?

The while loop evaluates the test expression inside the parenthesis ().
If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.
The process goes on until the test expression is evaluated to false.
If the test expression is false, the loop terminates (ends).
To learn more about test expression (when the test expression is evaluated to true and false), check out relational and logical operators.
 
 Example 1: while loop

 // Print numbers from 1 to 5

 #include <stdio.h>
 int main()
 {
     int i = 1;
     
     while (i <= 5)
     {
         printf("%d\n", i);
         ++i;
     }

     return 0;
 }
 Output

 1
 2
 3
 4
 5
 Here, we have initialized i to 1.

 When i is 1, the test expression i <= 5 is true. Hence, the body of the while loop is executed. This prints 1 on the screen and the value of i is increased to 2.
 Now, i is 2, the test expression i <= 5 is again true. The body of the while loop is executed again. This prints 2 on the screen and the value of i is increased to 3.
 This process goes on until i becomes 6. When i is 6, the test expression i <= 5 will be false and the loop terminates.
 
 */
