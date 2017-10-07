#include <iostream>
using namespace std;

int main()
{
   int N;
    cin >> N;

    int M[N];

    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }

    int min1;
    int min2;
    int max1;
    int max2;
    int x;

    min1 = 1000000;
    min2 = 1000000;
    max1 = 0;
    max2 = 0;

    for (int i = 0; i < N; i++)
    {
        x = M[i];
        if (x > max2)
        {
            max2 = x;
            if (x > max1)
            {
                max2 = max1;
                max1 = x;
            }
        }
        if (x < min2)
        {
            min2 = x;
            if (x < min1)
            {
                min2 = min1;
                min1 = x;
            }
        }
    }

    cout << min1 + min2 << ' ';
    cout << max1 + max2 << ' ';
}
