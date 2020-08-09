#include <stdio.h>

int main()
{
    int number, sign;
    
    printf ("Enter a number:");
    scanf ("%d",&number);
    
    if (number < 0)// first one is "if"
        sign = -1;
    else if (number == 0)//if there are more than two condition than we use "else if"
        sign = 0;
    else// than last one is always "else" 
        sign = +1;
    
    printf ("Sign = %d\n",sign);
    return 0;
    
}
