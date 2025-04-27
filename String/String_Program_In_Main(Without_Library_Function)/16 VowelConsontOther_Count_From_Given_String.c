#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0,Spc_Cnt = 0,V_Cnt = 0,C_Cnt = 0,O_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ' || cSrc[i] == '\t')
        {
            Spc_Cnt++;
        }
        else if(cSrc[i] == 'a' ||cSrc == 'A' ||cSrc[i] == 'e' ||cSrc == 'E' ||cSrc[i] == 'i' ||cSrc == 'I' ||cSrc[i] == 'o' ||cSrc == 'O' ||cSrc[i] == 'u' ||cSrc == 'U' )
        {
            V_Cnt++;
        }
        else if((cSrc[i] >= 65 && cSrc[i] <= 90)||(cSrc[i] >= 97 && cSrc[i] <= 122))
        {
            C_Cnt++;
        }
        else
        {
            O_Cnt++;
        }
        i++;
    }
    printf("\n Entered String Count  :%d",i);
    printf("\n WhiteSpace and Tab Count in a given String : %d",Spc_Cnt);
    printf("\n Vowel Count in a given String : %d",V_Cnt);
    printf("\n Consonant Count in a given String : %d",C_Cnt);
    printf("\n Other Count(Special Symbols) in a given String : %d",O_Cnt);

    getch();
    return 0;
}

