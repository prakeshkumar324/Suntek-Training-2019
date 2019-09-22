#include<stdio.h>
#include<stdlib.h>
void fibo(int a,int b,int n)
{
    if(n==0){
        return;
    }
    printf("%d\t",a);
    fibo(b,a+b,n-1);
}
int main()
{
    int a,b,n;
    printf("Enter starting 2 elements : ");
    scanf("%d %d",&a,&b);
    printf("Enter no of elements :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("length should be greater than 0 \n");
        return 1;
    }
    fibo(a,b,n);
}
