#include<stdio.h>
int main()
{
    int n=8,i,j;
    printf("Enter No of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
