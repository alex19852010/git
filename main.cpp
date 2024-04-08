#include <iostream>
#include <memory>
#include <fstream>
#include <cassert>
#include <exception>

using namespace std;

int divide(int divident, int divisor)
{
  if(divisor == 0)
  {
     throw::exception();
  }
  return divident / divisor;
}

int destribute(int apples, int count)
{
   if(apples < 0 || count < 0)
   {
     throw::exception();
   }
   return divide(apples, count);
}

int main()
{
  int count = 0;
  int apples = 0;
  int amount = 5;
  cout << "enter count: ";
  cin >> count;
  cout << "enter apples: ";
  cin >> apples;
  int amount2 = 10;

   try
   {
     cout << "apples " << destribute(apples, count) << endl;
   }
  
   catch(const exception& x)
     {
        cerr << "cought exception: " << x.what() << endl;
     }

  return 0;
}
