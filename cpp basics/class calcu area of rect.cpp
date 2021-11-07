#include <iostream>
using namespace std;

class rect
{
    int l, b, a;

public:
    void accept()
    {
        cout << "Enter length";
        cin >> l;
        cout << "Enter breadth";
        cin >> b;
    }
    void area()
    {
        a = l * b;
        cout << "\n"
             << area;
    }
};

int main()
{
    rect a;
    a.accept();
    a.area();
    return 0;
}
