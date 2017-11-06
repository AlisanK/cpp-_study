#include <iostream>
#include <stack>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	stack <int> s;
	int input = 1;
	int temp;
	while (input != 0) {
		cin >> input;
		if ((s.empty()) && (input < 0))
			continue;
		else if (input > 0)
			s.push(input);
		else if ((input < 0) && (abs(input) < s.top())) {
			temp = s.top();
			s.pop();
			s.push(temp + input);
		}
		else if ((input < 0) && (abs(input) >= s.top())) {
			s.pop();
		}
		else if (input == 0)
			break;
	}
	if (s.empty())
		cout << s.size() << " " << -1;
	else {
		cout << s.size() << " " << s.top();
	}
	//system("pause");
	return 0;
