#include<stdio.h>

//Function prototype
int LCM(int,int);

//Global variable to act as multiplier
int m=1;

void main()
{
    int a,b;
    //Taking input from user
    printf("Enter two numbers for which you want to get the LCM : \n");
    scanf("%d %d",&a,&b);

    //Checking the condition to know the smaller number
    if(a<b)
    {
        printf("LCM is : %d",LCM(a,b));
    }
    else
    {
        printf("LCM is : %d",LCM(b,a));
    }

}

//Function definition
int LCM(int x,int y)
{
    int t=m*x; //to get the product(t) by multiplying the smaller number(multiplicand) to m(multiplier)
    if(t%y==0)//checking the condition if the larger number is completely divisible by t
    {
        return t;
    }

    m++; //incrementing the multipliers
    LCM(x,y);
}
