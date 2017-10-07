#include <iostream>
#include <string>

using namespace std;

#include <iostream>
using namespace std;

int main()
{
	int N;
	string s0;
	string s = "";
	string temp = "";
	getline(cin, s0);
	N = s0.length();

	for (int i = 0; i < N; i++)
	{
		temp = temp + s0[i];
		if (s0[i] == ' ')
		{
			if (temp.length() < 5)
			{
				temp = "";
				cout << ' ';
			}
			else
			{
				cout << temp;
				temp = "";
			}
		}


	}

	if (temp != "")
	{
		if (temp.length() < 4)
		{
			cout << ' ';
		}
		else
		{
			cout << temp;
		}
	}

	return 0;
}
