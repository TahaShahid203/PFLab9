#include <iostream>
using namespace std;

bool richOrNot(float sum, float cost);

main()
{
    float money[4];
    float sum = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter input: ";
        cin >> money[i];
    }

    sum = money[0]*0.25 + money[1]*0.10 + money[2]*0.05 + money[3]*0.01;

    float cost;

    cout << "Enter cost of item: ";
    cin >> cost;

    bool result = richOrNot(sum, cost);

    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

bool richOrNot(float sum, float cost)
{
    if (sum >= cost)
    {
        return true;
    }
    else 
    {
        return false;
    }
    return 0;
}