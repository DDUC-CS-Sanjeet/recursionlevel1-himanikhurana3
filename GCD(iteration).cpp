#include<iostream>

using namespace std;
int gcd(int a,int b);

int main()
{  
   int num1,num2;
   int result;
   
   do{
   cout<<"\nEnter the first no.\t";
   cin>>num1;
   cout<<"\n Enter the second no.\t";
   cin>>num2;
   if(num1==0&&num2==0)
    cout<<"Invalid";
    }while(num1==0&&num2==0) ;
    if(num1==0||num2==0)
    {
	cout<<"\n Result : 1";
    
     }
    else
	{
	result=gcd(num1,num2);   
    cout<<"\n Result :"<<result;
    }    
    return 0;
}
int gcd(int a,int b)
{
	 int temp=0;
  while(b!=0)
  {
  	temp=a;
  	a=b;
  	b= temp%b;
   } 
   
   return a;
	
    

}
