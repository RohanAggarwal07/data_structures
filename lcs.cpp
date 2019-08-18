#include<iostream>
#include<string.h>
  using namespace std;
     int lcs(char *x,char *y,int l1,int l2){
     int lcsuff[l1+1][l2+1];
     int result=0;
        for(int i=0;i<=l1;i++){
            for(int j=0;j<=l2;j++){
                if(i==0||j==0)
                  lcsuff[i][j]=0;
                else if(x[i-1]==y[j-1]){
                  lcsuff[i][j]=lcsuff[i-1][j-1]+1;
                  result=max(result,lcsuff[i][j]);}
                else
                  lcsuff[i][j]=0;}}
     return result;
}
  int main(int argc,char *argv[]){
     int l1=strlen(argv[1]);
     int l2=strlen(argv[2]);
     int result=lcs(argv[1],argv[2],l1,l2);
        cout<<"Length of longest commmon substring is- "<<result<<endl;
  return 0;

