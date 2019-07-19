#include<stdio.h>
#include<stdlib.h>
  int main(int argc,char*argv[])
   {
     int a[argc];
     int index,j=0;
     int small,l;
        for(int i=2;i<argc;i++)
         {a[j]=atoi(argv[i]);
           j++;
         }
	small=a[0];
        for(int i=1;i<argc;i++)
        {if(a[i]<small)
          {small=a[i];
            index=i; }}
        if(index<argc){
	l=argc-index-2;
 printf("Array is rotated %d times to right or \n it is rotated %d times to left",index,l);  
}
        else
        printf("Array is rotated %d times to right or\n not rotated to left",argc);
return 0;
}
