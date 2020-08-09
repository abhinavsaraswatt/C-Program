#include <stdio.h>

int main ()
{
    int numEntered , remainder;
    printf ("Enter some value to indentify its nature :");
    
    scanf ("%d",&numEntered);
    remainder = numEntered % 2;
    
    if (remainder == 0 )
        printf ("The value is even.\n");
    else
        printf ("The value is odd.\n");
    
    return 0;
    
}
