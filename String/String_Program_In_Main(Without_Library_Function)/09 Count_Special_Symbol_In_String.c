///Count Of Special Symbol in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0 , SplCnt = 0;

    printf("\n Enter Your Name : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
         if(!((cSrc[i] >= 'a' && cSrc[i] <= 'z') || (cSrc[i] >= 'A' && cSrc[i] <= 'Z') ||(cSrc[i] >= '0' && cSrc[i] <= '9')))
          {
               SplCnt++;
          }
          i++;
    }

    printf("\n You Entered String = %s",cSrc);
    printf("\n Count Of Special Symbol in Given String = %d",SplCnt);

    getch();
    return 0;
}
