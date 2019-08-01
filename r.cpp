# include <iostream>
# include <string.h>
using namespace std;
int main(int argc,char*argv[]){
cout<<argc<<endl;
char *s;
s=argv[1];
argv[1]=argv[2];
argv[2]=s;
for(int i=1;i<argc;i++){
cout<<argv[i]<<" ";}
cout<<endl;
return 0;}
