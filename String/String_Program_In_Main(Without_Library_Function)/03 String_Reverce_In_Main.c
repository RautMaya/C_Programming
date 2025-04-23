#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    char cDest[20] = "";
    int i = 0 , j = 0;

    printf("\n Enter Your Name : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(i >= 0)
    {
        cDest[j] = cSrc[i];
        i--;
        j++;

    }
    cDest[j] ='\0';

    printf("\n You Entered String = %s",cSrc);
    printf("\n Copy String = %s",cDest);

    getch();
    return 0;
}
