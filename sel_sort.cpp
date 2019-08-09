 #include<iostream>
 #include<cstdlib>
  using namespace std;
  void swap(int *t1,int *t2){
	int temp=*t1;
	    *t1=*t2;
	    *t2=temp;}
	
  int main(int argc,char *argv[]){
	int a[argc-1];
	int j=0;
	  for(int i=1;i<argc;i++){
		a[j]=atoi(argv[i]);
			j++;}


	  for(int i=0;i<j-1;i++){
	      int min=i;
	  for(int k=i+1;k<j;k++){
	  	if(a[k]<a[min]){
		  min=k;}

		swap(&a[min],&a[i]);}}

	  for(int i=0;i<j;i++){
		cout<<a[i]<<" ";}
return 0;}
