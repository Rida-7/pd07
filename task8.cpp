#include <iostream>
using namespace std;
main()
{
    int cargo;
    float tons, totalTons;
    int mBus=0, truck=0, train=0;
    float mBusPercent, truckPercent, trainPercent, average;
    cout << "Enter count for Cargo Transportation: ";
    cin >> cargo;

    for (int count = 1; count <= cargo; count = count + 1)
    {
        cout << "Enter Tons for Cargo: ";
        cin >> tons;

        if (tons <= 3)
        {
            mBus = mBus + tons;
        }
        if ( tons > 3 && tons <= 11)
        {
            truck = truck + tons;
        }
        if (tons > 11)
        {
            train = train + tons;
        }
    }

    totalTons = mBus + truck + train;
    mBusPercent = (mBus*100) / totalTons;
    trainPercent = (train*100) / totalTons;
    truckPercent = (truck*100) / totalTons;
    average = (mBus*200)+(truck*175)+(train*120);
    average = average / totalTons;


cout << "Average Price per ton of Carried Cargo : " << average << endl;
cout << "Percentage of Cargo by MiniBus: " << mBusPercent << "%" << endl;
cout << "Percentage of Cargo by Truck: " << truckPercent << "%" << endl;
cout << "Percentage of Cargo by Train: " << trainPercent << "%" << endl;
}