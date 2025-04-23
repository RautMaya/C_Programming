///* Check Given String is Palindrome or Not*/
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "\0";
    int i = 0 , j = 0;

    printf("\n Enter Your Name : ");
    gets(cSrc);

   while(cSrc[j] !='\0')
   {
       j++;
   }
   j--;

    while(i < j)
    {
        if(cSrc[j] != cSrc[i])
        {
            break;
        }
        i++;
        j--;
    }

    if(i >= j)
    {
        printf("\n Given String is Palindrome %s",cSrc);
    }
    else
    {
        printf("\n Given String is Not Palindrome %s",cSrc);
    }

    getch();
    return 0;
}
