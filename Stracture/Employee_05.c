#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
    int Emp_Id;
    char Name[20];
    float Salary;
    char Address[30];


};
int main()
{
    struct Employee Obj;

    printf("\n\n Enter Employee Details :\n");

    printf("\n Enter Employee Id =");
    scanf("%d",&Obj.Emp_Id);
    fflush(stdin);

    printf("\n Enter Employee Name =");
    gets(Obj.Name);

    printf("\n Enter Employee Salary =");
    scanf("%f",&Obj.Salary);
    fflush(stdin);


    printf("\n Enter Employee Address =");
    gets(Obj.Address);


    getch();


      printf("\n\n Employee Details are :\n");

     printf("\n Employee Id is =%d",Obj.Emp_Id);
    printf("\n Employee Name =%s",Obj.Name);
    printf("\n Employee Salary =%0.2f",Obj.Salary);
    printf("\n Employee Address =%s",Obj.Address);
    printf("\n\n=============================");
    getch();
    return 0;


}
