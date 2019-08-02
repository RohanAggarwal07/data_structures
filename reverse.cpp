# include<iostream>
# include<cstring>
using namespace std;

//Reversing strings using recursion

void reverse(char *s,int l){
if(l<0)
return;
else{
  cout<<s[l];}
return(reverse(s,l-1));
}
int main(int argc,char *argv[]) {
int l=strlen(argv[1]);
reverse(argv[1],l);
return 0;
}
//Iterative reversal of strings

char s[l];
for(int i=0;i<l;i++){
	s[i]=argv[1][l-i-1];}
for(int i=0;i<l;i++){
cout<<s[i];}
return 0;}

