/*
    write a program to findout which circle is smaller from two circle's radius  given by user.

    steps
    1 = creat variables.
    2 = tack circles radius from user and stor it in variables.
    3 = creat logic for counting area.
    4 = display which circle is small.
*/

#include<stdio.h>
void main()
{
    float radius1,radius2,area1,area2;

    printf("Enter 1st circle's radius. :- ");
    scanf("%f",&radius1);

    printf("\nEnter 2nd circle's radius. :- ");
    scanf("%f",&radius2);

    area1 = 3.14 * radius1 * radius1;
    area2 = 3.14 * radius2 * radius2;

    if(area1>area2)
    {
        printf("\ncircle 2nd is smaller then 1st circule.");
    }
    else
    {
        printf("\ncircle 1st is smaller then 2nd circule.");
    }

    printf("\nthank you for visit");

}
