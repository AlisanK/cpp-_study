#include <iostream>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	int temp;
	int n;
	cin >> n;
	vector<string> A(n,"");
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		for (int j = 0; j < A[i].length(); j++)
		{
			temp = int(A[i][j]);
			if ((temp > 64) & (temp < 91))
			{
				temp = temp + 32;
				A[i][j] = char(temp);
			}
		}
	}
	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());
	cout << A[0] << " ";
	for (int i = 1; i < n; i++) {
		if (A[i] != A[i - 1]) {
			cout << A[i] << " ";
		}
	}
	
	//system("pause");
	return 0;
}
