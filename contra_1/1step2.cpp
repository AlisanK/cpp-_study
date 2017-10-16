#include <iostream>
using namespace std;

int main()
{
    float k;
    cin >> k;
    while (k >= 2)
    {
        k = k/2;
	}
    if (k == 1)
    {
        cout << 1;
	}
    else
    {
        cout << 0;
	}

    return 0;
}
