#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
    int RNo;
    char Name[40];
    char City[20];
    float Marks;
};
int main()
{
    struct Student Obj1={},Obj2={};


    printf("\n\n 1st Student Details : \n");

    printf("\n\n Student Roll Number are =%d",Obj1.RNo);
    printf("\n Student Name is =%s",Obj1.Name);
    printf("\n Student City is =%s",Obj1.City);
    printf("\n Student Marks is =%f",Obj1.Marks);



    printf("\n\n 2st Student Details :");

    printf("\n\n Student Roll Number are =%d",Obj2.RNo);
    printf("\n Student Name is =%s",Obj2.Name);
    printf("\n Student City is =%s",Obj2.City);
    printf("\n Student Marks is =%0.2f",Obj2.Marks);

    getch();
    system("cls");


    printf("\n\nEnter 1st Student Details => \n");

    printf("\n Enter Student Roll Number :");
    scanf("%d",&Obj1.RNo);

    fflush(stdin);

    printf("\n Enter Student Name :");
    gets(Obj1.Name);  ///scanf("%s",Obj1.Name);

    fflush(stdin);


    printf("\n Enter Student City :");
    gets(Obj1.City);

    printf("\n Enter Student Marks :");
    scanf("%f",&Obj1.Marks);

    getch();


    printf("\n\nEnter 2st Student Details => \n");

    printf("\n Enter Student Roll Number :");
    scanf("%d",&Obj2.RNo);
     fflush(stdin);


    printf("\n Enter Student Name :");
    gets(Obj2.Name);
    fflush(stdin);

    printf("\n Enter Student City :");
    gets(Obj2.City);


    printf("\n Enter Student Marks :");
    scanf("%f",&Obj2.Marks);

    getch();

     printf("\n\nEnter 1st Student Details => \n");

     printf("\n Student Roll Number is=%d",Obj1.RNo);
     printf("\n Student Name is=%s",Obj1.Name);
     printf("\n Student City is=%s",Obj1.City);
     printf("\n Student Marks is=%f",Obj1.Marks);

     getch();

     printf("\n\nEnter 1st Student Details => \n");

     printf("\n Student Roll Number is=%d",Obj2.RNo);
     printf("\n Student Name is=%s",Obj2.Name);
     printf("\n Student City is=%s",Obj2.City);
     printf("\n Student Marks is=%f",Obj2.Marks);

     getch();
     return 0;


}
