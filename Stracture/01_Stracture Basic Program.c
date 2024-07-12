#include<stdio.h>
#include<conio.h>
#include<string.h>


struct Product
{
    int PID; //4
    char PName[20];  //20
    float PPrice;//4
    float SPrice;//4

};
int main()
{
    struct Product Obj1;

    printf("\n Enter Product ID is:");
    scanf("%d",&Obj1.PID);

    printf("\n Enter Product Name is:");
    scanf("%s",&Obj1.PName);
    fflush(stdin);

    printf("\n Enter Product Purchase Price is :");
    scanf("%d",&Obj1.PPrice);

    printf("\n Enter Product Sales Price is :");
    scanf("%d",&Obj1.SPrice);


    getch();
    return 0;
}
