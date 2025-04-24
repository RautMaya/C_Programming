#include<stdio.h>
#include<conio.h>

int ReverseImpliceString(char[]);

int main()
{
    char cSrc[20] = "";


    printf("\n Enter a String :");
    gets(cSrc);

     ReverseImpliceString(cSrc);

    printf("\n Entered String : %s",cSrc);



    getch();
    return 0;
}

int ReverseImpliceString(char Src[])
{
    int i = 0,j = 0;
    char temp = '\0';

    while(Src[i] != '\0')
    {
      i++;
    }
    i--;

    while(j < i)
    {
        temp = Src[i];
        Src[i] = Src[j];
        Src[j] = temp;

        i--;
        j++;
    }


    return Src;

}


