#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[]){
int l1=strlen(argv[1]);
int flag=0;
for(int i=0;i<l1/2;i++){
	if(argv[1][i]==argv[1][l1-1-i])
	flag++;}
	if(flag==(l1/2))
	{cout<<"String is a palindrome"<<endl;}
	else
	cout<<"String is not a palindrome"<<endl;
return 0;}

