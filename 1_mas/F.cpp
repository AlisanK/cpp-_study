#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int temp;

    int M[N];

    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }
	for (int i = 0; i < N - 1; i++)
    {
    	for (int j = 0; j < N - i - 1; j++)
    	{
    		if (M[j] > M[j+1])
    		{
    			temp = M[j];
    			M[j] = M[j+1];
    			M[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++)
    {
        cout << M[i] << ' ';
    }
return 0;
}
