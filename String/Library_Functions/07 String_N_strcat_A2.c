#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cFname[30] = "";
    char cLname[30] = "";
    char Name[] = {};


    puts("\n Enter Your First Name : ");
    gets(cFname);

    puts("\n Enter Your Last Name : ");
    gets(cLname);

    printf("\n First Name : %s",cFname);
    printf("\n First Name : %s",cLname);

    printf("\n -----------------------------------");



    strcpy(Name ,strncat(cFname,cLname,2));

    printf("\n Given String is %s",cFname);
     printf("\n First Name : %s",Name);


    getch();
    return 0;
}
