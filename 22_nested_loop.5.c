/* 

    write a program to print following pattern
        1
       21
      321
     4321
    54321

*/

#include <stdio.h>

int main() 
{
    printf("\n");
    
    int count= 5 , column , space , number;

    for (column = 1; column <= count; column++) 
    {
        
        for (space = 1; space <= count - column; space++) 
        {
            printf(" ");
        }

        for (number = column; number >= 1; number--) {
            printf("%d", number);
        }

        printf("\n");
    }
    
}