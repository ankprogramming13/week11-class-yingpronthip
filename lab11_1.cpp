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
<<<<<<< HEAD
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }
=======
    string getName(){
        return name;}
>>>>>>> master

};

int main ()
{

    return 0;
}
