#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertion_sort(int n,int a[]);
void main()
{
    int i,n,a[30];
    system("cls");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(n,a);
    getch();
}
void insertion_sort(int n,int a[])
{
    int key,i,j;
    for ( i = 1; i < n; i++)
    {
        key = a[i];
        j = i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key; 
    }
    printf("The sorted elements are: ");
     for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}