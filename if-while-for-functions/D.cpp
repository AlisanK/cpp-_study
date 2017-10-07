#include <iostream>
using namespace std;

int main() {
    int n;
    int k = 1;
    int c;
    int m;
    cin >> n;
    cin >> m;
    for(int i = 1; i < n; i++)
    {
        cin >> c;
        if(c < m)
        {
            m = c;
            k = 1;
        }
        else if(c == m)
        {
            k++;
        }
    }
    cout << m << ' ' << k;
    return 0;
}
