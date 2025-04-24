#include<stdio.h>
#include<conio.h>

int VowelConsonantCount(char*,int*,int*,int*);

int main()
{
    char cSrc[20] = "";
    int Cnt = 0,V_Cnt = 0 ,C_Cnt = 0,O_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    Cnt = VowelConsonantCount(cSrc,&V_Cnt,&C_Cnt,&O_Cnt);

    printf("\n String Count Of a given String : %d",Cnt);
    printf("\n Vowel Count Of a given String : %d",V_Cnt);
    printf("\n Consonant Count Of a given String : %d",C_Cnt);
    printf("\n Other Count Of a given String : %d",O_Cnt);


    getch();
    return 0;
}

int VowelConsonantCount(char* Src,int* V,int* C,int* O)
{
    int i=0 ;

    while(Src[i] != '\0')
    {
        if(Src[i] == 'a' ||Src == 'A' ||Src[i] == 'e' ||Src == 'E' ||Src[i] == 'i' ||Src == 'I' ||Src[i] == 'o' ||Src == 'O' ||Src[i] == 'u' ||Src == 'U' )
        {
            (*V)++;
        }
        else if((Src[i] >= 65 && Src[i] <= 90) || (Src[i] >= 97 && Src[i] <= 122))
        {
            (*C)++;
        }
        else
        {
            (*O)++;
        }
      i++;
    }

    return i;

}


