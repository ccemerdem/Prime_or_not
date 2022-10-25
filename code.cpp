#include <stdio.h>
#include <conio.h>
#include <math.h>

int main () {
	
	int a,b;
	printf("num: ");
	scanf("%d",&a);
	
    if (a==1 || a==0) {
	 printf ("%d is not a prime num",a);
    }
	
	for(b=2;b<a;++b)
	{  
	 if (a%b==0 || a==2){
      printf("%d is not a prime num\n",a);
	   break;
      }
	 else { 
	  printf("%d is a prime num\n",a);
	   break;
      } 
    }  
   
   getch();
    return 0;
}









