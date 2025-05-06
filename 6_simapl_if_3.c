/*
write a program to findout smaller triangle from 2 triangle using given length and base of triangles. 
__________________________________________________________________________.....
1 = creat variables.
2 = tack 2 triangle's 4value from user and save in variables.
3 = creat logic for compering 2 triangles.
    A = ½ (base × height)
4 = print all results. 
*/

#include<stdio.h>
void main()
{
    float base_1,height_1,base_2,height_2,area_1,area_2;

    printf("welcome to joyato.");
    printf("\nLet's comper 2 triangles.");

    printf("\nEnter your 1st triangles base. :- ");
    scanf("%f",&base_1);

    printf("\nEnter your 1st triangles height. :- ");
    scanf("%f",&height_1);

    printf("\nEnter your 2nd triangles base. :- ");
    scanf("%f",&base_2);

    printf("\nEnter your 2nd triangles height. :- ");
    scanf("%f",&height_2);

    printf("\n1 st tiangle base = %.2f \n1 st tiangle height = %.2f \n2 nd tiangle base = %.2f \n2 nd tiangle height = %.2f",base_1,height_1,base_2,height_2);

    area_1 = 0.5 * base_1 * height_1;
    printf("\ntrianglr No.1 = %.2f ",area_1);

    area_2 = 0.5 * base_2 * height_2;
    printf("\ntrianglr No.2 = %.2f",area_2);

    if(area_1<area_2)
    {
        printf("\nbig triangle is = No.2");
        printf("\nSmall triangle is = No.1");
    }

    if(area_1>area_2)
    {
        printf("\nbig triangle is = No.1");
        printf("\nsmall triangle is = NO.2");
    }

    printf("\nGood by....");
}
