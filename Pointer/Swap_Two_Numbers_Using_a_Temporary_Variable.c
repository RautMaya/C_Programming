#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Value Of x");
    scanf("%d",&x);
      printf("Enter Value Of y");
    scanf("%d",&y);

    int temp =x;
    x=y;
    y=temp;
    printf("\nAfter Swapping:x=%d,y=%d",x,y);
    return 0;
}
