#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = "";
    int i = 0,Cnt = 0,j=0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Cnt++;
            cDest[j] = cSrc[i];
            j++;

        }
        i++;
    }
    cDest[j] = '\0';

    printf("\n Entered String Count  :%s",cSrc);
    printf("\n WhiteSpace Count in a given String : %d",Cnt);
    printf("\n WhiteSpace Count in a given String : %s",cDest);

    getch();
    return 0;
}
