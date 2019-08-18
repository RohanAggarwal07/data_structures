#include<iostream>
#include<cstring>
 using namespace std;
	int main(int argc,char *argv[]){
	int r=-1;
	char str[50];
		strcat(argv[1],argv[2]);
		cout<<"The concatenated string is -"<<argv[1]<<endl;
		r=strcmp(argv[1],argv[2]);
		  if(r==0)
			cout<<"Strings are equal"<<endl;
		  else
		cout<<"Strings are not equal"<<endl;
		cout<<"The length of the string is -"<<strlen(argv[1])<<endl;
		strcpy(str,"This is copied string");
		cout<<"Example of string copy -"<<str<<endl;
		cout<<"Concatination using length -"<<strncat(argv[1],argv[2],3)<<endl;
  return 0;
}


