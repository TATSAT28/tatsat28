
#include<stdio.h>
void main()
{
    int length,width;
    printf("Enter length");
    scanf("%d",&length);
    printf("Enter width");
    scanf("%d",&width);

    if (length>width)
    {
        printf("this shape is portrait");
    }
    else if(length<width)
    {
        printf("this shape is landscape");
    }
    else 
    {
        printf("this shape is square");
    }
    
    printf("\n nice ");
}