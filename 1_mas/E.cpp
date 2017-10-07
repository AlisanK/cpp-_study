#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    int M[N];

    for (int i = 2; i <= N; i++)
    {
        M[i] = i;
    }
	for (int i = 2; i <= N; i++)
    {
    	if (M[i] != 0)
    	{
    		cout << M[i] << ' ';
    		for (int j = i*i; j <= N; j += i)
        	{
        		M[j] = 0;
			}
		}
	}
return 0;
}
