#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    int k = 1;
    getline(cin, s);
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            k++;
        }
    }
    cout << k;
    return 0;
}
