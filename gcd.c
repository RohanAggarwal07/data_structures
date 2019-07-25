#include<stdio.h>
#include<stdlib.h>
int gcd(int a[],int l) {
int res=1;
int big=a[0];
for(int i=0;i<l;i++) {
if(a[i]>big)
{
big=a[i];
		     }}


int i;

for(i=1;i<=big;i++) { int count=0;
for(int j=0;j<l;j++){
	if(a[j]%i==0){
	count++;}}
		     
if(count==l)
   {res=i;}}
return res;}
int main(int argc,char*argv[])	{
	int l=0;
	int result=0;
	int a[argc];
	for(int i=2;i<argc;i++){
	a[l]=atoi(argv[i]);
	l++;   }
	result= gcd(a,l);
	printf("GCD of the numbers is- %d",result); 
  return 0;
				}



