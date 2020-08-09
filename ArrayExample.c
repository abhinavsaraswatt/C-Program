#include <stdio.h>

int main()
{
    int grades[10];
    int counts = 10;
    int sum = 0;
    float average = 0.0;
    
    printf("Enter your 10 grades:\n");
    
    for (int i = 0;i < 10; ++i)
    {
        printf("\n%d. ",i + 1); // this "i+1" is for counting
        scanf("%d",&grades[i]);
        sum += grades[i];
    }
    average = (float)sum/counts;
    
    printf("The average of your grades is %lf",average);
}
