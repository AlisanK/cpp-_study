#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x;
    int S = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if ((i % 3 == 0) & (i % 7 == 0))
            {
                S += x;
            }
    }

    cout << S;
}
