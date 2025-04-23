#include<stdio.h>
#include<conio.h>

int main()
{
    char cScr[20] = "";
    int i =0;

    puts("\n Enter Your Name :");
    gets(cScr);

    while(i <= 20)
    {
        if(cScr[i] == '\0')
        {
            break;

        }
        i++;
    }

 printf("\n Given String Length is %d",i);
    getch();
    return 0;
}
