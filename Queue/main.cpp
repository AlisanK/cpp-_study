#include <iostream>
#include "Queue.h"

int main() {

	Queue<int> Q;
	int x;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> x;
		Q.add_node(x);
	}
	Q.pop_node();
	Q.Queue_Dump();
	system("pause");
	return 0;
}
