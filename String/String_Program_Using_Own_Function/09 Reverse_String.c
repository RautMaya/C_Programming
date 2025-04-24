#include<stdio.h>
#include<conio.h>

void ReverseString(char[],char[]);

int main()
{
    char cSrc[20] = "",cDest[20] = "";


    printf("\n Enter a String :");
    gets(cSrc);

    ReverseString(cDest,cSrc);

    printf("\n Entered String : %s",cSrc);
    printf("\n Reverse String : %s",cDest);


    getch();
    return 0;
}

void ReverseString(char Dest[],char Src[])
{
    int i = 0,j = 0;

    while(Src[i] != '\0')
    {
      i++;
    }
    i--;

    while(i >= 0)
    {
        Dest[j] = Src[i];
        i--;
        j++;
    }
    Dest[i] = '\0';

    return ;

}


