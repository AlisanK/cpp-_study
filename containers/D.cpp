#include <iostream>
#include <map>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	string c;
	int temp;
	map <string, int> dict;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		for (int j = 0; j < c.length(); j++)
		{
			temp = int(c[j]);
			if ((temp > 64) & (temp < 91))
			{
				temp = temp + 32;
				c[j] = char(temp);
			}
		}
		dict[c]++;
	}

	map <string, int>::iterator cur;
	int max = 0;
	string maxs;

	for (cur = dict.begin(); cur != dict.end(); cur++)
	{
		if ((*cur).second > max) {
			max = (*cur).second;
			maxs = (*cur).first;
		}
	}

	cout << maxs << " " << max;

	//system("pause");
	return 0;
}
