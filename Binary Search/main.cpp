// Program: Coding

#include <iostream>
// #include <conio.h>

using namespace std;
int main()
{
    int a[100], n, beg, end, mid, data;

    // clrscr();
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter data you want to search: ";
    cin >> data;

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while ((beg <= end) && (a[mid] != data))
    {
        if (a[mid] > data)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }

    if (a[mid] == data)
        cout << "\nData is found";
    else
        cout << "\nData is not found";

    // getch();
    return 0;
}
