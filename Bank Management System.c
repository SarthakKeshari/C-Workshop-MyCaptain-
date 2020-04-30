#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

FILE *fp,*lfp;

bool password_match();
void menu();
void new_account();
void update_account();
void transaction();
void deposit(char[]);
void withdraw(char[]);
void account_details();
void removing_account();
void customer_list();

int main()
{
    if(password_match())
    {
        menu:
        fp=fopen("Bank_details.txt","a+");
        menu();
        printf("Enter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                new_account();
                break;
            case 2:
                update_account();
                break;
            case 3:
                transaction();
                break;
            case 4:
                account_details();
                break;
            case 5:
                removing_account();
                break;
            case 6:
                system("cls");
                printf("Customer List: \n");
                Sleep(500);
                customer_list();
                break;
            case 0:
                break;
        }
        fclose(lfp);
        fclose(fp);

        Sleep(1000);
        printf("\n\n1- Main Menu\n0- Exit\n\n");
        int ch;
        printf("Your choice: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            system("cls");
            goto menu;
        }
    }

}

bool password_match()
{
    char User_pass[10];
    char System_pass[10]="MyCaptain";
    password:
    printf("\n\tEnter password to get Access: ");
    scanf("%s",User_pass);
    if(strcmp(User_pass,System_pass)==0)
    {
        Sleep(1000);
        printf("\nPassword Matched");
        Sleep(500);
        system("cls");
        printf("\n\tGenerating a menu for convenience");
        for(int i=0;i<3;i++)
        {
            Sleep(500);
            printf(".");
        }
        Sleep(500);
        system("cls");
        return true;
    }
    else
    {
        Sleep(1000);
        printf("\nIncorrect Password\n\n");
        printf("1- Retry Password\n0- Exit\n\n");
        int ch;
        printf("Your choice: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            system("cls");
            goto password;
        }
        else
        {
            return false;
        }
    }
}

void menu()
{
    printf("\t||||MENU||||\n");
    printf("1- Create New Account\n");
    printf("2- Update Information of Existing Account\n");
    printf("3- To carry out Transaction\n");
    printf("4- Check Account Details\n");
    printf("5- Remove existing account\n");
    printf("6- View customer list\n");
    printf("0- Exit\n\n");
}

void new_account()
{
    system("cls");
    printf("\n   ----- BANK FORM -----\n\n");
    char acc[10],n[30],aad[15],mob[10],add[80];
    int amt;
    getchar();
    printf("\tEnter Name: ");
    gets(n);
    printf("\tEnter Account Number: ");
    scanf("%s",acc);
    printf("\tEnter Aadhaar Card Number: ");
    scanf("%s",aad);
    printf("\tEnter Mobile Number: ");
    scanf("%s",mob);
    printf("\tEnter Address: ");
    scanf("%s",add);
    printf("\tEnter Initial Amount: ");
    scanf("%d",&amt);

    char acc_copy[10];
    strcpy(acc_copy,acc);
    fprintf(fp,"%s\n",acc);
    strcat(acc_copy,".txt");
    lfp=fopen(acc_copy,"a+");
    fprintf(lfp,"%s","Account Number: ");
    fprintf(lfp,"%s\n",acc);
    fprintf(lfp,"%s","Name: ");
    fprintf(lfp,"%s\n",n);
    fprintf(lfp,"%s","Aadhaar Number: ");
    fprintf(lfp,"%s\n",aad);
    fprintf(lfp,"%s","Mobile Number: ");
    fprintf(lfp,"%s\n",mob);
    fprintf(lfp,"%s","Address: ");
    fprintf(lfp,"%s\n",add);
    fprintf(lfp,"%s","Amount: ");
    fprintf(lfp,"%d\n\n",amt);
}

void update_account()
{

}

void transaction()
{
    system("cls");
    Sleep(500);
    int flag=0;
    printf("\n   ---- TRANSACTION BOX ----\n");
    printf("Enter Account Number: ");
    Sleep(500);
    char acc[10];
    scanf("%s",acc);
    strcat(acc,"\n");
    char s[10];
    while(fgets(s,10,fp)!=NULL)
    {
        if(strcmp(s,acc)==0)
        {
            flag=1;
            printf("1- Deposit\n");
            printf("2- Withdraw\n");
            printf("\tEnter your choice: ");
            int ch;
            scanf("%d",&ch);
            if(ch==1)
            {
                deposit(acc);
            }
            else if(ch==2)
            {
                withdraw(acc);
            }
        }
    }
    if(flag==0)
    {
        printf("Incorrect Account number has been entered");
    }
}

void deposit(char account[10])
{
    printf("\nEnter amount you want to deposit: ");
    int dep;
    scanf("%d",&dep);
    printf("%s",account);
    strcat(account,".txt");
    FILE *lfpa=fopen(account,"r");
    FILE *t;
    t=fopen("temp.txt","w");
    char s[200];
    int i=0;
    char c=fgetc(lfpa);
    while(c!=EOF)
    {
        fputc(c,t);
        c=fgetc(lfpa);
    }
    fclose(t);
}

void withdraw(char account[10])
{

}

void account_details()
{

}

void removing_account()
{

}

void customer_list()
{
    int character=getc(fp);
    while(character!=EOF)
    {
        putchar(character);
        character=getc(fp);
    }
}
