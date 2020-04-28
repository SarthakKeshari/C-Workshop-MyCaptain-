#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("file_handling.txt","w");  //Opening file for writing
    //Printing lines inside the file
    fprintf(fp,"%s\n","I am First line.");
    fprintf(fp,"%s\n","I am Second line.");
    fprintf(fp,"%s\n","I am Third line.");
    fprintf(fp,"%s","I am Fourth line.");
    //Closing file "file_handling"
    fclose(fp);

    FILE *fp2;
    FILE *nfp1;
    FILE *nfp2;
    //Opening multiple files in required modes
    fp2=fopen("file_handling.txt","r");
    nfp1=fopen("file_handling_copy.txt","w");
    nfp2=fopen("file_handling_reverse_copy.txt","w");
    int ar[100]; //An array to store each character
    ar[0]=getc(fp2);
    int i=0;
    while(ar[i]!=EOF)  //Condition for checking if End Of File is reached
    {
        fprintf(nfp1,"%c",ar[i]); //Printing character by character onto the new file
        i++;
        ar[i]=getc(fp2);
    }

    while(i>0)
    {
        i--;
        fprintf(nfp2,"%c",ar[i]); //Printing character by character onto the new file
        printf("%c",ar[i]);  //Printing each character of file on the console
    }

    //Closing all the opened files
    fclose(fp2);
    fclose(nfp1);
    fclose(nfp2);
}
