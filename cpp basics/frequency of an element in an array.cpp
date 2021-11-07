#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, key, n, freq = 0;
    cout << "enter size of array ";
    cin >> n;
    cout << "enter " << n << " elements \n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter element to search  ";
    cin >> key;

    for (i = 0; i < n; i++)
        if (arr[i] == key)
            freq++;

    cout << "total frequency of " << key << " is " << freq;

    return 0;
}