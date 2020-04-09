#include<stdio.h>

int main()
{
    //m - Variable to store user input
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);

    //Using if-else-if ladder
    if(m<=100 && m>=85)
    {
        printf("Grade A");
    }
    else if(m<=84 && m>=70)
    {
        printf("Grade B");
    }
    else if(m<=69 && m>=55)
    {
        printf("Grade C");
    }
    else if(m<=54 && m>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
}
