#include<stdio.h>
int main()
{
	int a[10];
	int i,j,n,t,min;
	printf("Enter n\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min])
				min = j;
				
		if(min!=i)
		{
			t = a[i];
			a[i] = a[min];
			a[min] = t;
		}

	}

	printf("\n--------------------\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

