/*
write a program to findout which cylinder is bigger from two cylinder's radius and height given by user.
steps
1 = creat variables
2 = tack value from user and store it in variables.
3 = creat logic for calculation all  cylinders surfase area.
    A=2πrh+2πr2
4 = display which cylinder is big and small.
5 = diplay thank you for visit

*/

#include<stdio.h>
void main()
{
int radius1,radius2,height1,height2,area1,area2;

printf(" plz Enter 1st cylinder's radius. :- ");
scanf("%d",&radius1);

printf("\n plz Enter 1st cylinder's hight. :- ");
scanf("%d",&height1);

printf("\n plz Enter 2nd cylinder's radius. :-");
scanf("%d",&radius2);

printf("\n plz Enter 2nd cylinder's hight. :- ");
scanf("%d",&height2);

area1 = 2 * 3.14 * radius1 * height1 + 2 * 3.14 * radius1 * 2;
area2 = 2 * 3.14 * radius2 * height2 + 2 * 3.14 * radius2 * 2;

 if(area1 < area2)
{
    printf("\n1st cylinder's area. : %d",area1);
    printf("\n2nd cylinder's area. : %d",area2);
    printf("\ncylinder 2nd is bigger than 1st cylinder.");
    printf("\ncylinder 2nd > cylinder 1st");
}
else
{
    printf("\n1st cylinder's area. : %d",area1);
    printf("\n2nd cylinder's area. : %d",area2);
    printf("\ncylinder 1st is bigger than cylinder.");
    printf("\ncylinder 2nd < cylinder 1st");
}

printf("\nthank you for visit");
}
