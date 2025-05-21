
/*
    write a program to print following pattern
          *
        * *
      * * *
    * * * *
  * * * * *
  
*/

#include <stdio.h>
void main()
{
  printf("\n");
  
  int column , row , astrik , count=1;
    
  column = 1;
  row = 5;
    
  while (row >= 1)
  {
    column = 1;
        
    do
    {
        printf(" ");
        column++;
    }while (column <= row);
        
    for(astrik=1;astrik<=count;astrik++)
    {
        printf("*");
    }
    count++;
    printf("\n");
    row--;

    }
}


