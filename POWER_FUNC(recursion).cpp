#include <iostream>
using namespace std;
float powerf(float x, signed int y) ;
int main()
{
  float base, power, result;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter power: ";
  cin >> power;
  result = powerf(base, power);
  cout << base << "^" << power << " = " << result;
  return 0;
}
float powerf(float x, signed int y) 
{ 

    if (y == 0) 

        return 1; 

    if (y % 2 == 0) 

        return powerf(x, y / 2) * powerf(x, y / 2); 

    else
    {
         if(y>0)
            return x * powerf(x, y / 2) * powerf(x, y / 2);
         else
               return ((powerf(x, y/2) * powerf(x, y/2)) / x) ;
    } 
}
