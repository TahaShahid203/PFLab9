#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    bool flag = false;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter character: ";
    cin >> letter;

    for (int i = 0; i < name.length(); i++)
    {
        if (letter == name[i])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Letter exists in string" << endl;

    }
    else
    {
        cout << "Letter does not exist in the string" << endl;
    }
}