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

    strlwr(cName);

    printf("\n Given String is %s",cName);


    getch();
    return 0;
}
