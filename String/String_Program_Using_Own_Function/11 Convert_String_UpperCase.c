#include<stdio.h>
#include<conio.h>

void ConvertUpperCase(char[]);

int main()
{
    char cSrc[20] = "";


    printf("\n Enter a String :");
    gets(cSrc);

    ConvertUpperCase(cSrc);

    printf("\n Convert String in UpperCase : %s",cSrc);

    getch();
    return 0;
}

void ConvertUpperCase(char Src[])
{
    int i = 0;

    while(Src[i] != '\0')
    {
        if(Src[i] >= 97 && Src[i] <= 122)
        {
            Src[i] = Src[i] - 32;
        }
      i++;
    }
    return ;

}


