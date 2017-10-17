#include <iostream> //needs cheking
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    const int inf=4000; // задаем бесконечность 
    int n, start_position, x; // n-количество вершин,х используем для приема матрицы смежности 
    cin>>n>>start_position;
    start_position--; // в условии счет начинается с единицы, а в программе с нуля 
    vector <int> verges [1001]; //задаем массив векторов, где i-ый вектор содержит в себе номера вершин в которые можно попасть с i-ой вершины
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>x;
            if (x==1){
                verges[i].push_back(j);
            }
        }
    }
    bool *used = new bool [n];
    for (int i=0; i<n; i++){
        used[i]=false;
    }
    int *distances = new int [n]; //задаем массив расстояний, где i-ый элемент - это расстояние от исходной вершины до  i-ой
    for (int i=0; i<n; i++){
        distances[i]=inf; 
    }
    distances[start_position] = 0;
    for (int i=0; i<n; i++){ //ищем вершину с наименьшей длиной пути до заданной вершины 
        int minimum=inf;
        int position = 0;
        for (int j=0; j<n; j++){
            if (distances[j]<minimum && !used[j]){
                minimum=distances[j];
                position=j;
            }
        }
        used[position]=true; //запоминаем, что применили алгоритм для вершины 
        for (int i=0; i<verges[position].size(); i++){ // применяем алгоритм Дейкстры 
            distances[verges[position][i]] = min(distances[verges[position][i]], (distances[position]+1));
        }
    }
    for (int i=0; i<n; i++) {
        cout<<((distances[i]==inf)?-1:distances[i])<<" ";
    }
    return 0;
}
