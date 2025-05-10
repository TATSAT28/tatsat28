/*
    write a program to calculate bmi and display obesity level of person from given height
    (foot and inch) and weight.
*/
#include<stdio.h>
void main()
{
    int foot,inch;
    float hight,weight,meter,inch_1,bmi;

    
    printf("\nlet's count your bmi.");
    
    printf("\n plz Enter your weight(kg). :- ");
    scanf("%f",&weight);
    
    printf("\n plz Enter your hight:");
    printf("\nFoot :- ");
    scanf("\n%d",&foot);
    printf("inch :- ");
    scanf("%d",&inch);
    inch_1= foot * 12 + inch;
    meter = inch_1 * 2.54 / 100;
    hight = meter;
    bmi = weight / (hight * hight);

    printf("____/nyoure date enter____");
     printf("\nweight = %.2f\nfoot = %d\ninch = %d\nBMI = %.1f",weight,foot,inch,bmi);
    
     if(bmi>=35)
    {
        printf("\nsorry try next time...");
    }
    else if(bmi >= 34.9)
    {
        printf("\nthe weight is over weght ");

    }
    else if (bmi >= 30)
    {
         printf("\nthe weight is the normal");
    
        printf("\nobese");
    }
    else if(bmi>=24.9)
    {
        printf("\nover obese");
    }
    else if(bmi>=18)
    {
        printf("\nunder weight");
    }
    else 
    {
        printf("\nover light weight");
    }
     printf(" the all the best bro");
}
