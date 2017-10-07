#include <iostream>
using namespace std;

int main() 
{
    int c;
    cin >> c;
    int temp;

    int M[4];

    for (int i = 0; i < 4; i++)
    {
        M[i] = c % 10;
        c = c / 10;
    }
	for (int i = 0; i < 3; i++)
    {
    	for (int j = 0; j < 3 - i; j++)
    	{
    		if (M[j] > M[j+1])
    		{
    			temp = M[j];
    			M[j] = M[j+1];
    			M[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if ((M[0] == 0) & (M[1] == 0) & (M[2] == 0))
		{
			temp = M[0];
    		M[0] = M[3];
    		M[3] = temp;
		}
		else if ((M[0] == 0) & (M[1] == 0))
		{
			temp = M[0];
    		M[0] = M[2];
    		M[2] = temp;
		}
		else if (M[0] == 0)
		{
			temp = M[0];
    		M[0] = M[1];
    		M[1] = temp;
		}
	}
	for (int i = 0; i < 4; i++)
    {
        cout << M[i];
    }
return 0;
}
