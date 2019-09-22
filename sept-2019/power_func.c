#include<stdio.h>
#include<stdlib.h>
int pow(int x,int n)
{
    long e;
    if(n==1){
        return x;
    }
    return x*pow(x,n-1);
}
int main()
{
    int x,n,r,e=1,i;
    printf("Enter number and exponent : ");
    scanf("%d %d",&x,&n);
    r=pow(x,n);
    printf("Using Recursion\n");
    printf("%d ^ %d = %d\n",x,n,r);
    for(i=1;i<=n;i++)
    {
        e*=x;
    }
    printf("Using Iterations\n");
    printf("%d ^ %d = %d",x,n,e);
}
