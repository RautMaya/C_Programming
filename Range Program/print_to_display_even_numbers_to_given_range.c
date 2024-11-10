#include<stdio.h>
int main()
{
    int range,i=0;
    printf("Enter any range");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        if(i%2==0)
            printf("%d",i);
    }
    return 0;
}
