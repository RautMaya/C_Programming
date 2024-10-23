#include<stdio.h>
#include<conio.h>

void Book_Mark();

{

   int No=0;

    No=Book_Mark();
    printf("\n How Many Page read in Today : ",No);

    No=Book_Mark();
    printf("\n How Many Pages Read in Tomorrow  : ",No);

    No=Book_Mark();
    printf("\n Which Page Yo Read in Today : ",No);


}
int main()
{
    int Res=0;
    int Cnt=0;

    printf("\n Enter How Many Books Read in Today :");
    scanf("%d",&Cnt);

    Res=Res+Cnt;

    return Res;
}
