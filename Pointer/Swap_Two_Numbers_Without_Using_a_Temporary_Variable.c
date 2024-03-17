#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping X is :%d and Y is %d \n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
       printf("Before swapping X is :%d and Y is %d \n",x,y);



    return 0;
}
