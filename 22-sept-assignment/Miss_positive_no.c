#include<stdio.h>
#include<stdlib.h>
int getMissingNo(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    temp=1;
    i=0;
    while(a[i]<=0)
            i++;
    for(;i<n;i++)
    {
        if(a[i]==temp)
            temp++;
        else
            return temp;
    }
    return temp;
}
int main(void)
{
	int B,n,i,*a;
	printf("enter the length of array : ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int )*n);
	printf("Enter elements :");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
    B=getMissingNo(a,n);
	printf("Missing no = %d\t",B);
	return 0;
}
