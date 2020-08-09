#include <stdio.h>

int main()
{
    // here, all variables initializing
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0.0;
    double minutesInDay = 0;
    
    // ask for input from user
    printf ("Enter minutes value that should change in years and days :");
    
    // reads input and convert it into format specifier which one is suitable
    scanf("%d",&minutesEntered);
    
    // assign values to variables
    minutesInYear = (60 * 24 * 365);
    minutesInDay = (60 * 24);
    
    
    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / minutesInDay);
    
    
    printf("%d minutes has approx. %f years and %f days \n",minutesEntered,years,days);
    
    return 0;
    
    
    
}
