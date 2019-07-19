#include<stdio.h>
#include<stdlib.h>
 int main(int argc,char*argv[])
 {
  int j=0;
  int a[argc];
   for(int i=2;i<argc;i++)
	{ a[j]=atoi(argv[i]);
	    j++;
	}
   /*for(int i=0;i<argc-2;i++)
	{ int temp=0;
	   temp=a[i];
	   a[i]=a[argc-i-3];
	   a[argc-i-3]=temp;
	}
   */for(int i=argc-3;i>=0;i--)
	{ printf("%d\n",a[i]); 
	}
 return 0;	 
 }
