#include<iostream>
#include<string.h>
  using namespace std;
     int lcs(char *x,char*y,int l1,int l2){
     int result=0;
                if(l1==0||l2==0)
                  result= 0;
                else if(x[l1-1]==y[l2-1])
                  result=1+lcs(x,y,l1-1,l2-1);

                else
                  result=max(lcs(x,y,l1-1,l2),lcs(x,y,l1,l2-1));
     return result;
}
  int main(int argc,char *argv[]){
     int l1=strlen(argv[1]);
     int l2=strlen(argv[2]);
     int result=lcs(argv[1],argv[2],l1,l2);
        cout<<"Length of longest commmon subsequence is- "<<result<<endl;
  return 0;}

