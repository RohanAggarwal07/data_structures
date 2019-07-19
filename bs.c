#include<stdio.h>
#include<stdlib.h>
int  binary(int arr[],int n,int ar,int x)
 {
   if(ar>=n)
	{
	  int mid= n+(ar-1)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x)
		  	return(binary(arr,1,mid-1,x));
		if(arr[mid]<x)
			return(binary(arr,mid+1,ar,x));
	}
return -1;
 }
   int main(int argc,char*argv[])
	{
	  int arr[argc];
   	  int x,j=0;
	  for(int i=2;i<argc;i++)
		{
		  arr[j]=atoi(argv[i]);
		  j++;
		}
	scanf("%d",&x);
 	int result=binary(arr,0,argc,x);
	if(result!=-1)
	{
		printf("Element is present");
	}
	else
{
	printf("Element is not present");
} 
  return 0;
	}
		



