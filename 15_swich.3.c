/*the Write a programe to findout planets name from the user given number 
*/
#include<stdio.h>
void main()
{
    int planet_num;
    printf("enter your planet numbar1-9");
    scanf("%d",&planet_num);
    switch(planet_num)
    {
        case 1:
        printf("mercury");
        break;
        case 2:
        printf("venus");
        break;
        case 3:
        printf("earth");
        break;
        case 4:
        printf:("mars");
        break;
        case 5:
        printf("jupiter");
        break;
        case 6:
        printf("Saturn");
        break;
        case 7:
        printf("Uranus");
        break;
        case 8:
        printf("Neptune");
        break;
        case 9:
        printf("Pluto");
    }
    printf("\nthis is the univers");

}