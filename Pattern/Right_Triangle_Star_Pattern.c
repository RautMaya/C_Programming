#include<stdio.h>
int main()
{
    int n,r,c;
    printf("Enter any No of rows");
    scanf("%d",&n);
    for(r=1;r<=8;r++)
    {
        for( c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
