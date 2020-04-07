#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    printf("Before swaping :\n   First number = %d \n   Second number = %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swaping :\n   First number = %d \n   Second number = %d",a,b);
    return 0;
}
