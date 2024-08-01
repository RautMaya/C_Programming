#include<stdio.h>
int main()
{
    int num,i,range;
    printf("Enter an integer:");
    scanf("%d",&num);

    do{
        printf("Enter the range(Positive integer):");
        scanf("%d",&range);
    }
    while(range<=0);

    for(i=1;i<=range;++i)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}

