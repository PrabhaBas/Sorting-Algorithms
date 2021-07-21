#include<stdio.h>
void mergeSort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
	int a[10],i;
	int n;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	mergeSort(a,0,n-1);
	
	printf("\nSorted array\n");
	for(i=0;i<n;i++)
	printf("%d   ",a[i]);
	
}
void mergeSort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid = (lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void merge(int a[],int lb,int mid,int ub)
{
	int i = lb;
	int j = mid+1;
	int k = lb;
	int b[10];
	
	while(i<=mid & j<=ub)
	{
		if(a[i] <= a[j])
		{
		b[k]=a[i];
		i++;
		}
		else
		{
		b[k]=a[j];
		j++;
		}
		k++;		
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}	
	for(i=lb;i<=ub;i++)
	a[i] = b[i];
}

