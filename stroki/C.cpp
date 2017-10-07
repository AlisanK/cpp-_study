#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    int k = 0;
    getline(cin, s);
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '0')|(s[i] == '2')|(s[i] == '4')|(s[i] == '6')|(s[i] == '8'))
        {
            k++;
        }
    }
    cout << k;
    return 0;
}
