#include <iostream>
using namespace std;

main()
{
    string name;

    cout << "Enter string: ";
    getline(cin, name);


    int count = 0;

    for (int i = 0; i <= (name.length() - 1); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;
}