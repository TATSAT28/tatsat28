/*
    write a program to findout qube of given positive number  and display it 
    steps 
        1) create variable number and qube
        2) accept input from user and store it into number (print & scanf)
        3)    check if number is positive or not 
            if number<0 # - 10
                convert it into positive number 
                number = 0 - number 0 - -10 
            else 
                print message no is already positive number 
        4) findout qube 
            qube = number * number * number 
        5) display qube
        6) diplay thank you 
*/
#include<stdio.h>
void main()
{
    int number,qube;
    printf("Enter number");
    scanf("%d",&number);  
    if(number<0)
    {
        
        number = 0 - number; 
        printf("number was negative so it is converted into positive number \n");
    }
    else 
    {
        printf("number was positive. \n");
    }
    qube = number * number * number; 
    printf("qube = %d",qube);
    printf ("thank you ");
    
}