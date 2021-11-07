#include <iostream>
using namespace std;
int main()

{

    int i, j, n, temp, arr[4];

    cout << "enter size of array:  ";
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "shorted elemets are: \n";

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}