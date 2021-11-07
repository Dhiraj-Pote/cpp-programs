#include <iostream>
using namespace std;

class Rectangle
{
    int a, l, b;

public:
    void input()
    {
        cout << "Enter length and breadth:  ";
        cin >> l >> b;
    }
    void area()
    {
        a = l * b;
        cout << "Area is: " << a;
    }
};

int main()
{
    Rectangle r;
    r.input();
    r.area();
    return 0;
}
