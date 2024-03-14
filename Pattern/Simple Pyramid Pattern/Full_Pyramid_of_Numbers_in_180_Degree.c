#include<stdio.h>

void printPattern(int n)
{
    int i,j;
    for( i=1;i<=n;i++)
    {
        for( j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for( j=1;j>0;j--)
            printf("%d",i);
        printf("\n");
    }
}
int main()
{
    int n=8;
    printPattern(n);
    return 0;
}
