#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Number of rows:");
    scanf("%d",&rows);

    for( i=1;i<=rows;i++)
    {
        for( j=1;j<=2*(rows-i);j++)

        {
            printf(" ");
        }
        for(k=1;k<2*i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
