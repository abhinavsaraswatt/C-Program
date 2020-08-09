#include <stdio.h>

int main ()
{
    double length = 25.89;
    double breadth = 15.85;
    double perimeter = 0;
    double area = 0;
    
    perimeter = 2*(length+breadth);
    area = length*breadth;
    
    // '.2' before f in %f is for write only digit after decimal
    printf("Perimeter of rectangle = %.2f\n",perimeter);
    printf("Area of rectangle = %.2f\n",area);
    
    return 0;
    
}
