#include<stdio.h>

//Function prototype
int a=2;

int check_prime(int);
void main()
{
    int n;
    printf("Enter a number to check whether its prime or not: ");
    scanf("%d",&n);
    if(check_prime(n))
    {
        printf("Its a prime number");
    }
    else
    {
        printf("Its NOT a prime number");
    }
}

 //Function definition
int check_prime(int n)
{
    if(n/2<a)//Condition to check whether a(natural number) is smaller than half the number or not
    {
        return 1;
    }
    else
    {
        if(n%a==0)//To check if number is completely divisible by a(natural number)
        {
            return 0;
        }
        else
        {
            a++;
            check_prime(n);//Recursive function call
        }
    }
}
