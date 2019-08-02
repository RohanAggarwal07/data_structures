#include<iostream>
#include<array>
using namespace std;
int main(void){
array<int,6> arr={1,2,3,4,5,6};
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";}
cout<<endl;
cout<<"Front element is- "<<arr.front()<<endl;
cout<<"Back element is- "<<arr.back()<<endl;
cout<<"The size of the array is- "<<arr.size();
return 0;}
