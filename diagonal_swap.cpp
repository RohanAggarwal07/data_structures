#include<iostream>
# define n 3
 using namespace std;
 void swap_diagonal(int a[n][n]){
	for(int i=0;i<n;i++){
	    int temp;
	   temp=a[i][i];
           a[i][i]=a[i][n-i-1];
	   a[i][n-i-1]=temp;}
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	    cout<<a[i][j]<<" ";}
	    cout<<endl;}
 }
 int main(void){
   int a[n][n];
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	  cin>>a[i][j];}}
	cout<<"Array before rotation is-"<<endl;
	for(int i=0;i<n;i++){
	for(int j=0;j,n;j++){
		cout<<a[i][j]<<" "}
		cout<<endl;}
		swap_diagonal(a);
 return 0;
 }
