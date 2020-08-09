#include <stdio.h>

int main()
{  /* variable that present in program only start from '_' and 'letter'*/
    
    // y and x are variable here in the below
    char y[100];
    int x;
    
    printf("Enter Age(integer) and Full Name(string) : ");
    
    // scanf uses format specifier like %d , %s etc.
    // "&" this symbol is only use in scanf with all format specifier , expect string
    scanf("%d %s",&x, y);
    
    // printf uses that format specifier to express output like %d , %s
    printf("\nYou wrote : %d %s \n\n",x, y) ;
    
    
    return 0;
}

