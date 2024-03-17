#include<stdio.h>
int main()
{
    int A;

    printf("Enter the number A:");
    scanf("%d",&A);

    if(A>0)
        printf("%d is Positive.",A);
    if(A<0)
        printf("%d is Negative.",A);
        if(A==0)
        printf("%d is Zero.",A);
        return 0;
}
