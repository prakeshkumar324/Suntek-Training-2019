#include<stdio.h>
#include<stdlib.h>
void First_Repeated(int a[], int n)
{
    int i;
    printf("The repeating elements are: \n");
    for (i=0;i<n;i++)
    {
        if(a[abs(a[i])]>=0)
            a[abs(a[i])]=-a[abs(a[i])];
        else
        {
            printf("The First repeating element is :  %d \n",abs(a[i]));
            break;
        }
    }
}
int main(void)
{
	int n,i,*a;
	printf("enter the length of array : ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int )*n);
	printf("Enter elements :");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	First_Repeated(a,n);
	return 0;
}
