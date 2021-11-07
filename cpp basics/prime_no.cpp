#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, c = 2, f = 0;
    cout << "Enter any positive num ";
    cin >> n;

    if (n == 1)
    {
        cout << "neither prime nor composite";
    }
    else if (n > 1)
    {
        while (c < sqrt(n))
        {
            if (n % c == 0)
            {
                cout << "not prime";
                f = 1;
                break;
            }
            c = c + 1;
        }
    }
    if (f == 0)
    {
        cout << "is Prime";
    }

    return 0;
}