#include <iostream>
using namespace std;

main()
{
    int size;
    int sum = 0;
    cout << "Enter size of array: ";
    cin >> size;


    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    

    float average = sum/size;
    
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    

}