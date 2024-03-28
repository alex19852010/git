#include <iostream>

using namespace std;

class Dog
{
    public:

    Dog(string _name, int _age) : name(_name)
    {
        if(_age > 0 && _age < 30)
        {
           age = _age;
        }

        
    }
  
   Dog() : Dog("snow", 0){}
   Dog(string _name) : Dog(_name, 0){}
   Dog(int _age) : Dog("snow", _age){}

    private:
    string name;
    int age;

};

int main()
{
    Dog p("pushok", 10);
    Dog d("druzgok");
    Dog n(11);
    Dog s;
   
    return 0;
}