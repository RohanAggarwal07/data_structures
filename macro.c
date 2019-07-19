#include<stdio.h>
#define product(a,b) a*b
#define concat(a,b) a##b
   int main()
	{
	 int n1,n2,res;
	   scanf("%d%d",&n1,&n2);
		printf("%d\n",product(n1,n2));
		printf("%d\n",concat(341,443));
   return 0;
	}
		
