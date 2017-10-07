#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    if(x > y)
    {
        cout << 1;
    }
    if(x < y)
    {
        cout << 2;
    }
    if(x == y)
    {
        cout << 0;
    }
    return 0;
}
