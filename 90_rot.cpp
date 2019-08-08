#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"rotate by 90 degrees"<<endl;
	int j=0;
		for(int k=0;k<n;k++){
			for(int c=n-1;c>=0;c--)
			{
				cout<<arr[c][j]<<" ";
			}
			j++;
			cout<<endl;
		}
	return 0;}
