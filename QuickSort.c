#include<stdio.h>
void quickSort(int a[],int,int);
int partition(int a[],int,int);
void swap(int a[],int,int);
int main()
{
	int a[10],i;
	int n;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	quickSort(a,0,n-1);	
	printf("\nSorted array\n");
	for(i=0;i<n;i++)
	printf("%d   ",a[i]);
	
}
void quickSort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc = partition(a,lb,ub);
		quickSort(a,lb,loc-1);
		quickSort(a,loc+1,ub);
	}	
}
int partition(int a[],int lb,int ub)
{
	int pivot = a[lb];
	int start = lb;
	int end = ub;
	while(start <  end )
	{
		while(a[start]<=pivot)
			start++;
		while(a[end]>pivot)
			end--;
	
		if(start<end)
		swap(a,start,end);
	}
	swap(a,lb,end);
	return  end;
}
void swap(int a[],int x,int y)
{
	int t; 
		t =a[x];
		a[x]=a[y];
		a[y] = t ;	
} 

