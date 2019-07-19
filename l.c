#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
int x,j=0,flag=0;
int a[argc];
for(int i=2;i<argc;i++)
{
a[j]=atoi(argv[i]);
j++;
}
scanf("%d",&x);
for(int i=0;i<argc;i++)
{
if(a[i]==x)
{
flag=1;
break;
}
}
if(flag==1)
{printf("Number is present");
}
else{
printf("Number is not present");
}return 0;
}
