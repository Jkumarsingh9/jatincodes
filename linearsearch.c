

//leanear searching in array;
#include<stdio.h>
int main()
{
int size,i,ele,no=0;
	printf("enter the array size..");
	scanf("%d",&size);
	printf("enter the array element\n");
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array elements are....\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nenter the element u want to serch...");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
		printf("element is in index %d ",i);
		no++;
		break;
	    }
	}
	if(no==0)
	printf("enter element is not in the array!!!!");
return 0;
}
