#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[]){
int l1=strlen(argv[1]);
int l2=strlen(argv[2]);
int flag=0;
if(l1!=l2){
cout<<"Not equal"<<endl;}
for(int i=0;i<l1;i++){
	if(argv[1][i]==argv[2][l1-1-i])
	flag++;}
	if(flag==(l1))
	{cout<<"Strings are rotational"<<endl;}
	else
	cout<<"Not rotational"<<endl;
return 0;}
