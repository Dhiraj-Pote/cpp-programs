#include <iostream>
using namespace std;

class largest
{
    int i, n, lar, arr[10];

public:
    void fun()
    {
        cout << "Enter array size: ";
        cin >> n;

        for (i = 0; i < n; ++i)
        {
            cout << "Enter Numbers:  \n";
            cin >> arr[i];
        }

        for (i = 1; i < n; ++i)
        {
            if (a[i] > lar)
                lar = a[i];
        }
        cout << "Largest element is " << arr[0];
    }
};

int main()

{
    largest l;
    l.fun();
    return 0;
}
