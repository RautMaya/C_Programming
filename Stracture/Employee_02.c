#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Employee
{
    int Emp_Id;
    char Name[20];
    float Salary;


};
int main()
{
    struct Employee Obj1={20,"Ram",3000},Obj2;

    printf("\n\n Employee Details are :\n");

     printf("\n Employee Id is =%d",Obj1.Emp_Id);
    printf("\n Employee Name =%s",Obj1.Name);
    printf("\n Employee Salary =%0.2f",Obj1.Salary);
    printf("\n\n=============================");

    Obj2.Emp_Id=101;
    strcpy(Obj2.Name,"Sita");
    Obj2.Salary=5000;

    printf("\n\n Employee Details are :\n");

     printf("\n Employee Id is =%d",Obj2.Emp_Id);
    printf("\n Employee Name =%s",Obj2.Name);
    printf("\n Employee Salary =%0.2f",Obj2.Salary);
    printf("\n\n=============================");

    getch();
    return 0;
}
