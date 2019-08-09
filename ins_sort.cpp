# include<iostream>
# include<cstdlib>
 using namespace std;
   int main(int argc,char *argv[]){
	int arr[argc-1],j=0;
	int k;
	for(int i=1;i<argc;i++){
	   arr[j]=atoi(argv[i]);
		j++;}

	for(int i=1;i<j;i++){
       	    int temp=arr[i];
		k=i-1;
		while((temp<arr[k]) && (k>=0))
		{
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(int i=0; i<j; i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;}


