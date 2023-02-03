#include <iostream>
using namespace std;

main()
{
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);

    int idx=0;

    while(sentence[idx]!='\0')
    {
        idx++;
    }
    if (idx%2 == 0)
    {
        cout << "Even" << endl;
    }
    else 
    {
        cout << "Odd" << endl;
    }

}