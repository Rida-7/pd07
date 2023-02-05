#include <iostream>
using namespace std;
void triangle(int rows);
main()
{
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;

    triangle(rows);
}

void triangle(int rows)
{
    for (int i = 1; i <= rows; i++ )
    {
        for (int t = 1; t <= i; t++)
        {
            cout << "*";
        }
        for (int s = rows; s >= i; s--)
        {
            cout << " ";
        }
        for (int s = rows; s >= i; s--)
        {
            cout << " ";
        }
        for (int t = 1; t <= i; t++)
        {
            cout << "*";
        }
        cout << endl;
    }
}