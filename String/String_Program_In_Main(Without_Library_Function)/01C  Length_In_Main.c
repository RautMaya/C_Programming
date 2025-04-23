#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int Len =0;

    puts("\n Enter Your Name :");
    gets(cSrc);

printf(\n -------------------------------------);

   Len = printf("%s",cSrc);

    printf("\n Given String is : %s",cSrc);
    printf("\n Given String Length is %d",Len);

    getch();
    return 0;
}
