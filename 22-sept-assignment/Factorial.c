#include<stdio.h>
#include<stdlib.h>
long fact(int n)
{
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    long f;
    int n;
    printf("Enter number to find its factorial :");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Number should be positive integer \n");
        return 1;
    }
    f=fact(n);
    printf("Factorial of %d is %d ",n,f);
}
