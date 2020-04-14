 #include<stdio.h>
//Function prototype
 int sum_of_digits(int);

 int main()
 {
     int n;
     //Taking user input
     printf("Enter a number(whose sum of digits you want): ");
     scanf("%d",&n);
     //Printing required sum of digits
     printf("Sum of digits= %d",sum_of_digits(n));
     return 0;
 }

 //Function definition
 int sum_of_digits(int n)
 {
     if(n>=0 && n<=9) //Condition for a single digit number
     {
         return n;
     }
     else
     {
        return n%10 + sum_of_digits(n/10);//Recursive function call
     }
 }
