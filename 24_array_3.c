/*
    write a program to findout minimum value from array

    steps
    1) create array sales, and variable position, minimum
    2) accept input from user in array
    3) store 1st value in array into minimum variable
       minimum = sales[0]
    4) compare 2nd value in array against minimum variable
       if(minimum<sales[1])
            minimum = sales[1]
    5) compare 3rd value in array against minimum value
         if(minimum<sales[2])
            minimum = sales[2]
    5) compare 4th value in array against minimum value
         if(minimum<sales[3])
            minimum = sales[3]
    6) compare 5th value in array against minimum value
         if(minimum<sales[4])
            minimum = sales[4]
    6) compare 6th value in array against minimum value
         if(minimum<sales[5])
            minimum = sales[5]
    7) compare 7th value in array against minimum value
         if(minimum<sales[6])
            minimum = sales[6]
*/
#include <stdio.h>
void main()
{
    // create array
    int sales[7];
    int position = 0, minimum;
    // input
    //  0 to 4
    while (position <= 6) // 5<=4
    {
        printf("Enter value for %d position", position + 1);
        scanf("%d", &sales[position]);
        position = position + 1; // 1
    }
    minimum = sales[0];
    // 1 6
    position = 1;
    while (position <= 6)
    {
        if (minimum > sales[position])
            minimum = sales[position];
        position=position+1;
    }
    printf("minimum = %d",minimum);
}