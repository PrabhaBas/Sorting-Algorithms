#include<stdio.h>
int main()
{
	int a[10];
	int i,j,n,t;
	printf("Enter n\n");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1])
		{
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
		}
	i++;
	}
	printf("\n--------------------\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

