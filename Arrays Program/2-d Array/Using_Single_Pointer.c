#include<stdio.h>
void print(int *arr,int M,int N)
{
    int i,j;
    for(i=0;i<M;i++)
     for(j=0;j<N;j++)
     printf("%d",*((arr+i*N)+j));

}
int main()
{
    int arr[][3]={{1,2,3,},{4,5,6},{7,8,9}};
    int M=3,N=3;
    print((int*)arr,M,N);
    return 0;
}
