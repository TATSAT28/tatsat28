/*21) write a program to print following pattern 
    *
   * *
  * * * 
 * * * *
* * * * *
 * * * *
  * * * 
   * *
    *
 */ 
#include <stdio.h>
void main ()
{
    printf("hii brooooo");
    printf("\n");
    
    int column , row , space , count = 5;

    for (column = 1; column <= count; column++) 
    {
        
        for (space = 1; space <= count - column; space++)
        {
            printf(" ");
        }
        
        for (row = 1; row <= column; row++
        ) 
        {
            printf("* ");
        }
        printf("\n");
    }

    for (column = count - 1; column >= 1; column--)
    {
    
        for (space = 1; space <= count - column; space++)
        {
            printf(" ");
        }
        
        for (row = 1; row <= column; row++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n ok done broooooo");

}