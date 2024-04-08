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
<<<<<<< HEAD
  int grand = 10;
=======
  int graund2 = 10;
>>>>>>> 0129774a8527414e778135986b06aba03cccfb73

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
