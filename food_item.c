#include<stdio.h>

int main()
{
    //Variable to take user input
    int c;
    /*Since according to the question user likes surprises so I am not printing the food item list
    I will directly ask the user for his/her choice */
    printf("Enter your choice: ");
    scanf("%d",&c);

    //Applying switch case
    switch(c)
    {
        case 1:
            printf("Food item - Sandwich\nPrice - Rs149");
        break;
        case 2:
            printf("Food item - French Fries\nPrice - Rs99");
        break;
        case 3:
            printf("Food item - Pizza\nPrice - Rs239");
        break;
        case 4:
            printf("Food item - Burger\nPrice - Rs129");
        break;
        case 5:
            printf("Food item - Pasta\nPrice - Rs179");
        break;
        default:
            printf("Invalid Choice");
    }
}
