#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{   
    float m; // base no.
    int n; // exponent
    float t=1; // store the result
    int i=0; // counter
	do
	{
		cout<<" \n ENTER THE BASE NO. (m): ";
		cin>>m;
		cout<<" \n ENTER THE EXPONENT (n) : ";
		cin>>n;
		if( m==0)
		{ 
		 cout<<" \n NOT DEFINED" ;
	    }
	}while(m==0);
	       
		   
		if( n==0)
	    {
		       cout<<"\n 1";
		       exit(0);
	    }
	    
	    if( n<0)
        { 
        m=1/m;
	    
	    while(i!=(-n))
	    {
	    	t*=m;
	    	i++;
		}
	    }
	    
	    else
	    {
	    	while(i!=n)
	    {
	    	t*=m;
	    	i++;
		}
	    	
		}
		cout<<"\n THE RESULT IS : ";
		cout<<t;
    return 0;		
}
