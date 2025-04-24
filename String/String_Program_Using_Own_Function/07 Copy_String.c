#include<stdio.h>
#include<conio.h>

void StringCpy(char[],char[]);

int main()
{
    char cSrc[20] = "",cDest[20] = "";


    printf("\n Enter a String :");
    gets(cSrc);

    StringCpy(cDest,cSrc);

    printf("\n Entered String : %s",cSrc);
    printf("\n Copy String : %s",cDest);

    getch();
    return 0;
}

void StringCpy(char Dest[],char Src[])
{
    int i = 0;

    while(Src[i] != '\0')
    {
        Dest[i] = Src[i];
      i++;
    }

    return ;

}


