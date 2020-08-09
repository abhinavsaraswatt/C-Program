#include <stdio.h>

int main ()
{
    printf ("Variable of type char occupy %zd bytes\n",sizeof(char));
    printf ("Variable of type short occupy %zd bytes\n",sizeof(short));
    printf ("Variable of type long occupy %zd bytes\n",sizeof(long));
    printf ("Variable of type float occupy %zd bytes\n",sizeof(float));
    printf ("Variable of type int occupy %zd bytes\n",sizeof(int));
    printf ("Variable of type double occupy %zd bytes\n",sizeof(double));
    printf ("Variable of type long double occupy %zd bytes\n",sizeof(long double));
    printf ("Variable of type long long occupy %zd bytes\n",sizeof(long long));
    printf ("Variable of type long int occupy %zd bytes\n",sizeof( long int));
    return 0;
    
    // varies on different systems according to their memory
}
