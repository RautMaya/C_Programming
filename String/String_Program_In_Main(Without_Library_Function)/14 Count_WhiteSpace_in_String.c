#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0,Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ' || cSrc[i] == '\t')
        {
            Cnt++;
        }
        i++;
    }
    printf("\n Entered String Count  :%d",i);
    printf("\n WhiteSpace Count in a given String : %d",Cnt);

    getch();
    return 0;
}
