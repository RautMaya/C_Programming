#include<stdio.h>
#include<conio.h>

int SmallLetterCount(char[]);

int main()
{
    char cSrc[20] = "";
    int L_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    L_Cnt = SmallLetterCount(cSrc);

    printf("\n Small Letter Count Of a given String : %d",L_Cnt);

    getch();
    return 0;
}

int SmallLetterCount(char Src[])
{
    int len=0,i = 0;

    while(Src[i] != '\0')
    {
        if(Src[i] >= 97 && Src[i] <= 122)
        {
            len++;
        }
      i++;
    }

    return len;

}


