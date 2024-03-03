#include<stdio.h>
int main()
{
    int n,k,r,c,m=1;
    printf("Enter any no.of rows");
    scanf("%d",&n);
    for(r=n;r>=1;r--)
    {
        for( c=1;c<=r-1;c++)
        {
            printf(" ");
        }
        for(k=1;k<=m;k++)
        {
            printf("*");
        }

        printf("\n");
        m++;
    }
    return 0;
}
