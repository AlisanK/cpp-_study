#include <iostream>
using namespace std;

int main() 
{
    int N;
    int m;
    int k;
    cin >> N;
    cin >> m;
    k = m % N;

    int M[N];

    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (i + k < N)
        {
            cout << M[i + k] << ' ';
        }

        else if (i + k >= N)
        {
            cout << M[i - N + k] << ' ';
        }
    }

}
