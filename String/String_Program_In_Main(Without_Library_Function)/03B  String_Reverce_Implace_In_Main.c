#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    char temp = '\0';
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
        temp = cSrc[j];
        cSrc[j] = cSrc[i];
        cSrc[i] = temp;

        i--;
        j++;
    }


    printf("\n Reverse String = %s",cSrc);


    getch();
    return 0;
}
