#include<stdio.h>
int main()
{
    int y=7;
    int x=5;
    ++x;
    printf("x=%d,y=%d",x,y);
    y=y+ ++x;
    printf("x=%d,y=%d",x,y);
    y=y+ x++;
    printf("x=%d,y=%d",x,y);

}
