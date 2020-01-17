#include<iostream>
using namespace std;
int fact_fun(int num);
int main()
{
	int fact=1; // factorial
	int n; // n is the no.
	 	 cout<<" \n ENTER THE NO. : ";
	 	 cin>>n;
 try
	{  
	   if(n<0)
	   throw"invalid input";
    }
    catch(const char *str)
    {
	  cout<<str;
    }
	 if(n==0)
	 {
	   cout<<" \n THE FACTORIAL OF THE GIVEN NO. IS : 1  ";
	   exit(0);
	   
	 	
	 }
	 else if (n>0)
	 {
	 fact=fact_fun(n);
	 
	  cout<<" \n THE FACTORIAL OF THE GIVEN NO. IS : ";
	  cout<< fact;
     }
	  return 0;
}
int fact_fun(int num)
{
    int fact=1;
for(int i=num; i>0 ; i--)
	 {
	 	fact *= i;
	 
	}
return fact;
}
	
