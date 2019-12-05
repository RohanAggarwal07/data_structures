#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
void find_min(int arr[],int n)
{
stack<int> st;
stack<int> stk;
int min=arr[0];
	stk.push(arr[0]);
	for(int i=0;i<n;i++){
	int num=arr[i];
	st.push(num);
		if(st.top()<=min)
		{
			stk.push(arr[i]);}
}
cout<<stk.top();
}
int main(int argc,char* argv[]){
int arr[argc-1];
for(int i=1;i<argc;i++)
{


return 0;
}
