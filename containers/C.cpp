#include <iostream>
#include <map>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	int c;
	map <int, int> dict;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c;
		dict[c]++;
	}




	cout << dict.size();
	//system("pause");
	return 0;
}*
