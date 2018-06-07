//Binary search using recursion
#include<stdio.h>
#include<conio.h>
int ar[30];
int bsearch(int ,int ,int);//prototype declaration
void main()
{
	int low,high,n,i,key,flag;
	clrscr();
	printf("\nEnter no of element:=");
	scanf("%d",&n);
	printf("\nEnter elements in sorted order\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Ar[%d] :=",i);
		scanf("%d",&ar[i]);
	}
	printf("\nEnter the key u want to search:=");
	scanf("%d",&key);
	low=0;
	high=n-1;
	flag=bsearch(low,high,key);//function called
	if(flag==0)
	{
		printf("\nKey not found!!!");
	}
	else
	{
		printf("\nKey %d found at [%d] position@@",key,flag+1);
	}
	getch();
}

//function defination start

int bsearch(int low,int high,int key)
{
	int mid;
	if(low==high)
	{
		if(ar[low]==key)
		{
			return low;//one element exist with in range
		}
		else
			return 0;
	}
	else
	{
		mid=(low+high)/2;
		if(key==ar[mid])
			return mid; //if element found at middle of the array
		else if(key<ar[mid])
			return bsearch(low,mid-1,key);//if searching key is less then ar[mid]
		else
			return bsearch(mid+1,high,key);//if searching key is greater then ar[mid]
	}
}