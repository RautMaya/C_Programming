#include<stdio.h>
#include<conio.h>

int LengthCount(char[]);

int main()
{
    char cSrc[20] = "";
    int L_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    L_Cnt = LengthCount(cSrc);

    printf("\n Length Count Of a given String : %d",L_Cnt);

    getch();
    return 0;
}

int LengthCount(char Src[])
{
    int len=0;

    while(Src[len] != '\0')
    {
      len++;
    }

    return len;

}


