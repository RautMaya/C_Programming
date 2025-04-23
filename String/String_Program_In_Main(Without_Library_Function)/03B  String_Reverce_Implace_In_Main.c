#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "\0";
    char temp[20] = "\0";
    int i = 0 , j = 0;

    printf("\n Enter Your Name : ");
    gets(cSrc);

   while(cSrc[i] !='\0')
   {
       i++;
   }
   i--;

    while(i > j)
    {
        temp = cSrc[i];
        cSrc[i] = cSrc[j];
        cSrc[j] = temp;
    }


    printf("\n Reverse String = %s",cSrc);


    getch();
    return 0;
}
