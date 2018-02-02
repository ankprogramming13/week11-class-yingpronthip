#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    double height;
    // เพิ่มเอาเอง
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;

    }

    int getId()
    {
        return id;
    }
    string getName(){
        return name;}

};

int main ()
{

    return 0;
}
