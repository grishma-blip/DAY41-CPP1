#include <iostream>
using namespace std;
class demo 
{
protected:
    void display()
    {
        cout << "Access only in derived class, not outside classes" << endl;
    }
};
class derived : public demo
{
public:
    void getdisplay()
    {
        display(); 
    }
};
int main()
{
    derived d;
    d.getdisplay(); 
    return 0;
}