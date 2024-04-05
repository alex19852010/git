#include <iostream>
#include <memory>
#include <fstream>

using namespace std;

struct Record
{
    string name;
    string surname;
    int age;

};




int main()
{
  Record record;
  cin >> record.name >> record.surname >> record.age;
  ofstream file("record.json");
  cout << "hello Alex";
    return 0;
}