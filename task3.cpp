#include <iostream>
using namespace std;
void upperPart(int rows);
void lowerPart(int rows);
main()
{
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;
    rows = (rows/2) + 1;

    upperPart(rows);
    lowerPart(rows);

}

void upperPart(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for(int j = rows; j >= i; j--)
        {
            cout << " ";
        }    
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerPart(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << " ";
        }    
        for(int k = rows; k >=i; k--)
        {           
          cout <<"*";
        }
        cout << endl;
        
    }
}