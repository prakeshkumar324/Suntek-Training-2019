#include<stdio.h>
#include<stdlib.h>
int getMissingNo(int a[], int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    for(i=0;i<n;i++)
    {
        if(a[i]>i+1)
            return i+1;
        if(a[i]==i)
            return i+1;
    }
}
int Repeated(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        if(a[abs(a[i])]>=0)
            a[abs(a[i])]=-a[abs(a[i])];
        else
            return abs(a[i]);
    }
}
int main(void)
{
	int A,B,n,i,*a;
	printf("enter the length of array : ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int )*n);
	printf("Enter elements :");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
    A=Repeated(a,n);
	for(i=0;i<n;i++)
	    if(a[i]<0)
            a[i]=-a[i];
	printf("\n");
	B=getMissingNo(a,n);
	printf("A=%d\tB=%d\t",A,B);
	return 0;
}
