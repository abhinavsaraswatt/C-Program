#include <stdio.h>

int main(argv*)
{
    enum colors {red,green,blue = 55,yellow};
    enum colors mycolor,vikascolor,prabhatcolor,ashishcolor;
    
    
    
    // red = 0,green = 1, blue = 55 , yellow = 56   check after run
    mycolor = red;
    vikascolor = blue;
    prabhatcolor = yellow;
    ashishcolor = green;
    printf("ashishcolor = %d\n",ashishcolor);
    return 0;
    
}
