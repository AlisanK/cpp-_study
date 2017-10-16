#include <iostream>
using namespace std;

int main()
{
    int n, x, first, flag, d4 = 0, d7 = 0, d9 = 0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        first = x/1000;
        flag = 0;
        if ((x%4==0) && (first!=4) && (first!=5))
        {
        	d4 = 1;
		}
		if ((x%7==0) && (first!=7) && (first!=1))
        {
        	d7 = 1;
		}
		if ((x%9==0) && (first!=8) && (first!=9))
        {
        	d9 = 1;
		}
        if (d4 + d7 + d9 != 0){
            flag = 1;
            d4 = 0;
            d7 = 0;
            d9 = 0;
            cout << x << ' ';
        }
    }
    if(flag == 0)
        cout << 0;

    return 0;
}
