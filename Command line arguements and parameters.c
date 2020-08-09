//
//  main.c
//  Command line arguements and parameters
//
//  Created by Vikas Saraswat on 28/07/20.
//  Copyright © 2020 Abhinav Saraswat. All rights reserved.
//

#include <stdio.h>

// in function brackets before comma there was arguements counts and after comma is arguements that is passed
int main(int argc, char *argv[])
{
    int numberOfArguement = argc;
    char *arguement1 = argv[0];
    char *arguement2 = argv[1];
    
    printf ("Number of arguements : %d\n", numberOfArguement);
    printf ("Arguement one of a program name : %s\n",arguement1);
    printf ("Arguement two is my name : %s\n", arguement2);
    
    return 0;
}
