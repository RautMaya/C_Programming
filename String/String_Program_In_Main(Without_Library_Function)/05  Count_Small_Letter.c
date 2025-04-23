#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0 , Cnt = 0;

    printf("\n Enter Your Name : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
         if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
          {
               Cnt++;
          }
          i++;
    }

    printf("\n You Entered String = %s",cSrc);
    printf("\n Count Of Small Letter in Given String = %d",Cnt);

    getch();
    return 0;
}
