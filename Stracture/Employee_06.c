#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define Count 2

struct Employee
{
    int Emp_Id;
    char Name[20];
    float Salary;
    char Address[30];


};
int main()
{
    int i=0;
    struct Employee Obj[Count]={};

    printf("\n\n Enter Employee Details :\n");

    for(i=0; i<Count;i++)
    {
        printf("\n Enter Employee Id =");
    scanf("%d",&Obj[i].Emp_Id);
    fflush(stdin);

    printf("\n Enter Employee Name =");
    gets(Obj[i].Name);

    printf("\n Enter Employee Salary =");
    scanf("%f",&Obj[i].Salary);
    fflush(stdin);


    printf("\n Enter Employee Address =");
    gets(Obj[i].Address);


    getch();

    }

      printf("\n\n Employee Details are :\n");

    for ( i=0;i<Count;i++)
    {
         printf("\n Employee Id is =%d",Obj[i].Emp_Id);
    printf("\n Employee Name =%s",Obj[i].Name);
    printf("\n Employee Salary =%0.2f",Obj[i].Salary);
    printf("\n Employee Address =%s",Obj[i].Address);
    printf("\n\n=============================");
    }
    getch();
    return 0;


}
