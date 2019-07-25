#include<stdio.h>
#include<stdlib.h>
void rotate(int a[],int l,int no)
{
int m=(l-1)/2+1;
for(int k=0;k<no;k++){
int temp=a[m-1];
for(int i=m-1;i>0;i--)
{
a[i]=a[i-1];}
a[0]=temp;

int t=a[l-1];
for(int i=l-1;i>m;i--){
a[i]=a[i-1];}
a[m]=t;     }
for(int i=0;i<l;i++){
printf("%d",a[i]);}
}
int main(int argc,char*argv[])
{
int no,l=0;
int result=0;
int a[argc];
for(int i=1;i<argc;i++){
	a[l]=atoi(argv[i]);
	l++;           }
scanf("%d",&no);
rotate(a,l,no);
return 0;
}

