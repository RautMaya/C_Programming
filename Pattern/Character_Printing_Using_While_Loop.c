#include<stdio.h>
int main()
{
    int i=1,j=0;
    int rows=8;
    char character='A';

    while(i<=rows)
    {
        while(j<=i-1)
        {
            printf("%c",character);
            j++;
        }
        printf("\n");
        character++;
        j=0;
        i++;
    }
    return 0;
}
