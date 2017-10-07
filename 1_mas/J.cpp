#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int M[N];
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }
    for (int i = 0; i < N; i++)
    {
    	for (int j = i + 1; j < N; j++)
    	{
    		if ((M[i] == M[j]) & (flag == 0))
    		{
    			flag = 1;
			}
			else if ((M[i] == M[j]) & (flag == 1))
			{
				cout << 0;
				return 0;
			}
		}
	}
cout << 1;
return 0;
}
