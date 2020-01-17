#include<iostream>
#include<stdlib.h>
using namespace std;
void fib(int num);
int main() 
{
	int n=0;


	    cout<<" \n Enter the no. of terms";
		cin>>n;
			if( n<=0)
	       {
		      cout<<" Invalid ";
		      exit(0);
		
		
	       }
	 fib(n);
		

	return 0;
}
void fib(int num)
{      int a=0, b=1, m=0 ;
        cout<<a<<" ";
		num=num-2;
		if(num!= -1)
		{
	      cout<<b<<" ";
	      
		  do{
		  	
		      m=a+b;
	          a=b;
	          b=m;
	          num=num-1;
	          cout<<m<<" ";
	         } while(num>-1);
	      
		}
		
	}
