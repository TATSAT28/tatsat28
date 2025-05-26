/*what is array/List?
--------------
array is special type of variable in which we can store multiple values. each value in array has same name but unique position. 1st value in array is at 0th position, 2nd value in array is at 1st position. it means position start from 0. position of last value is size of array - 1. technically position is called index.  it must be positive integer value. index can be given directly or using variable's value

all the value in array must be same type in c language.
size of the array must be set at the time of creating array. 
during execution of program size can not be changed. 
we can change value at any given position. but we can not add & delete value. 
*/
#include<stdio.h>
void main ()
{
    int age [5];
    age[0]=21;
    age[1]=22;
    age[2]=23;
    age[3]=18;
    age[4]=10;
    printf("0st position %d \n",age[0]);
    printf("1st position %d \n",age[1]);
    printf("2st position %d \n",age[2]);
    printf("3st position %d \n",age[3]);
    printf("4st position %d \n",age[4]);

}