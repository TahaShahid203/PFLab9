#include <iostream>
using namespace std;

main()
{
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);
    
    
    for (int i = (sentence.length() - 1); i >=0; i--)
    {
        cout << sentence[i];
    }
}