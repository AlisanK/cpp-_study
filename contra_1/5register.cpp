#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (i % 2) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += 'a' - 'A' ;
			}
		}
		else {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] += 'A' - 'a' ;
			}
		}
	}

	cout << s;
	return 0;
}
