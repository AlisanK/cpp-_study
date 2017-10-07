#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    int temp;
    getline(cin, s);
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        temp = int(s[i]);
        if ((temp > 64) & (temp < 91))
        {
            temp = temp + 32;
            s[i] = char(temp);
        }
        cout << s[i];
    }
    return 0;
}
