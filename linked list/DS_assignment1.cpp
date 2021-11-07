/* A program in C++ to sort the numbers in an array using
separate functions for read, display, sort and swap. */

#include <iostream>
using namespace std;
int arr[5];

void read()
{
    int i;
    cout << "enter the elements:  \n";
    for (i = 0; i < 5; ++i)
        cin >> arr[i];
}

void display()
{
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << "  ";
}

void sort()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array is  ";
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

void swap(int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    cout << "After Swaping  ";
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << "  ";
}

int main()
{
    read();
    int ch;

    cout << "\n1) Display " << endl;
    cout << "2) sort " << endl;
    cout << "3) Swap" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "\n \nEnter choice: " << endl;
        cin >> ch;
        cout << "\n";
        switch (ch)
        {
        case 1:
        {
            display();
            break;
        }
        case 2:
        {
            sort();
            break;
        }
        case 3:
        {
            int i, j;
            cout << "Enter indices to swap: " << endl;
            cin >> i;
            cin >> j;
            swap(i, j);
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);

    return 0;
}