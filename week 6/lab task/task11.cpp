#include <iostream>
using namespace std;
string removeVowels(const string &input)
{
    string result = "";
    for (char ch : input)
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
            {
            result += ch;
        }
    }
    return result;
}
main(){
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    string noVowels = removeVowels(text);
    cout << "String without vowels: " << noVowels << endl;
}