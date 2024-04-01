#include <iostream>
#include <memory>

using namespace std;

class MyClass
{

private:
string name;

public:
    MyClass(string _name) : name(_name)
    {
        cout << "MyClass constructor " << name << endl;
    }

    ~MyClass()
    {
        cout << "MyClass destructor " << name << endl;
    }

    void someMethod()
    {
        cout << "Some method of MyClass " << name << endl;
    }

    
};




int main()
{
    unique_ptr<MyClass> uniquePtr(new MyClass("Alex"));
    uniquePtr->someMethod();

    
    shared_ptr<MyClass> sharedPtr1 = make_shared<MyClass>("Fedor");
    sharedPtr1->someMethod();

    shared_ptr<MyClass> sharedPtr2(sharedPtr1);
  

    return 0;
}