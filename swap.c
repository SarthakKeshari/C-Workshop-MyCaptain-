#include<stdio.h>

int main()
{
    int a,b;
    //For entering two numbers
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    //For showing the output before swapping the numbers
    printf("Before swapping :\n   First number = %d \n   Second number = %d\n",a,b);

    //Logic for swapping the numbers
    a=a+b;
    b=a-b;
    a=a-b;

    //For showing the output after swapping the numbers
    printf("After swapping :\n   First number = %d \n   Second number = %d",a,b);
    return 0;
}
