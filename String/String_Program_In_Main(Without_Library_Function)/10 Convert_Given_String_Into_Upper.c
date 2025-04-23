///Convert Given String into Upper
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0 ;

    printf("\n Enter Your Name : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
         if((cSrc[i] >= 'a' && cSrc[i] <= 'z'))
          {
               cSrc[i] = cSrc[i] - 32;
          }
          i++;
    }
    printf("\n Given String are in a Upper Case = %s",cSrc);

    getch();
    return 0;
}
