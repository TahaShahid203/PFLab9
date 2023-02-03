#include <iostream>
using namespace std;

main()
{
    string line;

    cout << "Enter sentence: ";
    getline(cin, line);

    int length = line.length();

    string prefix = "something ";

    char result[length + 10];

    for (int i = 0; i < 11; i++)
    {
        result[i] = prefix[i];
    }

    for (int i = 10; i < (length + 10); i++)
    {
        result[i] = line[i - 10];
    }

    for (int i = 0; i < (length + 10); i++)
    {
        cout << result[i];
    }
}