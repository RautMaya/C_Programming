#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cName[30] = "";
    int Len = 0;

    puts("\n Enter Your Name : ");
    gets(cName);

    printf("\n First Name : %s",cName);


    printf("\n -----------------------------------");

    Len = strlen(cName);

    printf("\n Length of Given String is %d",Len);


    getch();
    return 0;
}
