#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void shell_sort(int a[],int n);
void main()
{
	int a[50],n,i;
	system("cls");
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements to be sorted: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Sorted elements are: \n");
	shellsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
void shellsort(int a[],int n)
{
	int i,j,gap,temp;
	for(gap=n/2;gap>=1;gap=gap/2)
	{
		for(j=gap;j<n;j++)
		{
			for(i=j-gap;i>=0;i=i-gap)
			{
				if(a[i+gap]>a[i])
				{
					break;
				}
				else
				{
					temp=a[i];
					a[i]=a[i+gap];
					a[i+gap]=temp;
				}
			}
		}
	}
}

					