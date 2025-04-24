#include<stdio.h>
#include<conio.h>

int CapitalCount(char[]);

int main()
{
    char cSrc[20] = "";
    int L_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    L_Cnt = CapitalCount(cSrc);

    printf("\n Capital Letter Count Of a given String : %d",L_Cnt);

    getch();
    return 0;
}

int CapitalCount(char Src[])
{
    int len=0,i = 0;

    while(Src[i] != '\0')
    {
        if(Src[i] >= 65 && Src[i] <= 90)
        {
            len++;
        }
      i++;
    }

    return len;

}


