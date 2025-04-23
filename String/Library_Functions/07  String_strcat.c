#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cFname[30] = "";
    char cLname[30] = "";


    puts("\n Enter Your First Name : ");
    gets(cFname);

    puts("\n Enter Your Last Name : ");
    gets(cLname);

    printf("\n First Name : %s",cFname);
    printf("\n First Name : %s",cLname);

    printf("\n -----------------------------------");



    strcat(cFname,cLname);

    printf("\n Given String is %s",cFname);
     printf("\n First Name : %s",cLname);


    getch();
    return 0;
}
