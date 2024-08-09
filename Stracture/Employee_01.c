#include<stdio.h>
#include<conio.h>

struct Employee
{
    int Emp_Id;
    char Name[20];
    float Salary;
};
int main()
{
    struct Employee Obj={12,"Prashant",25000};

    printf("\n Employee Details are :\n");

    printf("\n Employee Id is =%d",Obj.Emp_Id);
    printf("\n Employee Name =%s",Obj.Name);
    printf("\n Employee Salary =%0.2f",Obj.Salary);
    printf("\n\n=============================");

    getch();
    return 0;
}
