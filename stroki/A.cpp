#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    getline(cin, s);
    n = s.length();
    for (int i = n-1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}
