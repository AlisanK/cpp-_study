#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n;
    int temp;
    int max = 0;
    int current = 0;
    getline(cin, s);
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        temp = int(s[i]);
        if ((temp > 47) & (temp < 58))
        {
            temp = temp - 48;
            current = current * 10 + temp;
            if (current > max)
            {
            	max = current;
			}
        }
        else
        {
        	current = 0;
		}
    }
    cout << max;
    
    return 0;
}
