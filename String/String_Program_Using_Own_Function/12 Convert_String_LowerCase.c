#include<stdio.h>
#include<conio.h>

void ConvertLowerCase(char[]);

int main()
{
    char cSrc[20] = "";


    printf("\n Enter a String :");
    gets(cSrc);

    ConvertLowerCase(cSrc);

    printf("\n Converted String in a LowerCase : %s",cSrc);

    getch();
    return 0;
}

void ConvertLowerCase(char Src[])
{
    int i = 0;

    while(Src[i] != '\0')
    {
        if(Src[i] >= 65 && Src[i] <= 90)
        {
            Src[i] = Src[i] + 32;
        }
      i++;
    }
    return ;

}


