#include <iostream>
using namespace std;

main()
{
    float firstArray[2];
    int numberOfElements;

    cout << "Enter 1st element of first array: ";
    cin >> firstArray[0];

    cout << "Enter 2nd element of first array: ";
    cin >> firstArray[1];

    cout << "Enter number of elements in the second array: ";
    cin >> numberOfElements;

    float secondArray[numberOfElements];

    for (int i = 0; i < numberOfElements; i++)
    {
        cout << "Enter element for 2nd array: ";
        cin >> secondArray[i];
    }


    float finalArray[2 + numberOfElements];

    finalArray[0] = firstArray[0];

    for (int i = 1; i < (numberOfElements + 1); i++)
    {
        finalArray[i] = secondArray[i-1];
    }

    finalArray[numberOfElements + 1] = firstArray[1];
    cout << "{ ";
    for (int i = 0; i < (numberOfElements + 2); i++)
    {
        cout <<  finalArray[i] << " " ;
    }
    cout << " }";
}