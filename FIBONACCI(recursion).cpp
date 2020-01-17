#include<iostream>
#include<stdlib.h>
using namespace std;
int fib(int x);
 int main()
{
    int num,i=0;
    cout<<"\n Enter the no. of terms";
    cin>>num;
    if(num<=0)
    {
    	cout<<"\n INVALID";
    	exit(0);
	}
    cout<<"\nFibonacci Series";
 
    while(i<num)
    {
        cout<<" "<<fib(i);
        i++;
    }
 
    return 0;
}
int fib(int x)
{
    if((x==1)||(x==0))
    {
        return(x);
    }
    else
    {
        return(fib(x-1)+fib(x-2));
    }
}
 
