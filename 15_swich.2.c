 /* make  calculator useing swich  */ 
#include<stdio.h>
void main() 
{

    int number1 = 0 , number2 = 0 , option = 0 ;

    printf("Enter value of number 1 ");
    scanf("%d",&number1);
    printf("Enter value of number 2 ");
    scanf("%d",&number2);

    printf("The value of number 1 is %d and number 2 is %d ",number1,number2);
    printf("\nEnter 1 for addition ");
    printf("\nEnter 2 for subtraction ");
    printf("\nEnter 3 for multiplication ");
    printf("\nEnter 4 for division ");
    printf("\nSelect any one option from above ");
    scanf("%d",&option);
    
    switch(option)
    {
        case 1:
        printf("The answer is %d ",number1 + number2);
        break;
         case 2:
         printf("the answer is %d",number1 - number2);
               printf("The answer is %d ",number1 * number2);
        break;

       case 3:
    printf("The answer is %d ",number1 * number2);
        break;

        case 4:
        printf("The answer is %f ",number1 / number2);
        break;

        default:
        printf("Invalid option selected ");
        break;
    }

             

    
    }


