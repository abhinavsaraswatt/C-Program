#include <stdio.h>

int main ()
{
    int hours = 0;
    double grosspay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;
    
    
    printf("How much time(in hours) did you work : ");
    scanf("%d",&hours);
    
    if (40 >= hours)
    grosspay = (12 * hours);
    
    else
    {//this grosspay assigned value is not applicable to whole programme
        grosspay = (40 * 12);
        double overTimePay = (hours - 40) * (12 * 1.5);
        grosspay += overTimePay;
    }
    //calculate taxes
    if (grosspay <= 300)
    {
        taxes = grosspay * 0.15;
    }
    
    else if (grosspay > 300 && grosspay <= 450)
    {
        taxes = 300 * 0.15;
        taxes += (grosspay - 300) * 0.20;
    }
    else if (grosspay > 450)
    {
        taxes = 300 * 0.15;
        taxes = 150 * 0.20;
        taxes += (grosspay - 450) * 0.25;
    }
    
    // calculate netpay
    
    netPay = grosspay - taxes;
    
    printf("Your gross pay is : %lf\n",grosspay);
    printf("Your Taxes is : %lf\n",taxes);
    printf("Your netpay is : %lf\n",netPay);
    
    return 0;
}
