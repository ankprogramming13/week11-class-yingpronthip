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
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    int getheight()
    {
        return height;
    }
};

int main ()
{
    Student noctis(36548,"noctis",20,176);
    Student ignis(36549,"ignis",22,183);
    Student gladiolus(36550,"gladiolus",23,198);
    Student prompto(36551,"prompto",20,173);
    cout <<"id"<< noctis.getId()<<endl;
    cout <<"name"<< noctis.getname()<<endl;
    cout <<"age"<< noctis.getage()<<endl;
    cout <<"height"<< noctis.getheight()<<endl;

    cout <<"id"<< ignis.getId()<<endl;
    cout <<"name"<< ignis.getname()<<endl;
    cout <<"age"<< ignis.getage()<<endl;
    cout <<"height"<< ignis.getheight()<<endl;

    cout <<"id"<< gladiolus.getId()<<endl;
    cout <<"name"<< gladiolus.getname()<<endl;
    cout <<"age"<< gladiolus.getage()<<endl;
    cout <<"height"<< gladiolus.getheight()<<endl;

    cout <<"id"<< prompto.getId()<<endl;
    cout <<"name"<< prompto.getname()<<endl;
    cout <<"age"<< prompto.getage()<<endl;
    cout <<"height"<< prompto.getheight()<<endl;

    return 0;
}
