#include <iostream>
using namespace std;

class factorial
{
    int n, f = 1;

public:
    void input()
    {
        cout << "\nEnter any number: ";
        cin >> n;
    }

    void calc()
    {
        for (int i = 1; i <= n; ++i)
        {
            f *= i;
        }
    }

    void display()
    {
        cout << "\nFactorial of " << n << " is " << f << "\n";
    }
};

    int main()
    {
        factorial f;
        f.input();
        f.calc();
        f.display();

        return 0;
    }