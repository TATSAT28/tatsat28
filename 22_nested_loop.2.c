/* write a program to display below pattern (only one * in one printf statement)
*
* *
* * *
* * * *
* * * * *

*/
# include<stdio.h>
void main()
{
    int i,j;
    for(j=1;j<=5;j++) 
    {
        for (i = 1; i <= j; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}