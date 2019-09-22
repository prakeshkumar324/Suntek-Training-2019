#include<math.h>
#include<stdio.h>
#include<stdlib.h>
void Prime(int a,int n)
{
    if(a>sqrt(n))
        printf("\nPrime\n");
    else if(n%a==0)
        printf("\nNot Prime\n");
    else
        Prime(a+1,n);
}
int main(void)
{
	int n,i;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("Using Recursion:");
	Prime(2,n);
	printf("Using Iteration:");
	for(i=2;i<sqrt(n);i++)
	{
	    if(n%i==0)
	    {
	        printf("\nNot Prime:");
	        break;
	    }
	}
	if(i>sqrt(n))
	    printf("\nPrime");
	return 0;
}
