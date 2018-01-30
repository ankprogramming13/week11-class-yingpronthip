#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
public:
    Student(int i, string n, int a, double h)
    {
        id = i;

    }

    int getId()
    {
        return id;
    }
    // เพิ่มเอาเอง
};

int main ()
{

    return 0;
}
