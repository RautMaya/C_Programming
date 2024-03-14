#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
