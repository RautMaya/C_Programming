#include<stdio.h>
int main()
{
    int y=1;
    int x=10;
    ++x;
    printf("x=%d",x);
     ++x;
    printf("++x=%d",x,y);
    printf("++x=%d",x,y);
    x=x+ ++y;
    printf("x=%d,y=%d",x,y);

}
