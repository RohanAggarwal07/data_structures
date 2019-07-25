#include<stdio.h>
#include<stdlib.h>
void rotate(int a[],int j,int no)
{
	for(int l=0;l<no;l++)    {
             int temp;
	     temp=a[j-1];
	for(int i=j-1;i>0;i--)	 {
	     a[i]=a[i-1];	 }
	     a[0]=temp;          }
	for(int i=0;i<j;i++)	 {
	     printf("%d\n",a[i]);}
}

int main(int argc,char *argv[]){
	int j=0;
	int no;
	int a[argc];
	scanf("%d",&no);
	  for(int i=1;i<argc;i++) {
		  a[j]=atoi(argv[i]);
			j++;      }
		rotate(a,j,no);
return 0;
				}



