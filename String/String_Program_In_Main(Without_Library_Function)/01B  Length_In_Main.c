#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i =0;

    puts("\n Enter Your Name :");
    gets(cSrc);

    for(i=0 ; cSrc[i] != '\0' ; i++);

    printf("\n Given String Length is %d",i);

    getch();
    return 0;
}
