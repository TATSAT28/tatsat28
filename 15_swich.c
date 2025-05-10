/*me to findout which day it is based on user given input */
#include<stdio.h>
void main(){

    int number = 0 ;

    printf("Enter value of number ");
    scanf("%d",&number);

    printf("\nThe value of number is : %d ",number);

    switch(number)
    {
        case 1:
        printf("It is sunday ");
        
        break;

        case 2:
        printf("It is monday ");
        break;

        case 3:
        printf("It is tuesday ");
        break;

        case 4:
        printf("It is wednesday ");
        break;

        case 5:
        printf("It is thursday ");
        break;

        case 6:
        printf("It is friday ");
        break;

        case 7:
        printf("It is saturday ");
        break;

        default:
        printf("Number is not a valid day ");
        break;

    }

}