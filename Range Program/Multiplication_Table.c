#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter an integer:");
    scanf("%d",&num);

    for(i=1;i<=8;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}
