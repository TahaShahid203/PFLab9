#include <iostream>
using namespace std;

main()
{
    string sentence;

    cout << "Enter string: ";
    getline(cin, sentence);

    int idx = 0;
    while(sentence[idx] != '\0')
    {
        cout << idx << " " << sentence[idx] << endl;
        idx++; 
    }
}
