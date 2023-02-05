#include <iostream>
using namespace std;
int triangle(int number);
main()
{
    int number, result;
    cout << "Enter Number: ";
    cin >> number;

    result = triangle(number);
    cout << result;
}

int triangle(int number)
{
    int sum = 0;
    for (int num = 1; num <= number; num = num + 1)
    {
        sum = sum + num;
    }
    return sum;
}