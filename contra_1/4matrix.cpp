#include <iostream>
using namespace std;

int main() {
	int n, m, temp;
	cin >> n >> m;


	int** A = new int*[n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
	}

	int max = A[0][0];
	int row = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(A[i][j] > max)
			{
			max = A[i][j];
			row = i;
			}
		}
	}
	cout << max;
	
	for (int i = 0; i < n; i++) {
			temp = A[row][i];
			A[row][i] = A[m][i];
			A[m][i] = temp;
		}



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;

	return 0;
}
