#include <iostream>
using namespace std;

main()
{

    float sum = 0;

    int numberOfResistors;
    cout << "Enter number of resistors in the circuit: ";
    cin >> numberOfResistors;


    float resistors[numberOfResistors];
    for (int i=0; i < numberOfResistors; i++)
    {
        cout << "Enter resistance: ";
        cin >> resistors[i];

    }

    for (int i=0; i < numberOfResistors; i++)
    {
        sum = sum + resistors[i];
    }

    cout << "Total resistance: " << sum << endl;
}