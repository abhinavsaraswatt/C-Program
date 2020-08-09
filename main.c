//
//  main.c
//  SwitchExample
//
//  Created by Vikas Saraswat on 04/08/20.
//  Copyright © 2020 Abhinav Saraswat. All rights reserved.
//

#include <stdio.h>
int main()
{
    enum weekdays {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    enum weekdays today = 0;
    
    printf("Enter digit from 0 to 6:");
    scanf("%d",&today);// enum value is integer
    
    switch (today)
    {
        case Sunday:
            printf("Today is Sunday.\n");
            break;// If we did not use break than all the next statements are also executed
        case Monday:
            printf("Today is Monday.\n");
            break;
        default :
            printf("Nothing would found\n");
            break;
    }
    
    return 0;
}
