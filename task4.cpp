#include <iostream>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    amplify(num);
}

void amplify(int num)
{
    int number = 0;
    for (int count = 1; count <= num; count ++)
    {
        number = number + 1;
        if (number % 4 == 0)
        {
            cout << number*10 << ", ";
            continue;
        }

        cout << number << ", ";
    } 
}