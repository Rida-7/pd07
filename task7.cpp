#include <iostream>
using namespace std;
main()
{
    int n;
    int num;
    float divBy2=0, divBy3=0, divBy4=0;
    float p1, p2, p3;
    cout << "Enter n: ";
    cin >> n;
    for (int count = 1; count <= n; count++)
    {
        cout << "Enter number: ";
        cin >> num;
        if (num % 2 == 0)
        {
            divBy2 = divBy2+1;
        }
        if (num % 3 == 0)
        {
            divBy3 = divBy3+1;
        }
        if (num % 4 == 0)
        {
            divBy4 = divBy4+1;
        }
    }
    p1 = (divBy2*100)/n;
    p2 = (divBy3*100)/n;
    p3 = (divBy4*100)/n;

    cout << "p1 is: " << p1 << "%" << endl;
    cout << "p2 is: " << p2 << "%" << endl;
    cout << "p3 is: " << p3 << "%" << endl;
}