#include <iostream>
using namespace std;


main()
{
    int size;
    bool flag = false;
    int number;
    cout << "Enter size of array: ";
    cin >> size;

    int array[size];
    for (int i=0; i<size; i++)
    {
        cout << "Enter number: ";
        cin >> array[i];

    }

    cout << "Enter number to be compared: ";
    cin >> number;

    for (int i=0; i<size; i++)
    {
        if (number==array[i])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Number already exists." << endl;
    }
    else
    {
        cout << "Number does not already exist." << endl;
    }
}