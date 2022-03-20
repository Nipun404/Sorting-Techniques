#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int partition(int a[20],int lb,int ub);
void quick_sort(int a[20],int lb,int ub);
void main()
{
	int a[20],i,lb,ub,n;
	system("cls");
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	lb=0;
	ub=n-1;
	printf("Enter the elements to be sorted: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("After sorting the elements are: \n");
	quick_sort(a,lb,ub);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
int partition(int a[20],int lb,int ub)
{
	int start;
	int end;
	int pivot,temp;
	start=lb;
	end=ub;
	pivot=a[lb];
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			}
	}
	temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;
	return end;
}
void quick_sort(int a[20],int lb,int ub)
{
	int key;
	if(lb<ub)
	{
		key=partition(a,lb,ub);
		quick_sort(a,lb,key-1);
		quick_sort(a,key+1,ub);
	}
}

		
	
		