#include<iostream>
#include<stdlib.h>
using namespace std;
int fact_fun(int num);
int main()
{
	int fact=0,n;
	cout<<"ENTER NO.";
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
	else
	{
		
	
	fact =fact_fun(n);
    
	cout<<" \n THE FACTORIAL OF THE GIVEN NO. IS : ";
	cout<< fact;
}
	return 0;
}
int fact_fun(int num)
{    int fact=num;
	if(num==1)
	return 1;
	else
	{
		return fact*fact_fun(num-1) ;
	}
}

