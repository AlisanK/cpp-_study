#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    getline(cin, s);
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if ((i  % 5 == 0) & (i != 0))
        {
            cout << ' ';
        }
        cout << s[i];
    }
    return 0;
}
