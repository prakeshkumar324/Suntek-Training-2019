#include<stdio.h>
#include<stdlib.h>
int modexp(int x,int n)
{
    long e;
    if(n==1){
        return x;
    }
    return x*modexp(x,n-1);
}
int main()
{
    int x,n,y,r,e=1,i;
    printf("Enter numbers : ");
    scanf("%d %d %d",&x,&n,&y);
    r=modexp(x,n);
    r=r%y;
    printf("Using Recursion\n");
    printf("%d ^ %d mod %d = %d\n",x,n,y,r);
    for(i=1;i<=n;i++)
    {
        e*=x;
    }
    e=e%y;
    printf("Using Iterations\n");
    printf("%d ^ %d mod %d= %d",x,n,y,e);
}
