#include<stdio.h>

int main()
{
    //n - Variable to take up user input
    int n;
    printf("Enter number of steps you want: ");
    scanf("%d",&n);

    //Outer loop to print required number of steps
    for(int i=1;i<=n;i++)
    {
        //Inner loop to print required number of "01"
        for(int j=1;j<=i;j++)
        {
            printf("01");
        }
        printf("\n");
        //\n - To move to the new line
    }

}
