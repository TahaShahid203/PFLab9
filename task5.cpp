#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int array[size];
    

    for (int i=0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> array[i];
    }

    int small = array[0];

    for (int i=1; i < size; i++)
    {
        if (array[i] < small)
        {
            small = array[i];
        }
    }

    cout <<"Smallest: " << small << endl;

}