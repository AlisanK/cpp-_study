
#include <iostream>
#include "Queue.h"
#include "Q_node.h"

int main() {

	/*Queue<int> Q;
	int x;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> x;
		Q.add_node(x);
	}*/

	int x;
	std::cin >> x;
	QNode<int> Qn(x);
	Qn.QNode_Dump();



	system("pause");
	return 0;
