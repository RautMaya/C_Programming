#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0,Digit_Cnt = 0,C_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Digit_Cnt++;
        }
        else if((cSrc[i] != ' ' && cSrc[i] != '\t') ||(cSrc[i] >= 65 && cSrc[i] <= 90) ||(cSrc[i] >= 97 && cSrc[i] <= 122))
        {
            C_Cnt++;
        }
        i++;
    }

       if(Digit_Cnt == 4 &&  C_Cnt == 6)
        {
            printf("\n Your PAN Number is Valid ");
        }
        else
        {
            printf("\n Your PAN Number is Not Valid ");
        }
    printf("\n Entered String Count  :%d",i);
    printf("\n Digit Count in a given String : %d",Digit_Cnt);

    printf("\n Consonant Count in a given String : %d",C_Cnt);


    getch();
    return 0;
}

