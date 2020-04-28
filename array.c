#include<stdio.h>

//Function prototype
void read(int*,int);
void print(int*,int);
void sum(int*,int);

void main()
{
    int arr[3][3];
    read(&arr,3);   //To take input for array
    print(&arr,3);  //To print the entered array
    sum(&arr,3);    //To sum the left and right diagonal elements
}

void read(int *x,int n)  // To read the user input
{
    printf("Enter the matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",((x+i*n)+j));
        }
    }
}

void print(int *x,int n)   //To print the initialized array
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",*((x+i*n)+j));
        }
        printf("\n");
    }
}

void sum(int *x,int n)  //To print the sum of left as well as right diagonal elements
{
    int suml=0;
    int sumr=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                suml=suml+*((x+i*n)+j);
            }
            if(n-i-1==j)
            {
                sumr=sumr+*((x+i*n)+j);
            }
        }
    }
    printf("Sum of left diagonal is: %d\n",suml);
    printf("Sum of right diagonal is: %d",sumr);
}

