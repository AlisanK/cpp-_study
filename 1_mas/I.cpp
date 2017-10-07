#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int M[N];
    int mn = 10000;
    int mx = 0;
    int flag = 0;
    int k = 0;
    int l = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
        if (M[i] < mn)
        {
        	mn = M[i];
		}
		if (M[i] > mx)
        {
        	mx = M[i];
		}
    }

    for (int i = mn; i <= mx; i++)
    {
    	for (int j = 0; j < N; j++)
    	{
    		if (M[j] == i)
    		flag = 1;
		}
		if (flag == 0)
		{
			k++;
		}
		flag = 0;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if ((M[i] == M[j]) & (M[i] != 0))
			{
				l++;
				M[j] = 0;
			}
		}
	}
	cout << k - l;
    
return 0;
}
