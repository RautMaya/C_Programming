#include<stdio.h>
int main()
{
    int n=5,i,j;
    printf("Enter any no.of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
