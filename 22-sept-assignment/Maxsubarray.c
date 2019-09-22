#include<stdio.h>
#include<conio.h>
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int  maxsub(int a[50],int n)
{
	int maxcurr,maxglobal,i;
	maxcurr=a[0];
	maxglobal=a[0];
	for(i=1;i<n-1;i++)
	{
		maxcurr=max(a[i],maxcurr+a[i]);
		if(maxcurr>maxglobal)
		{
			maxglobal=maxcurr;
		}
	}
	return maxglobal;
}
int subArraySum(int arr[], int n, int sum)
{
    int curr_sum, i, j,k,a,b;
    for (i = 0; i < n; i++)
    {
        curr_sum = arr[i];
        for (j = i + 1; j <= n; j++)
        {
            if (curr_sum == sum)
            {
                 printf("sum between indexes %d and %d",i,j-1);
                 a=i;
                 b=j-1;
                goto print;
            }
            if (curr_sum > sum || j == n)
                break;
        curr_sum = curr_sum + arr[j];
        }
    }
   print:
       for(k=a;k<=b;k++)
      {
     	printf("%d ",arr[k]);
	  }
    return 0;
}
int main()
{
	int a[50];
	int i,j,maxsum,n;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	maxsum=maxsub(a,n);
	printf("%d",maxsum);
	subArraySum(a,n,maxsum);
	return 0;
}
