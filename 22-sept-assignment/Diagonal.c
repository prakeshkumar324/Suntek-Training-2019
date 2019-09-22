#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,**a;
	printf("enter the length of array : ");
	scanf("%d",&n);
	a = (int **)malloc(n * sizeof(int *));
    for (i=0; i<n; i++)
         a[i] = (int *)malloc(n * sizeof(int));
	printf("Enter elements :");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
	}
	int *a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i][i]);
	}
	return 0;
}
