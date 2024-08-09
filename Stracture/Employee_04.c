#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Employee
{
    int Emp_Id;
    char Name[20];
    float Salary;
    char Address[30];


};
int main()
{
    struct Employee Obj1={20,"Ram",3000,"Pune"},Obj2,Obj3={0};;

    printf("\n\n Employee Details are :\n");

     printf("\n Employee Id is =%d",Obj1.Emp_Id);
    printf("\n Employee Name =%s",Obj1.Name);
    printf("\n Employee Salary =%0.2f",Obj1.Salary);
     printf("\n Employee Address =%s",Obj1.Address);
    printf("\n\n=============================");

    Obj2.Emp_Id=101;
    strcpy(Obj2.Name,"Sita");
    Obj2.Salary=5000;
    strcpy(Obj2.Address,"Karad");

    printf("\n\n Employee Details are :\n");

     printf("\n Employee Id is =%d",Obj2.Emp_Id);
    printf("\n Employee Name =%s",Obj2.Name);
    printf("\n Employee Salary =%0.2f",Obj2.Salary);
    printf("\n Employee Address =%s",Obj2.Address);
    printf("\n\n=============================");

      printf("\n\n Employee Details are :\n");

     printf("\n Employee Id is =%d",Obj3.Emp_Id);
    printf("\n Employee Name =%s",Obj3.Name);
    printf("\n Employee Salary =%0.2f",Obj3.Salary);
    printf("\n Employee Address =%s",Obj3.Address);
    printf("\n\n=============================");
    getch();
    return 0;
}
