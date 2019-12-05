#include<iostream>
#include<stdlib.h>
#include<stack>
#include<string.h>
using namespace std;

int prec(char ch){
	if(ch=='^')
	return 3;
	else if(ch=='*' || ch=='/')
	return 2;
	else if(ch=='+' || ch=='-')
	return 1;
	else
	return -1;
}

void inf_post(string s) {
	stack<char> st;
	st.push('n');
        int l=s.length();
        string ans;
	for(int i=0;i<l;i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			ans+=s[i];
		}
		else if(s[i]=='('){
		st.push(s[i]);
}
		else if(s[i]==')'){

			while(st.top()!='n' && st.top()!='(')
				{
					char x=st.top();
					st.pop();
					ans=ans+x;
				}
				if(st.top()=='(')
				st.pop();
				}
		else{
			while(st.top()!='n' && prec(s[i])<=prec(st.top()))
			{
				char c=st.top();
				st.pop();
				ans+=c;
			}
			st.push(s[i]);
		   }
	}
	
	while(st.top()!='n')
	{
		char c=st.top();
		st.pop();
		ans+=c;
	}
		cout<<ans<<endl;
}

int main(int argc,char* argv[]){
 string arr=argv[1];
inf_post(arr);
return 0;
}			
