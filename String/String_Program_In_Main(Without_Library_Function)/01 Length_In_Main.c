#include<stdio.h>
#include<conio.h>

int main()
{
    char cScr[20] = "";
    int i =0;

    puts("\n Enter Your Name :");
    gets(cScr);

    for(i = 0; i <= 20 ; i++)
    {
        if(cScr[i] == '\0')
        {
            break;
        }
    }

 printf("\n Given String Length is %d",i);
    getch();
    return 0;
}
