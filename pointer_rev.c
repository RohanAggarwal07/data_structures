#include<stdio.h>

int main(int argc,char*argv[])
{
for(int i=0;i<argc;i++)
int a[i]=atoi(argv[i+1]);
int *ptr=a;
for(int i=5;i>=1;i--)
{
printf("%d\n",*(ptr+i));
}
return 0;
}
