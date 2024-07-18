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
    struct Student Obj[3]={0};
    int i;


   for(i=0;i<3;i++)

{
    printf("\n\n %d Student Details : \n",i+1);

    printf("\n\n Student Roll Number are =%d",Obj[0].RNo);
    printf("\n Student Name is =%s",Obj[0].Name);
    printf("\n Student City is =%s",Obj[0].City);
    printf("\n Student Marks is =%f",Obj[0].Marks);

    getch();

}
system("cls");



for(i=0;i<3;i++)
{
    printf("\n\n %d Enter  Student Details => \n",i+1);

    printf("\n Enter Student Roll Number :");
    scanf("%d",&Obj[i].RNo);

    fflush(stdin);

    printf("\n Enter Student Name :");
    gets(Obj[i].Name);  ///scanf("%s",Obj1.Name);

    fflush(stdin);


    printf("\n Enter Student City :");
    gets(Obj[i].City);

    printf("\n Enter Student Marks :");
    scanf("%f",&Obj[i].Marks);


}
 getch();


   for(i=0;i<3;i++)

{
    printf("\n\n %d Student Details : \n",i+1);

    printf("\n\n Student Roll Number are =%d.",Obj[i].RNo);
    printf("\n Student Name is =%s.",Obj[i].Name);
    printf("\n Student City is =%s.",Obj[i].City);
    printf("\n Student Marks is =%f.",Obj[i].Marks);

}
   getch();
     return 0;


}
