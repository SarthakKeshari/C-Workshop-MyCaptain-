#include <stdio.h>

struct employee  //Defining a structure employee
{
    int empno;
    char empname[30];
    char department_name[20];
    int salary;
};

void display(struct employee e[],int n);  // function prototype for display function

int main()
{
    struct employee e[20]; // to make an array of employee type
    for(int i=0;i<20;i++)   //to get user input
    {
        scanf("%d",&e[i].empno);
        scanf("%s",e[i].empname);
        scanf("%s",e[i].department_name);
        scanf("%d",&e[i].salary);
    }

    display(e,20);
}

void display(struct employee e[],int n)  //To display user entered values
{
    for(int i=0;i<20;i++)
    {
        printf("\n\n%d \n",e[i].empno);
        printf("%s \n",e[i].empname);
        printf("%s \n",e[i].department_name);
        printf("%d \n",e[i].salary);
    }
}

