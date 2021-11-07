#include <iostream>
using namespace std;

class calci
{
    float a, b, ans;

public:
    void getdata()
    {
        cout << "Enter two numbers:  \n";
        cin >> a >> b;
    }
    void add()
    {
        ans = a + b;
        cout << a << "+" << b << " =  " << ans;
    }
    void sub()
    {
        ans = a - b;
        cout << a << "-" << b << " =  " << ans;
    }
    void mult()
    {
        ans = a * b;
        cout << a << "*" << b << " =  " << ans;
    }
    void div()
    {
        ans = a / b;
        cout << a << "/" << b << " =  " << ans;
    }
};
int main()
{
    calci a;
    a.getdata();
    char op;
    cout << "Enter the Operation to be Performed:   + - * /   \n";
    cin >> op;
    if (op == '+')
        a.add();
    if (op == '-')
        a.sub();
    if (op == '*')
        a.mult();
    if (op == '/')
        a.div();

    return 0;
}
