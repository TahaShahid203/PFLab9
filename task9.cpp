#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter character: ";
    cin >> letter;


    if (letter == name[name.length() - 1])
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}