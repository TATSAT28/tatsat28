  /*
    write a program to accept value in array and display it
*/
  #include <stdio.h>
void main()
{
    
    int age[5];
    int position=0;
   while(position<=4) 
    {
        printf("plzzz Enter value for %d position",position+1);
        scanf("%d", &age[position]);
        position=position+1; 
    }      

    position=0;
    while(position<=4)
    {
        printf("%d \n",age[position]);
            position=position+1;

}
}