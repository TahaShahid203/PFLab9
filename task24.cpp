#include <iostream>
using namespace std;

main()
{

    string sentence;

    cout << "Enter string: ";
    getline(cin, sentence);

    for (int i = 0; i <= sentence.length(); i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
            continue;
        }
        else
        {
            cout << sentence[i];
        }
    }
}