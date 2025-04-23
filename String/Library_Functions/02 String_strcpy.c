#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cFname[20] = "ffffff";
    char cLname[20] = "";

    puts("\n Enter Your First Name : ");
    gets(cFname);

    puts("\n Enter Your Last Name : ");
    gets(cLname);

    printf("\n First Name : %s",cFname);
    printf("\n Last Name : %s",cLname);

    printf("\n -----------------------------------");

    strcpy(cFname,cLname);

    printf("\n First Name : %s",cFname);
    printf("\n Last Name : %s",cLname);

    getch();
    return 0;
}
