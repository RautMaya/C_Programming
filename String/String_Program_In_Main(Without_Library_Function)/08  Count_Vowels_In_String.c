///Count Of Vowels in Given String
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
         if(cSrc[i] == 'a' ||cSrc == 'A' ||cSrc[i] == 'e' ||cSrc == 'E' ||cSrc[i] == 'i' ||cSrc == 'I' ||cSrc[i] == 'o' ||cSrc == 'O' ||cSrc[i] == 'u' ||cSrc == 'U' )
          {
               Cnt++;
          }
          i++;
    }

    printf("\n You Entered String = %s",cSrc);
    printf("\n Count Of Vowels in Given String = %d",Cnt);

    getch();
    return 0;
}
