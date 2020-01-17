#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return (b!=0) ? gcd(b, a%b) : a;
}

int main()
{
	int n1, n2, result;
 do{
    cout<<"\nEnter 2 numbers: ";
	cin>>n1>>n2;
	 if(n1==0&&n2==0)
    cout<<"Invalid";
	 }while(n1==0&&n2==0) ;
	 if(n1==0||n2==0)
    {
	cout<<"\n Result : 1";
    
     }
    else
	{
	
	result=gcd(n1, n2);
	cout<<"\nThe gcd of "<<n1<<" and "<<n2<<" is: "<<result;
}
	return 0;
}

