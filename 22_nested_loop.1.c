/*  
  nested loop exampl 
*/
#include <stdio.h>
void main()
{
    int i = 1, j = 1;
    while (i <= 5) // outer loop
    {
        printf("%5d", i);
        i = i + 1;
        printf("(");
        // inner while loop start
        j = 1;
        while (j <= 3) // inner while loop
        {
            printf("%2d", j);
            j = j + 1;
        }
        printf(")");
    }
}