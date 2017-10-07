#include <iostream>
using namespace std;

int hoar_sort(int *mas, int mas_size, int first, int last)
{
    int mid, temp;
    int l = last, f = first;
    mid = mas[(f + l) / 2]; 
    do
    {
        while (mas[f] < mid)
            f++;
        while (mas[l] > mid)
            l--;
        if (f <= l) 
        {
            if (f != l)
            {
                temp = mas[f];
                mas[f] = mas[l];
                mas[l] = temp;
            }
            f++;
            l--;
        }
    } while (f <= l);
    if (first < l) hoar_sort(mas, mas_size, first, l);
    if (f < last) hoar_sort(mas, mas_size, f, last);
    return 0;
}

int main()
{
    int N;
    cin >> N;
    int M[N];

    for (int i = 0; i < N; i++)
        cin >> M[i];
    hoar_sort(M, N, 0, N - 1);

    for (int i = 0; i < N; i++)
        cout << M[i] << " ";
    return 0;
}
