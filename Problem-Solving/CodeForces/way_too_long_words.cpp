#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string abbvr(string word)
{
    int i = 1;
    if (word.length() < 10)
    {
        return word;
    }
    while (word[i++] != '\s');
    string res = word[0] + to_string(i) + word[i-1];
    return res;
}

int main()
{
    int n;
    cin >> n;
    char * words[n];
    for (int i = 0; i < n; i++)
        cin.getline(words[i], 100);
    for (int i = 0; i < n; i++)
        cout << abvr(words[i]) << endl;
}
