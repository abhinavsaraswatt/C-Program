#include <stdio.h>

int main ()
{
    int a = 99;
    int b = 48;
    // int c = 0; and int c; both are same
    int c;
    
    
    // '%' this symbol shows reminder
    c = a + b;
    
    printf("d is %d\n", b--);// this 'b--' decrement value in next statement
    printf("e is %d\n", --b);/* in this value comes = 46 , because of above statement decrement 1 and this also decrement 1 */
    
   /* The only difference is the order of operations between the increment of the variable and the value the operator returns. So basically ++i returns the value after it is incremented, while i++ return the value before it is incremented. At the end, in both cases the i will have its value incremented. */
    
    return 0;
}
