#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RNo;
    char Name[40];
    char City[20];
    float Marks;

};
int main()
{
    struct student Obj1={},Obj2;

    Obj2.RNo=12;
    strcpy(Obj2.Name,"Roma");
    strcpy(Obj2.City,"Satara");
    Obj2.Marks=89;

    printf("\n 1st Student Details :");

    printf("\n\n Student Roll Number are =%d",Obj1.RNo);
    printf("\n Student Name is =%s",Obj1.Name);
    printf("\n Student City is =%s",Obj1.City);
    printf("\n Student Marks is =%f",Obj1.Marks);

    getch();
    fflush(stdin);

    printf("\n\n 2st Student Details :");

    printf("\n\n Student Roll Number are =%d",Obj2.RNo);
    printf("\n Student Name is =%s",Obj2.Name);
    printf("\n Student City is =%s",Obj2.City);
    printf("\n Student Marks is =%0.2f",Obj2.Marks);

    getch();
    return 0;


}
